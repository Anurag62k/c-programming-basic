#include<stdio.h>
int main(){
    int n,sum=0,s2=0,s;
    printf("size of an array is:");
    scanf("%d",&n);
   
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if (arr[i]==arr[j]){
            printf("duplicate number is:%d",arr[i]);
            break;
        }
       
       
    }
     return 0;
}
