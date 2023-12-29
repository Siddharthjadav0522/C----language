#include<stdio.h>
int main(){
    int a[20][20],b[20][20],i,j,r,c;   //matrix convert into transpose matrix

    printf("enter size of row and colum array :");
    scanf("%d %d",&r,&c);

    printf("enter array : \n");
    for ( i = 0; i < r; i++){
        for ( j = 0; j <c; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("array matrix ::\n");
    for ( i = 0; i <r; i++){
        for ( j = 0; j < c; j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("transpose matrix ::\n");
    for ( i = 0; i <c; i++){
        for ( j = 0; j < r; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
   
       
    return 0;
}