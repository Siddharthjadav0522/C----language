#include<stdio.h>
int main (){
   int i,n,ghadiyo;
   printf("enter no :");
   scanf("%d",&n);
   // number ghadiyo

   for (int i=1 ; i<=10 ; i++){
        ghadiyo=n*i;
         printf("\n %d * %d = %d ",n,i,ghadiyo);
   }
    
    
    return 0;
}