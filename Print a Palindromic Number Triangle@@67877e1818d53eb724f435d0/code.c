#include <stdio.h>
int main() {
    int n,i,j,k,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        } 
        for(p=i-1;p>=1;p--)
        {
            printf("%d",p);
        } 
              
        printf("\n");
    }
      
    return 0;
}