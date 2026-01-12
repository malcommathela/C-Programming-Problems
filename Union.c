//
// Created by malco on 01/12/2026.
//

#include <stdio.h>

typedef union {
    int x;
    char y;
}myUnion;

int main() {

    myUnion u;
    u.x = 65;

    myUnion *p = &u;

    printf("%d\n", p->x);
    printf("%c\n", p->y);

}