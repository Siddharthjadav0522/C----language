#include<stdio.h>
int main(){
    int a[10],i,n;                 //Negative elements
    printf("enter arey :");
    scanf("%d",&n);
    printf("\n enter elements :");

    for ( i = 0; i < n; i++){
    scanf("%d",&a[i]); 
    }
    printf("\n Negative elements = \n");

    for ( i = 0; i < n; i++){
        if (a[i]<0){
            printf("%d\n",a[i]);      
        } 
    }
     
    return 0;
}