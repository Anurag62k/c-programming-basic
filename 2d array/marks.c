#include<stdio.h>
int main(){
    
    int a[4][4]={{12,25,26,9},{14,28,25,30},{2,5,8,15},{23,4,5,19}};
    printf("roll p c m");
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
             printf("%d",a[i][j]);
        }
         printf("\n");
    }
   
    return 0;
}