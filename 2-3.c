/*编程输出１－１００间的所有素数*/
#include <stdio.h>

int main() {
    printf("2 ");
for(int i=3;i<=100;i++)
{
int flag=0;
for(int j=2;j<i;j++)
{
    if(i%j==0)
    {
        flag=1;
        break;
    }
    else {
        flag=0;
    }
}
if(flag==0)
{
    printf("%d ",i);

}
}
return 0;   
}