#include<stdio.h>
int main(){
    int a[10],i,n,count=0;
    printf("enter arey :");
    scanf("%d",&n);
    printf("\n enter elements :");

    for ( i = 0; i < n; i++){
    scanf("%d",&a[i]);      
    }
    printf("\n yourelements");

    for ( i = 0; i < n; i++){
    count++;
    printf("%d\n",a[i]);   
    }
    
    printf("\n count is %d",count);   

    return 0;
}