#include<stdio.h>
int main (){
   int i=1,n,ghadiyo;
   printf("enter no :");
   scanf("%d",&n);
   // number no gadiyo
    do{  
        ghadiyo=n*i;
        
     printf("\n %d * %d = %d ",n,i,ghadiyo);
     i++;
    
    } while(i<=10);
    
    return 0;
}