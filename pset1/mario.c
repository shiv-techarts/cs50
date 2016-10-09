/*
 * Shiv Pratap Singh
 * 04-Sep-2016
 * Mario Pyramid
 */

#include <stdio.h>
#include <cs50.h>

int main() {
    
    int height = 0;
    
    do {
        // prompting the user
        printf("Height: ");
    
        height = GetInt();
    } while (height < 0 || height > 23); // loop for prompting user again if number is -ve or greater than 23 
    
    // Loops to create mario block
    for(int i = 0; i < height; i++) {
        for(int k = 0; k < ((height - i) - 1); k++) {
            printf(" ");
        }
        for(int j = 0; j < (i + 2); j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}