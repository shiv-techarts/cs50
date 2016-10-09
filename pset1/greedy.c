/*
 * Shiv Pratap Singh
 * 04-Sep-2016
 * Problem based on Greedy Algorithm
 */
 
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main() {
    
    float changeOwed = 0.0;
    int cents = 0; // Store dollars as cents as integer
    int noOfCoins = 0;
    
    printf("O hai! ");
    
    // Loop for prompting user for correct input 
    do {
        printf("How much change is owed?\n");
        changeOwed = GetFloat();    
    } while (changeOwed <= 0.0);
    
    // Conversion of dollars to cents, after rounding the value
    // and trucating using explicit casting
    cents = (int) round(changeOwed * 100);
    
    // Loop for finding the number of coins
    while (cents != 0) {
        if(cents >= 25) {
            cents -= 25;
            noOfCoins++;
        } 
        else if (cents >= 10) { 
            cents -= 10;
            noOfCoins++;
        } 
        else if (cents >= 5) {
            cents -= 5;
            noOfCoins++;
        } 
        else if (cents >= 1) {
            cents -= 1;
            noOfCoins++;
        }
        else {
            break;
        }
        //printf("%d\t%.2f\n", noOfCoins, cents); // just for testing
    }
    
    // print the number of coins
    printf("%d\n", noOfCoins);
    
    return 0;
}