#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
      int smax=INT_MIN;
    int arr[8]={8,9,5,4,6,3,2,1};
        for(int i=0;i<=7;i++){
        if(max<arr[i]){max=arr[i];}
    }
    for(int i=0;i<=7;i++){
    if(smax<arr[i]&& max!=arr[i]){smax=arr[i];}
    }
        printf("second largest number is:%d",smax);
     return 0;
}