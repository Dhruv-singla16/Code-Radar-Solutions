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
              
        printf("\n");
    }
    for(p=2;p<=n;p++){
            for(q=n;q>1;q--){
                printf("%d",q);
            }
            printf("\n");
        }  
    return 0;
}