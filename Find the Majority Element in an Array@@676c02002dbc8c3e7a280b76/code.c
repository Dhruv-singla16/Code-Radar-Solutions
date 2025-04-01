#include<stdio.h>
int main(){
    int n,i,j, max_i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max=-1;
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++) {
            if (A[i]==A[j] && i!=j) count++;
        }
        if(max<count){
            max=count;
            max_i=i;
        }
    }
    printf("%d", A[max_i]);
}    