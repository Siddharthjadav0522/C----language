// check string is palindrome or not palindrome name
#include<stdio.h>
#include<string.h>
int main(){
     char str[20],str1[20];
    int ans;

     printf("enetr name: ");
     gets(str);

     strcpy(str1,str);
     printf("\n name is: %s",str);
     printf("\n name is: %s",str1);
     
     strrev(str);
     printf("\n name is: %s",str);
     ans=strcmp(str,str1);
     if (ans==0){
       printf("\n name is palindrome");
     } else{
       printf("\n name is not palindrome");
     }
     printf("\n ans %s",ans);
  
    return 0;
}