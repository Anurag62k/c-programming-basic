#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int min=INT_MAX;
   for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){min=arr[i];}
    }
    printf("min value is:%d",min);
    return 0;
}