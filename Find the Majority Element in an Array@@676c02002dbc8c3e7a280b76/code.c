#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++) {
            if (arr[i]==arr[j] && i!=j) count++;
        }
        if(max<count){
            max=count;
            max_i=i;
        }
    }
    printf("%d", A[max_i]);
}    