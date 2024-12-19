/*编一程序对已知的10个字符串排序（要求用指针数组、排序用一函数，不得用全局变量），然后查找指定的字符串是否在其中。*/
#include <stdio.h>
#include <string.h>

int cmp(char*a[], char *b) {
    
    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(strcmp(a[i],b)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%s is not in the list.\n",b);
    }
    else {
    printf("%s is in the list.\n",b);
   }
    return flag;
}
int main() {    
    char*target;int flag=0;
    char *str[10]={"apple","banana","orange","grape","pear","watermelon","pineapple","kiwi","mango","peach"};
    printf("Enter a string to search: ");
    scanf("%s",target); 
    flag=cmp(str,target);
    return 0;
}