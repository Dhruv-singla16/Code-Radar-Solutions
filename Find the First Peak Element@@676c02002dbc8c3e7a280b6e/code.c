#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
            if(max>A[i+1] || max=A[n-1]){
                printf("%d",max);
                return 0;
            }
        }
    }
    printf("-1");
}