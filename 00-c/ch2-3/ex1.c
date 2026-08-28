#include <stdio.h>
#include <math.h>

int main(){
    int char_size = (int) pow(2.0, (double) sizeof(char)*8);
    int short_size = (int) pow(2.0, (double) sizeof(short)*8);
    int int_size = (int) pow(2.0, (double) sizeof(int)*8);
    long long long_long_size = (long long) pow(2.0, (double) sizeof(long long)*8);

    printf("char: %d %d\n", -((int) char_size/2), ((int) char_size/2) - 1);
    printf("short: %d %d\n", -((int) short_size/2), ((int) short_size/2) - 1);
    printf("int: %d %d\n", -((int) int_size/2), ((int) int_size/2) - 1);
    printf("long long: %lld %lld\n", -((long long) long_long_size/2), ((long long) long_long_size/2) - 1);
    return 0;
}