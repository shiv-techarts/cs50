/*
 * Shiv Pratap Singh
 * 7-Sep-2016
 * Hacker Edition- Credit Card Validation
 */
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int cardLength (long long cardNo); // Function to check the card length
string checkValid (long long cardNo, const string nameOfCard); // Validate the card 

int main(void) {
    int size = 0;
    int cardStartDigit = 0;
    
    printf("Number: ");
    long long creditNo = GetLongLong(); // Getting user Input
    
    size = cardLength(creditNo);
    
    cardStartDigit = (int) ( creditNo *  pow(10, -(size - 2)) ); // Find the first 2 digit of the card 
    //printf("%d\t%d",cardStartDigit, size); // For testing
    
    // Conditional Statements to check for Cards
    if((cardStartDigit == 34 || cardStartDigit == 37) && size == 15) {
        printf("%s\n",checkValid(creditNo, "AMEX"));
    } 
    else if ((cardStartDigit >= 51 && cardStartDigit <= 55) && size == 16) {
        printf("%s\n",checkValid(creditNo, "MASTERCARD"));
    } 
    else if ((cardStartDigit >= 40 && cardStartDigit <= 49) && (size == 13 || size == 16)) {
        printf("%s\n",checkValid(creditNo, "VISA"));
    } 
    else {
        printf("INVALID\n");
    }
    
    return 0;
}

int cardLength (long long cardNo) {
    
    int cardSize = 0;
    
    // Loop to find the card length
    while (cardNo != 0) {
        cardNo /= 10;
        cardSize++;
    }
    
    return cardSize;
}

string checkValid (const long long cardNo, const string nameOfCard) {
    
    long long temp = cardNo;
    int firstDigit = 0, secondDigit = 0, tempStore = 0;
    
    // Loop to find the sum of alternate digits
    while (temp) {
        firstDigit += (temp % 10);
        temp /= 100;
    }
    
    temp = cardNo;
    temp /= 10;
    
    // Loop to find the sum of alternate digits and multiply by 2
    while (temp) {
        tempStore = ( (temp % 10) * 2 );
        
        // If 2 digit result is obtained further differentiating into 2
        if (cardLength(tempStore) == 2) {
            secondDigit += (tempStore % 10);
            tempStore /= 10;
            secondDigit += tempStore;
        } else {
            secondDigit += tempStore;
        }
        temp /= 100;
    }
    
    // Finding the validation by taking out the sum
    if ( !( ( firstDigit + secondDigit ) % 10 ) ) {
        return nameOfCard;
    } else {
        return "INVALID";
    }
}