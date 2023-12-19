#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter no :");
    scanf("%d",&n);
    //example 5 = 1+2+3+4+5 = 15
    //example 10 = 1+2+3+4+5+6+7+8+9+10 = 55
    while(i<=n){
        printf("\n %d",i);
        sum = sum+i;

        i++;
    }
    printf(" \n sum is %d",sum);
    
    return 0;
}