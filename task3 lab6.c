#include<stdio.h>
int main(){
    int absent=0;
    int present=0;
    int attendance=0;
  
    for(int count=1;count<=15;count++){
        printf("Attendance=");
        scanf("%d",&attendance);
        if(attendance==1){
            present=present+1;
        }
        else{
            absent=absent+1;
        }
    }
      printf("-------------------Attendence Record------------------\n");
    printf("Total Present=%d\n",present);
    printf("Total Absent=%d\n",absent);
    return 0;
}
