#include<stdio.h>
int main(){
    int absent=0;
    int present=0;
    int attendance=0;
    int student_count=15;
  
    for(int count=1;count<=student_count;count++){
    	 if (scanf("%d", &attendance) == 1) {
		 printf("Attendance=");
         scanf("%d",&attendance);
         if(attendance==1){
            present=present+1;
        }
         else{
            absent=absent+1;
        }
    }
    else{
    	printf("Invalid input! \n");
    	student_count=student_count+1;
    	
	}
      printf("-------------------Attendence Record------------------\n");
    printf("Total Present=%d\n",present);
    printf("Total Absent=%d\n",absent);
    return 0;
}
