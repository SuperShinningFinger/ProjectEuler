/*************************************************************************
	> File Name: ep02.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时04分19秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define MAX_N 4000000

int main(){
    int64_t sum=0;
    int i=1,j=1,k;
    while (i+j<=MAX_N){
        k=i+j;
        if (k%2==0) sum+=k;
        i=j;
        j=k;
    }
    printf("%"PRId64"\n",sum);

    return 0;
}
