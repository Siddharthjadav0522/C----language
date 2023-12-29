#include<stdio.h>
int main(){
    int a[20][20],b[20][20],c[20][20],i,j,m,n,sum=0;   //addition of two matricse array

    printf("enter size of row and colum array :");
    scanf("%d %d",&m ,&n);

    printf("\n");

    // array a mate
    printf("enter array a : \n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
     printf("2d array matrix a::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

        printf("\n");

    // array b mate
    printf("enter array b : \n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&b[i][j]);
        }
    }
    
     printf("2d array matrix b::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    // a ne b banne array no sum c=a+b
    printf("\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
     printf("sum C matricse ::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}