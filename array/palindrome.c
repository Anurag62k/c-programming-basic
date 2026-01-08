#include<stdio.h>
int main(){
    int n;
    printf("size of an array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<n,j<n;i++,j--){
        if(arr[i]==arr[j])
       { printf("given array is palindrome number");}
   else {printf("given array is not a palindrome number");}
    return 0;
}
}