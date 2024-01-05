#include<stdio.h>
#include<string.h>

 int main(){

    char str[20],str2[20];
    printf("enter name = ");
    gets(str);
    printf("name is = ");
    puts(str);

    printf("enter name 2 = ");
    gets(str2);


    printf("\n Lengh of string is %d",strlen(str));
    printf("\n Upper case of string is %s",strupr(str));
    printf("\n Lower case of string is %s",strlwr(str));
    printf("\n after value of strcmp(): %d",strcmp(str,str2));

    strcat(str,"hello");
    printf("\n after marge cat of string is %s",str);
    
    strcpy(str,"siddharth");
    printf("\n after copy of string is %s",str);

    printf("\n Reverse of string is %s",strrev(str));
    return 0;
 }