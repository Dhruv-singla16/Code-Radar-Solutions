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
                printf("error");
            }
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        case '/':
            if(a==0 || b==0){
                printf("error");
            }
            else{
                printf("%.0f",a/b);
            }
            break;  
        default:
            printf("error");
                  
    }
    return 0;
}