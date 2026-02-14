//
// Created by malco on 01/29/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];

    memcpy(b,a,sizeof(a));
    for(int i=0;i<10;i++) {
        printf("%d ",b[i]);
    }


}
