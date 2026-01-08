#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,9};
    int diff=0;
    int   sumeven=0;
     int sumodd=0;
    for(int i=0;i<7;i++){
     
     if(i%2==0){
     sumeven=sumeven+arr[i];}
     else
     { sumodd=sumodd+arr[i];}
        diff=sumeven-sumodd;
    }
    printf("diff is:%d",diff);
    return 0;
}