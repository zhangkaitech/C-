/*编写函数fun，函数的功能是: 从字符串中删除指定的字符。同一字母的大、小写按不同字符处理。 
若程序执行时输入字符串为: turbo c and borland c++ 
从键盘上输入字符:n, 则输出后变为: turbo c ad borlad c++*/
#include <stdio.h>
#include <string.h>

void fun(char *str, char c)
{
    int i;
    for (i = 0; str[i]!= '\n'; i++)
    {
        if (str[i] == c)
        {
            i++;
            continue;
        }
        printf("result:%c", str[i]);
        
    }
}
int main()
{
    char str[100];
    char c;
    printf("enter a string: ");
    fgets(str, 100, stdin);
    printf("enter a character to delete: ");
    scanf("%c", &c);
    fun(str, c);
    return 0;
}