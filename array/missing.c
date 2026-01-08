#include<stdio.h>
int main(){
    int n;
    printf("size of an array is:");
    scanf("%d",&n);
    
    int arr[n];
    int sum2=0;
    for(int i=0;i<n-1;i++){
    scanf("%d",&arr[i]);}
    int sum=0;
    for(int i=0;i<=n-2;i++){
        sum=sum+arr[i];
    
     sum2=n*(n+1)/2;}
    printf("missing element is:%d",sum2-sum);

return 0;}