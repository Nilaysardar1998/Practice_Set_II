//which of the following is valid in c

#include <stdio.h>

int main() {
    //int a ; b = a; //invalid || Rewrite -> int a; int b = a;
    int v = 3^3; //Valid in C but use math.h and pow function to print the power

    //char dt = '21 dec 2020'; //invalid || char data-type always contain one character in it 

    printf("value of int: %d", v);

    //printf("value of char: %c", dt);
    return 0;
}
