#include<stdio.h>
int main(){
    
    int arr[10];
    for(int i=0;i<10;i++){
      printf("enter marks of students ");
      scanf("%d",&arr[i]);
         
    }
    for(int i=0;i<10;i++){
        if(arr[i]<35)printf("roll no of the student is%d\n",i);
        
    }
   
    return 0;
}