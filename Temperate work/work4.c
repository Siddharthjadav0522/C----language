#include<stdio.h>
int main(){
    int fast,n,count=0,sum=0,last,ans;
    printf("enter no :");
    scanf("%d",&n);

    last=n%10;

  while (n>0){
    fast=n%10;
    n=n/10;
    count++;
    sum=sum+fast;
  }
  ans=fast+last;
  printf("\n Total digit = %d",count);
  printf("\n sum of digit = %d",sum);
  printf("\n fast and last digit sum= %d",ans);

    return 0;
}