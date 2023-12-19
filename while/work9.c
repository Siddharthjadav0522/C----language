#include<stdio.h>
int main(){
    int i=1,n,mult=1;
    printf("enter no =");
    scanf("%d",&n);
    while(i<=n){
        mult=mult*i;
        i++;
    }
    printf("\n the factorial of %d is %d",n,mult);

    return 0;
}