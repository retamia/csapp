#include <stdio.h>

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    if(sum < x || sum < y){
        return 0;
    } else{
        return 1;
    }
}