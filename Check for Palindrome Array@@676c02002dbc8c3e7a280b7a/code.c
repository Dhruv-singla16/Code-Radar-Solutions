#include<stdio.h>
int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int B[n];
    for(i=0;i<n;i++){
        B[i]=A[n-i-1];
    }
    for(j=0;j<n;j++){
        if(A[i]==B[i]){
            count++;
        }
        else{
            printf("NO");
            return 0;
        }
    }
    if(count!=0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}