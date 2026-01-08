#include<stdio.h>
int main(){
    int  r,c;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][r];
    for(int i=0;i<r;i++){
     for(int j=0;j<r;j++){
        scanf("%d",&a[i][j]);
     }
    }
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}