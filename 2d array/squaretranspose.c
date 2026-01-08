#include<stdio.h>
int main(){
    int  r,i,j;
    printf("enter row and column");
     scanf("%d %d",&r,&r);
    int a[r][r];
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        scanf("%d",&a[i][j]);
     }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            
                int temp;
                temp=a[i][j];
                 a[i][j]=a[j][i];
                 a[j][i]=temp;
            
          //code shi hai because print krte time a[j][i] print kiye hai n ki a[i][j]
        }
    }
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
          printf("%d ",a[j][i]);
     }
     printf("\n");
    }
    return 0;
}