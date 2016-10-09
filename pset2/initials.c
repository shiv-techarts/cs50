/**
 * Shiv Pratap Singh
 * 5-oct-2016
 * Problem on Capitializing the initials
 */
 
//Headers 
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

//Main function
int main() {
    
    //user input
    const string name = GetString(); //const since program is not changing anything in the string
    
    //finding the initials
    for( int i = 0; name[i] != '\0'; i++ ) {
        
        if(isalpha(name[i])) { //if character is not a space
        
            if(i == 0)
                printf("%c", toupper(name[i])); //if first character then change it to uppercase and print it
            else if(name[i - 1] == ' ')
                printf("%c", toupper(name[i])); //if previous character is space then print in uppercase
        
        }
        
    }
    
    printf("\n");
    
    return 0;
}
