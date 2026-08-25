#include <stdio.h>

int main(){
    char c;
    int counter = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n'){
            continue;
        } else {
            counter += (int) (sizeof(c) / sizeof(char));
        }
    }

    printf("%d\n", counter);
    return 0;
}