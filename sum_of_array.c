#include <stdio.h>
int main(){
     int num[5] = {2,3,4,5,6};
     int i, sum = 0;
     for(i=0;i<=4;i++){
        sum = sum + num[i];
     }
       printf("%d",sum);

    return 0;
}