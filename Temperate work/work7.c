#include<stdio.h>
int main(){
    int i,f=0,n,l=1,total;
    printf("enter no :");
    scanf("%d",&n);

    for ( i=0; i<= n; i++){
        total=f+l;
        printf("\n fibonacci no :%d",f);
        f=l;
        l=total;
    }
    
    return 0;
}