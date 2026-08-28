#include <stdio.h>

int main(){
    char c;
    int counter = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n'){
            continue;
        } else {
            counter += 1;
        }
    }

    printf("%d\n", counter);
    return 0;
}