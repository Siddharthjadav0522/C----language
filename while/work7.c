#include<stdio.h>
int main(){
    int i=2000;
    // lip year 2000 thi 3000 ni vache na
    while(i<=3000){
        if (i%4==0){
            printf("\n lip year %d",i);
        }
        i++;
    }
    
    return 0;
}