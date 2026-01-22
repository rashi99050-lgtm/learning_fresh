#include <stdio.h>
int main(){
    int marks[10] = {98,56,90,88,34,23,78,11,99,25};
    int i;
    for(i=0;i<10;i++){
        if(marks[i]<=35){
          printf(" index : %d marks : %d\n" , i, marks[i]);
        }
    }
    return 0;
}