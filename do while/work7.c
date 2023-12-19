#include<stdio.h>
int main (){
   int i=2000,sum=0;
    do{ 
        if (i%4==0){ 
            printf("%d \n",i);
            sum++;
        }
        i++;
         
    } while(i<=3000);
    // leap year no sarvalo
       printf("\n leap year total = %d",sum);


    return 0;
}