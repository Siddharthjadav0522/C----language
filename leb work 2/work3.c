#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0;   // average array
    float avr;

    printf("enter size of row and colum array :");
    scanf("%d %d",&m ,&n);

    printf("enter array : \n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    
     printf("2d array matrix ::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            sum= sum + a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
        //average find
        avr=(float)sum/(m*n);
        printf("all sum element %d \n",sum);
        printf("all element average %.2f",avr);


    return 0;
}