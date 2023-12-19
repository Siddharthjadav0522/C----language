#include<stdio.h>
int main(){
    int i=1,n,ghadio;

    printf("enter no :");
    scanf("%d",&n);
    // while loop thi ghadiyo
    while(i<=10){
        ghadio=n*i;
        printf("\n %d * %d = %d",n,i,ghadio);
        i++;
    }
    
    return 0;
}