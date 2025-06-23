//Day 18 assignment full triangle
/*

    *
   ***
  *****
 *******
*********

*/
#include<stdio.h>
int main(){
    int i,c,j,k;
    printf("Enter how many rows want ");
    scanf("%d",&c);
    int s=c-1;
    for (i=1;i<=c*2;i=i+2){
        for(k=s;k>=1;k--){
            printf(" ");
        }
        s=s-1;
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}