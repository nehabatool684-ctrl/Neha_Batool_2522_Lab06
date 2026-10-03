#include <stdio.h>
int main(){
    int reading;
    int even=0;
    int odd=0;
    int digit=0;

    printf("Enter meter reading:");
    scanf("%d",&reading);

    //run loop until reading is decreased to 0
   while(reading!=0){
       digit=reading%10; //separate the last digit from reading
       if(digit%2==0){ // check the digit individually if it is even or odd
           even=even+1;
       }
       else{
           odd=odd+1;
       }
       reading=reading/10; // remove that digit and check next one until all digits are checked
   }
    printf("Even number count:%d\n",even);
    printf("odd number count:%d\n",odd);
    return 0;
}
