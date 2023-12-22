#include<stdio.h>
int main(){
    int i,n,mult;
    printf("enter no :");
    scanf("%d",&n);

   for (int i = 1; i <= 10; i++){
        mult=n*i;
        printf("\n %d * %d = %d",n,i,mult);
   }
   
    return 0;
}