#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a*a+b*b)>(c*c)){
        printf("Valid")
    }
    else if((b*b+c*c)>(a*a)){
        printf("Valid");
    }
    else if((a*a+c*c)>(b*b)){
        printf("Valid")
    }
    else{
        printf("Invald");
    }
    return 0;
}