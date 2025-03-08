#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    if(n==2){
        for(i=0;i<2;i++){
            if(A[i]>A[i+1]){
                printf("%d",A[i]);
            }
            else
            printf("%d",A[i+1]);
            return 0;
        }
    }
  
    for(i=0;i<n;i++){
        if(A[i]>A[i-1] && A[i]>A[i+1]){
            printf("%d",A[i]);
            return 0;
        }
        else if(A[i]==A[i+1] && A[i]==A[i-1]){
            printf("-1");
        }
        else if(A[i]>A[i-1] && A[i]<A[i+1]){
            printf("%d",A[i+1]);
            return 0;
        }
    }
}