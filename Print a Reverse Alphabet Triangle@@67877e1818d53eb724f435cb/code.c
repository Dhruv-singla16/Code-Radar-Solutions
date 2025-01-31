#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=(n=64);i>=65;i--){
        for(j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}