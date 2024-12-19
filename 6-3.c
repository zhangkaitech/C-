/*有一个3×4矩阵，要求编程求出其中最大的那个元素的值，以及其所在的行号和列号。*/
#include <stdio.h>
#include <stdlib.h>
int* search(int a[3][4])
{
static int max[3];int row=0;int col=0;
for(int i=0;i<3;i++)
{
        for(int j=0;j<4;j++)
        {
                if(a[i][j]>max[0])
                {
                        max[0]=a[i][j];
                        row=i;max[1]=row;
                        col=j;max[2]=col;
                }
     }
 
}  
 return max;
}

int main() {
    int a[3][4]={};
    for(int idx=0;idx<3;idx++)

{
        for(int jdx=0;jdx<4;jdx++)
        {
           a[idx][jdx]=rand()%100;
           while(a[idx][jdx]==0)
           a[idx][jdx]=rand()%100;
        }
}   
for(int idx=0;idx<3;idx++)
{
    for(int jdx=0;jdx<4;jdx++)
    {
        printf("%d ",a[idx][jdx]);
    }
    printf("\n");
}
int *arr=search(a);
printf("maxnumber:%d\ncol:%d\nrow:%d\n",arr[0],arr[1],arr[2]);
 return 0;
}