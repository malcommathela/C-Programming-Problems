#include <stdio.h>
#include <stdlib.h>

int main () {
    int marks = 46;
    int result[101] = {[0 ... 44] = 0, [45 ... 100] = 1};
    int pass = result[marks];
    printf("%d", pass);



}

// Designated initializers