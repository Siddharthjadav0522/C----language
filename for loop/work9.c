#include<stdio.h>
int main (){
   int i=1,n,mult=1;
   printf("enter no :");
   scanf("%d",&n);
   // number multip 1 to n

   for (int i = 1 ; i<=n ; i++){

     printf("%d \n",i);
     mult=mult*i;
   }
     printf("\n mult is %d ",mult);
    
    return 0;
}