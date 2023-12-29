#include<stdio.h>
int main(){
    int a[10],i,n,max=0;                 //largest number 
    printf("enter arey :");
    scanf("%d",&n);
    printf("\n enter elements :");

    for ( i = 0; i < n; i++){
    scanf("%d",&a[i]);  
    }

    printf("\n Largest number = \n");
    for ( i = 0; i < n; i++){
        if (max<a[i]){
            max=a[i];
        } 
    }
       printf("%d\n",max);      
     
    return 0;
}