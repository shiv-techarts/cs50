/*
 * Shiv Pratap Singh
 * 04-Sep-2016
 * Water bottles wasted in shower
 */

#include <stdio.h>
#include <cs50.h>

int main() {
    //prompting the user
    printf("minutes:");
    
    int minutes = GetInt();
    //int minutes = 0;
    //scanf("%i", &minutes);
    
    if (minutes < 0) {
        printf("minutes can't be negative!..");
    } else {
        printf("bottles: %i\n", (int) (1.5 * 128 * minutes)/(16)); // Type casting the floating point value
    }
    return 0;
}