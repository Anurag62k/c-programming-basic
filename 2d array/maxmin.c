#include<stdio.h>
#include<limits.h>
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
    int min= INT_MAX;
    int max=INT_MIN;
    int maxrow=0,maxcol=0,minrow=0,mincol=0;
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        if(min>a[i][j]){
            min=a[i][j];
         minrow=i,maxrow=j;
    }
          else if(max<a[i][j]){
            max=a[i][j];
             maxrow=i,maxcol=j;

          }
           
       }
       
}

printf("max and min of the matrix are:%d at position(%d,%d) ,%d at position(%d,%d)",max,maxrow,maxcol,min,minrow,mincol);
return 0;
}