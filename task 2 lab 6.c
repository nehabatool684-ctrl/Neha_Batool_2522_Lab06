#include <stdio.h>

int main() {
    int ticket, reversed = 0, remainder;

    printf("Enter ticket number: ");
    scanf("%d", &ticket);

    while (ticket != 0) {
        remainder = ticket % 10;           
        reversed = reversed * 10 + remainder; 
        ticket =ticket/ 10;                     
    }

    printf("Reversed ticket number: %d\n", reversed);

    return 0;
}
