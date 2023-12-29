#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n;

    printf("enter size of row and colum array :");
    scanf("%d %d",&m ,&n);

    printf("enter array :");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    
     printf("2d array matrix ::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}