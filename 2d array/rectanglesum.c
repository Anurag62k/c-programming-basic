#include<stdio.h>
int main(){
    int  r,c,sum=0;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
     }
    }
    int l1,l2,r1,r2;
    printf("enter l1 r1 l2 r2");
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum +=a[i][j];
        }
    }
    printf("sum of the rectangle from(%d,%d) to (%d,%d)is:%d",l1,r1,l2,r2,sum);
    return 0;
}
