#include <stdio.h>
#include <string.h>

#define MAX_INPUT_SIZE 500
#define MAX_WORD_LENGTH 50
#define MAX_WORDS 100

// 函数：返回最长单词的索引
int max_length(char words[MAX_WORDS][MAX_WORD_LENGTH], int n) {
    int max = 0; // 最长单词的长度
    int current = -1; // 当前最长单词的索引

    for (int i = 0; i < n; i++) {
        if (strlen(words[i]) > max) {
            max = strlen(words[i]);
            current = i; // 更新当前最长单词的索引
        }
    }
    return current; // 返回最长单词的索引
}

int main() {
    char input[MAX_INPUT_SIZE]; // 用于存储整行输入
    char words[MAX_WORDS][MAX_WORD_LENGTH]; // 存储分割后的单词
    int word_count = 0;

    printf("enter a sentence:\n");
    // 使用 fgets 读取整行输入
    fgets(input, sizeof(input), stdin);

    // 使用 strtok 分割字符串
    char *token = strtok(input, " \n"); // 以空格和换行符为分隔符
    while (token != NULL) {
        // 将每个单词复制到 words 数组中
        strncpy(words[word_count], token, MAX_WORD_LENGTH);
        words[word_count][MAX_WORD_LENGTH - 1] = '\0'; // 确保字符串以 null 结尾
        word_count++;
        token = strtok(NULL, " \n"); // 获取下一个单词
    }

    // 找到最长的单词并输出
    int longest_index = max_length(words, word_count);
    if (longest_index != -1) {
        printf("the longest word is:%s\n", words[longest_index]);
    } else {
        printf("no words found.\n");
    }

    return 0;
}
