#include<stdio.h>
int main(){

    FILE *fptr1,*fptr2;
    char name[50],c;

    fptr1 = fopen("stat1.txt","r");
    if (fptr1==NULL){
        printf("file can't be opened \n");
    }

    fptr2 = fopen("stat2.txt","w");
     if (fptr2 == NULL) { 
        printf("file can't be opened  \n");  
    } 

    c = fgetc(fptr1);
    while (c != EOF){
        fputc(c,fptr2);    
        c = fgetc(fptr1); 
    }
    
    printf("\n Contents copied"); 

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}