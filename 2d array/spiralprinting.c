#include<stdio.h>
int main(){
    int  r,c,i,j;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
     }
    }
    int minc=0;
    int maxr=r-1;
    int minr=0;
    int maxc=c-1;
    int tne=r*c;
    int count=0;
    while(count<tne){
        for(i=minc;i<=maxc;i++){
            printf("%d ",a[minr][i]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
               count++;
        }
        maxc--;
         if(count>=tne) break;
        for(int i=maxc;i>=minc;i--){
            printf("%d ",a[maxr][i]);
               count++;
        }
        maxr--;
         if(count>=tne) break;
    for(int i=maxr;i>=minr;i--){
        printf("%d ",a[i][minc]);
           count++;
    }   
minc++;
 if(count>=tne) break;
}
    printf("\n");
    return 0;
    
}