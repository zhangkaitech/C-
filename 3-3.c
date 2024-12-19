/*编一程序的功能是: 把20个随机数存入一个数组, 然后输出该数组及最小值。*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20];
    for(int i=0;i<20;i++)

{
    arr[i] = rand()%100;
    if(arr[i]==0)
     arr[i] = rand()%100;//生成一个0-99的随机数
}    
printf("Random array:\n");
for(int j=0;j<20;j++)
{
    printf("%d ",arr[j]); //输出数组
}
for(int k=0;k<20;k++)
{
    if(arr[k]<arr[0])
    {
        arr[0]=arr[k]; //更新最小值
    }
}
printf("\nmin value:%d",arr[0]); //输出最小值

return 0;
}