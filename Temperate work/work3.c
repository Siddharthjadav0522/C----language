#include<stdio.h>
int main(){
    int i,n,count=0,sum;
    printf("enter no :");
    scanf("%d",&n);

  while (n>0){
    i=n%10;
    n=n/10;
    count++;
    sum=sum+i;
    
  }
  printf("\n Total digit = %d",count);
  printf("\n sum of digit = %d",sum);

    return 0;
}