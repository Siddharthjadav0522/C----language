#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter no :");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++){
        fact=fact*i;
    }
    printf("\n factorial of %d is %d",n,fact);
    
    
    return 0;
}