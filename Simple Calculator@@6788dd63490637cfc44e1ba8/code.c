#include <stdio.h>
int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c){
        case '+':
            printf("%.0f",a+b);
            break;
        case '-':
            if(a>b){
                printf("%.0f",a-b);
            }
            else{
                printf("");
            }
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        case '/':
            if(a==0 || b==0){
                printf("");
            }
            else{
                printf("%.0f",a/b);
            }
            break;        
    }
    return 0;
}