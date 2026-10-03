#include <stdio.h>

int main() {
	int num,catalan_number;
	int numerator=1;
	int denominator1=1;
	int denominator2=1;
	
	printf("enter number:");
	scanf("%d",&num);
	
	//calculating n!
	for( int count=1 ;count<=num ;count++){
		denominator1=denominator1*count;
	}
	printf("n!:%d\n",denominator1);
	//done calculating n!
	
	//calculating 2n!
	for(int count=1;count<=(2*num);count++){
		numerator=numerator*(count);
	}
	printf("2n!:%d\n",numerator);
	//done calculating 2n!
	
	//calculating (n+1)!
	for(int count=1;count<=num;count++){
		denominator2=denominator2*(1+count);
	}
	printf("(n+1)!:%d\n",denominator2);
	//done calculating (n+!)!
    catalan_number=numerator/(denominator1*denominator2);
    printf("Catalan Number:%d",catalan_number);
    
    return 0;
}
