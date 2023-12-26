#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("enter arey :");
    scanf("%d",&n);
    printf("\n enter elements :");

    for ( i = 0; i < n; i++){
    scanf("%d",&a[i]); 
    }
    printf("\n yourelements\n");

    for ( i = 0; i < n; i++){
        
    printf("%d\n",a[i]);      
    }
     
    return 0;
}