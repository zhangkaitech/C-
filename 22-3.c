/*输入一个整数，求它包含有多少个2的因子。（例如，8含有3个2的因子，10含有一个2的因子，15不含有2的因子。*/
#include <stdio.h>

int main(){
    int num=0;
printf("enter an integer:");
scanf("%d",&num);
int count=0;
while(num%2==0)
{
    count++;
    num/=2;
}
printf("the number of 2 factors is:%d",count);
    return 0;
}