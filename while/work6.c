#include<stdio.h>
int main(){
    int n;
    printf("enter no :");
    scanf("%d",&n);

    while(n>=1){
        if(n%2==0){
        printf("\n %d",n);
        }
        n--;
    }
    return 0;
}