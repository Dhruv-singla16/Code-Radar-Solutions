#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i<=n;i--){
        for(j=n;j>=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}