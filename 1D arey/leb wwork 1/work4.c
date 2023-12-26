#include<stdio.h>
 int main(){
    int a[50],i,n,sum;
    printf("enter array :");
    scanf("%d",&n);

    printf("enter element :");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("\n your elements : ");
    for ( i = 0; i < n; i++){
        sum=sum+a[i];
        printf("\n %d",a[i]);
    }
    printf("\n sum is %d",sum);
    

    return 0;

 }