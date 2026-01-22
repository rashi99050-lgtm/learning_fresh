#include <stdio.h>
int main(){
    int marks[10],i;
     for(i=0;i<10;i++){
     printf("enter the marks %d :",i+1);
    scanf("%d",&marks[i]);
    
    }
   for(i=0;i<10;i++){
        if(marks[i]<=35){
          printf(" index : %d marks : %d\n" , i, marks[i]);
        }
    }
    
    return 0;

}