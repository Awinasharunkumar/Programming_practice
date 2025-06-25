/*
Day 18 assignment1

*******
 *****
  ***
   * 

*/
#include<stdio.h>
int main(){
    int i,j,k,c,d,e;
    printf("Enter how many rows you want ");
    scanf("%d",&c);
    d=c;
    e=(c*2)-1;
    for(i=1;i<=c;i++){
        for(k=d;k<c;k++){
            printf(" ");
        }
        d=d-1;
        for(j=e;j>=1;j=j-1){
            printf("*");
        }
        e=e-2;
        printf("\n");
    }
}