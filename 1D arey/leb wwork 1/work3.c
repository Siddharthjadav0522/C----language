#include<stdio.h>
int main(){
    int a[10],i,n,sum=0;
    float avr;
    printf("enter arey :");
    scanf("%d",&n);
    printf("\n enter elements :");

    for ( i = 0; i < n; i++){
    scanf("%d",&a[i]);      
    }
    printf("\n yourelements");

    for ( i = 0; i < n; i++){
        sum=sum+a[i];
    printf("%d\n",a[i]);      
    }
    avr=(float)sum/i;
    printf("\n sum is %d",sum); 
    printf("\n avr is %d",avr);      

     
    return 0;
}