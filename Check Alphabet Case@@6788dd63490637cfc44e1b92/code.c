#include <stdio.h>
int main() {
    char var;
    scanf("%c",&var);
    if(var>='A' && var<='Z'){
        printf("Uppercase");
    }
    else if(var>='a' && var<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}