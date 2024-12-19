/*3、.有一个函数：
   Y＝x(x<1);2x-1(1<=x<10);3x-11(x>=10)
写一程序，输入x，输出Y的值。*/
#include <stdio.h>

int main() {
    float x, y;
    printf("Enter x:");
    scanf("%f", &x);
    if (x < 1) {
        y = x;
    } else if (x >= 1 && x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 11;
    }
    printf("Y = %f\n", y);
    return 0;
}