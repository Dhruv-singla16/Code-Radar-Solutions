#include<stdio.h>
int main(){
    int n,i,r,c,index=0;
    scanf("%d",&n);
    int A[n],B[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]!=0){
            B[index]=A[i];
            index++;
        }
    }
    for(i=index;i<n;i++){
        B[i]=0;
    }
    for(i=0;i<n;i++){
        printf("%d",B[i]);
    }

}    