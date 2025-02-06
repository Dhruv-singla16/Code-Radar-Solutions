#include <stdio.h>
int main() {
    int n,i,j,k,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        } 
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        } 
              
        printf("\n");
    }
      
    return 0;
}