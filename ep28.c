/*************************************************************************
	> File Name: ep28.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时28分18秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>

int main(){
    int64_t sum=1,temp=1;
    for (int i=3;i<=1001;i+=2){
        sum+=4*temp+10*(i-1);
        temp=temp+(i-1)*4;
    }
    printf("%"PRId64"\n",sum);
    return 0;
}
