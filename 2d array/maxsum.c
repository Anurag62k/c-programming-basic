#include<stdio.h>
#include<limits.h>
int main(){
    int  r,c,sum,index;
    printf("enter row and column");
     scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
     }
    }
    int maxsum= INT_MIN;
    for(int i=0;i<r;i++){
        sum=0;
     for(int j=0;j<c;j++){
        
        sum+=a[i][j];
     }
     if(sum>maxsum){
        maxsum=sum;
        index=i;
     }
    }
    printf("row with max sum is :%d and sum is:%d",index,maxsum);
    return 0;
}