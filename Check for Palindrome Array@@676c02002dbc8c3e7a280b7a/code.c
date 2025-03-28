#include<stdio.h>
int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
   
    for(i=0;i<n;i++){
       if( A[i]=A[n-i-1] ){
        count++;
       }
    }
    if(count==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}