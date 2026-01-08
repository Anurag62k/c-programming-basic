#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,10};
     int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i]; 
    }
     printf ("sum is:%d",sum);
return 0;
}