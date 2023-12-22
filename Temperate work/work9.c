#include<stdio.h>
int main (){
    int i,n,f,sum,j,rev=0,nsum,ans,num;

    printf("Ener no : ");
    scanf("%d",&n);

    num=n;
    
    for (i=1 ; n>0 ; f++){
       i=n%10;  
       n=n/10;
       sum=sum+i;
    }
    printf("\n sum is %d",sum);
    nsum=sum;

    for (i=1 ; sum>0 ; f++){
       j=sum%10;
       sum=sum/10;
       rev=(rev*10)+j;
    }

    ans=nsum*rev;

    printf("\n rev is %d",rev);
    printf("\n ans is %d",ans);
   
    if (num == ans){
    printf("\n It is magic number");
    } 
    else{
    printf("\n It is not magic number");
    }
    
    return 0;
}