#include<stdio.h>
int main(){

    char ch ='a';
    // abcd print a to z smole
    do{
        printf("%c \n",ch);
        ch++;
    } while (ch <='z');

    printf("\n ");
    
      char ca ='A';
    // abcd print a to z capilate
    do{
        printf("%c \n",ca);
        ca++;
    } while (ca <='Z');
    
    return 0;
}