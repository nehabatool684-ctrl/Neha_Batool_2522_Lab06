#include <stdio.h>

int main() {
    int PIN;
    int temp;
    int sum = 0;
    printf("Enter PIN (4-digit): ");
    
    if (scanf("%d", &PIN) == 1) { 
        
        for (int count = 0; count <= 3; count++) {
            temp = PIN % 10;      
            sum = sum + temp;    
            PIN = PIN / 10;       
        }
        
        printf("sum = %d\n", sum);
    }
    else {
        printf("Invalid input. Please enter a number.\n");
    }
    if(sum>=10){
        printf("Strong PIN");
    }
    else{
        printf("weak PIN");
    }
    

    return 0;
}
