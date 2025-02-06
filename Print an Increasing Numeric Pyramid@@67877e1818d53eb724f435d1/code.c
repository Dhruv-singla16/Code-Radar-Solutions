#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i%2==1){
                if(j%2==1){
                    printf("%d",j);
                }
                else{
                    printf(" ");
                }
            }
            else if(i%2==0){
                if(j%2==0){
                    printf("%d",j);
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}