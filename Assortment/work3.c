#include<stdio.h>
int main(){
    int a[20],i,n,newvalue,pos;                 //Negative elements
    printf("enter size of arey :");
    scanf("%d",&n);

    printf("\n enter elements ::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]); 
    }

    printf("\n old array elements = \n");
    for ( i = 0; i < n; i++){
          printf("%d ",a[i]);      
    }

    // new array add karva mate
    printf("\n enter new elements ::");
    scanf("%d",&newvalue); 
    a[n]=newvalue;
    n++;
    

    printf("\n after insert array elements = ");
    for ( i = 0; i < n; i++){
          printf("%d ",a[i]);      
    }

    //new array ne delete karva mate
    n--; 
    printf("\n after Delete array elements = ");
     for ( i = 0; i < n; i++){
          printf("%d ",a[i]);      
    }

    //array ma old velue chenge kari new value add kar va mate
    printf("\n Enter position");
    scanf("%d",&pos);

    printf("\n Enter new position");
    scanf("%d",&newvalue);

    for ( i = 0; i < n; i++){
         if (i==pos){
            a[i]=newvalue;
         }           
    }

    printf("\n After update array elements :: ");
     for ( i = 0; i < n; i++){
          printf("%d ",a[i]);      
    }


    return 0;
}