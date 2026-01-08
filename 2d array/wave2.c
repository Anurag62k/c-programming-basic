#include<stdio.h>
int main(){
    int  r,c,j;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][r];
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        scanf("%d",&a[i][j]);
     }
    }
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=r-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int i=0;i<c;i++){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}