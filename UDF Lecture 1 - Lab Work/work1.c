#include<stdio.h>       
int cube(int a);
void main(){
  int n;
  printf("\n enter no : ");
  scanf("%d",&n);
  printf("\n cube is %d",cube(n));
   
}
int cube(int a){ 
    return a*a*a;
}

