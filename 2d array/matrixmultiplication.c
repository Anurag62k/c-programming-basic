#include<stdio.h>
int main(){
    int  r,c;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
     }
    }
    int  m,n;
    printf("enter row and column");
     scanf("%d %d",&m,&n);
     int b[m][n];
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        scanf("%d",&b[i][j]);
     }
    }
    if(m!=c){
        printf("matrices cannot be multiplied");
    }
     int res[r][n];
   for(int i=0;i<r;i++){
    for(int j=0;j<n;j++){
        res[i][j]=0;
        for(int k=0;k<m;k++){
       res[i][j]+=a[i][k]*b[k][j];
        }
    }
   }
   for(int i=0;i<r;i++){
    for(int j=0;j<n;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
return 0;
}