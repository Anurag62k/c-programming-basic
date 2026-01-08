#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int max=INT_MIN;
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){max=arr[i];}
    }
    printf("max value is:%d",max);
    return 0;
}