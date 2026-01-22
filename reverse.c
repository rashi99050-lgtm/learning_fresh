#include <stdio.h>
int main (){
    int i, arr[5];
    for(i=0; i<=4;i++){
    printf("enter a element :%d\n",i+1);
    scanf("%d",&arr[i]);
}
for( int i=4;i>=0;i--){
    printf( "%d",arr[i]);
}
    return 0;
}