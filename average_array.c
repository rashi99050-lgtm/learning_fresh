#include <stdio.h>
int main(){
     int num[5],sum = 0 ;
     int i;
     printf("enter the element :");
     
     for(i=0;i<=4;i++){
        scanf("%d",&num[i]);
        sum = sum + num[i]/2;
     }
       printf("%d",sum);

    return 0;
}