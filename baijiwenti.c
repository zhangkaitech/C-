/*百钱买百鸡问题，用100元钱买100只鸡，其中母鸡每只3元，公鸡每只2元，小鸡1元3只，且每种鸡至少买一只，试编一程序列出所有可能的购买方案*/
#include <stdio.h>

int main() {
    int mu=0,gong=0;
    for(mu=0;mu<=100;mu++)
    {
        for(gong=0;gong<=100-mu;gong++)
        {
            if((3*mu+2*gong+(100-mu-gong)/3)==100&&(100-mu-gong)%3==0)
            {
                printf("hens:%d\nroosters:%d\nchicks:%d\n",mu,gong,100-mu-gong);
            }
        }
    }

    return 0;        
}