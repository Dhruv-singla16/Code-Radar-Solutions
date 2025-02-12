#include<stdio.h>
int main(){
    int n,jasoos=1;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i])
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<n-1-r;c++){
            if(A[c]>A[c+1]){
                jasoos=0;
                break;
            }
        }
    }
    if(jasoos==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}