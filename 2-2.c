/*编一函数 fun 的功能是：将在字符串s中出现、而未在字符串t中出现的字符形成一个新的字符串放在u中，u中字符按原字符串中字符顺序排列，不去掉重复字符。 
例如：当s = "AABCDE"，t = "BDFG"时， 
 u中的字符串为"AACE*/
 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* fun(char* s, char* t) {
    int test[128]; // 用于记录t中的字符
    memset(test, 0, sizeof(test));
    
    // 记录t中的字符出现情况
    for(int i = 0; i < strlen(t); i++) {
        test[t[i]] = 1;
    }

    // 动态分配内存来存储结果字符串u
    char* u = (char*)malloc(strlen(s) + 1);
    if (u == NULL) {
        printf("Memory allocation failed\n");
        return NULL; // 内存分配失败
    }

    int j = 0;
    // 遍历s，将未出现在t中的字符加入u中
    for(int i = 0; i < strlen(s); i++) {
        if(test[s[i]] == 0) {
            u[j++] = s[i];
        }
    }
    u[j] = '\0'; // 添加字符串结束标志

    return u;
}

int main() {
    printf("Enter the first string: ");
    char s[100];
    scanf("%s", s); // 输入第一个字符串
    
    printf("Enter the second string: ");
    char t[100];
    // getchar()用来清理输入缓存
    getchar();
    scanf("%s", t); // 输入第二个字符串
    
    char* u = fun(s, t); // 调用函数
    printf("The new string is: %s\n", u);
    
    free(u); // 释放动态分配的内存
    return 0;
}
