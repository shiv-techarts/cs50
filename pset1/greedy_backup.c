#include <stdio.h>
#include <cs50.h>

int main() {
    
    float change = 0.0;
    int temp = 0;
    
    printf("O hai! ");
    
    do {
        printf("How much change is owed?\n");
        change = GetFloat();    
        temp = (int) change;
    } while (change <= 0.0);
    
    change -= temp;
    temp = 1;
    
    while (change != 0.0) {
        if(change >= 0.25) {
            change -= 0.25;
            temp++;
        } 
        else if (change >= 0.10) { 
            change -= 0.10;
            temp++;
        } 
        else if (change >= 0.05) {
            change -= 0.05;
            temp++;
        } 
        else if (change >= 0.01) {
            change -= 0.01;
            temp++;
        }
        else {
            break;
        }
        //printf("%d\t%.2f\n", temp, change);
    }
    
    printf("%d\n", temp);
    
    return 0;
}