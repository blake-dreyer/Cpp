#include <cstdio>

int absolute_value(int x) {
    if (x > -1) {
        return x;
    } else {
        return x*-1;
    }
}

int main() {
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}