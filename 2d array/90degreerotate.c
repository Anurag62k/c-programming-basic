#include<stdio.h>
int main(){
    int  r,c,sum,index;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][r];
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        scanf("%d",&a[i][j]);
     }
    }
    for(int i=0;i<r;i++){
     for(int j=i;j<r;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
              }
     }
     for(int i=0;i<r;i++){
        int j=0;
        int k=r-1;
        while(j<k){
        int temp=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=temp;
        j++;
        k--;
        }
     }

     for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
     }
     printf("\n");
    }
    return 0;
}
