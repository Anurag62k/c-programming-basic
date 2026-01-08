#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
      int k;
        printf("k is:");
        scanf("%d",&k);
    for(int i=0;i<7;i++){
      
        
        if(k==arr[i]){
           printf("%d is present and its index is %d",k,i);
        }
          else printf("%d is not present",k);
           break;
        
 
    }
    return 0;
}