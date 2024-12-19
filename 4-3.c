#include <stdio.h>
#define min(a,b) (a>b)?b:a
#define max(a,b) (a>b)?a:b
void gongyue(int a, int b) {
int min=min(a,b);
int max=max(a,b);
int temp=1;
for(int i=1;i<min;i++)
{
    if(a%i==0&&b%i==0)
    temp*=i;
}
printf("gongyue:%d\n",temp);
}


void gongbei(int a, int b) {
    int max=max(a,b);
    int flag=0;int count=0;
    for(int i=max;flag!=1;i++)
    {
        if(i%a==0&&i%b==0)
        flag=1;
    count=i;

    }
    printf("gongbei:%d\n",count);
}
int main() {
    int a, b;
    printf("input a and b:");
    scanf("%d %d", &a, &b);
    gongyue(a, b);
    gongbei(a, b);  
    return 0;   
}