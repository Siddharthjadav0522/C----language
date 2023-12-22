#include<stdio.h>
int main(){
    int i,n,rev=0,f;
    printf("enter no :");
    scanf("%d",&n);
    f=n;
    while (n>0){
       i=n%10;
       n=n/10;
       rev=(rev*10)+i;

    }
    printf("\n reverse no is = %d",rev);
    if (f==rev){
        printf("\n It is palindrom");
    } else {
        printf("\n It is not palindrom");
    }
    
    return 0;
}