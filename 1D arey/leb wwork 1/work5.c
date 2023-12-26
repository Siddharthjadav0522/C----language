#include<stdio.h>
int main(){
    int a[20],b[20],c[20],i,n,m,k=0,total;

    printf("enter arey a :");
    scanf("%d",&m);
    printf("\n enter elements :: \n");
    for ( i = 0; i < m; i++){
    scanf("%d",&a[i]);      
    }

    printf("enter arey b :");
    scanf("%d",&n);
    printf("\n enter elements :: \n");
    for ( i = 0; i < n; i++){
    scanf("%d",&b[i]);      
    }

    total=m+n;

    for ( i = 0; i<m; i++){
        c[i]=a[i];
    }
    for ( i = m; i<total; i++){
        c[i]=b[k];
        k++;
    }
    for ( i = 0; i<total; i++){
        printf("\n %d",c[i]);
    }
     
    return 0;
}