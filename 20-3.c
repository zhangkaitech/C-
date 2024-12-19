/*编写一猜数游戏程序，随机产生某个整数，从键盘反复输入整数进行猜数，当未猜中时，提示输入过大或过小.猜中时，指出猜的次数.最多允许猜20次.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, count = 0;
    srand(time(NULL));
    num = rand() % 100 + 1; //随机产生1-100之间的整数
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");
    while (count < 20) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;
        if (guess == num) {
            printf("Congratulations! You guessed the number in %d tries.\n", count);
            break;
        } else if (guess > num) {
            printf("Too high. Try again.\n");
        } else {
            printf("Too low. Try again.\n");
        }
    }
    if (count == 20) {
        printf("Sorry, you ran out of tries. The number was %d.\n", num);
    }
    return 0;
}   