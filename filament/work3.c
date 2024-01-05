#include<stdio.h>
#include<string.h>

 int main(){
    char s1[20],change_char,new_char;
    int i;
    printf("enter name : ");
    gets(s1);
    printf("\n your name is : ");
    puts(s1);


    printf("\n enter change charcter is : ");
    fflush(stdin);
    scanf("%c",&change_char);

    printf("\n enter new charcter is : ");
    fflush(stdin);
    scanf("%c",&new_char);

    for ( i = 0; s1[i]!='\0'; i++){
       if (s1[i]==change_char){
            s1[i]=new_char;
       }
       
    }

    printf("\n after new name is: ");
    puts(s1);

    return 0;
}