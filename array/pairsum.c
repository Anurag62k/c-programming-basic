#include<stdio.h>
int main(){
    int arr[5]={2,3,5,7,10};
     int x=12;
     int count=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                count++;
                printf("pairs are:%d ,%d,%d\n",arr[i],arr[j],arr[k]);
            }
        }
        }
    }
     printf ("total pairs are:%d",count);
return 0;
}