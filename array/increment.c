#include<stdio.h>
int main(){
   
    int arr[7]={1,2,3,4,5,6,7};
    
    for(int i=0;i<7;i=i+2){
        arr[i]=arr[i]+10;
    }
    for(int i=1;i<7;i=i+2){
        arr[i]=arr[i]*2;
}
for(int i=0;i<7;i=i+1){
        printf("%d ",arr[i]);
}
return 0;
}