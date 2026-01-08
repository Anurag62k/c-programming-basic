#include<stdio.h>
#include<limits.h>
int main(){
    int  r,c,index=-1;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
     }
    }
    int maxone=INT_MIN;
    for(int i=0;i<r;i++){
        int count=0;
     for(int j=0;j<c;j++){
        if(a[i][j]==1){
          count++ ;
        }
         if(maxone<count){
        maxone=count;
        index=i;
    }
    }
   
}
printf("row with max no of one and total one's are:%d %d",index,maxone);
return 0;
}