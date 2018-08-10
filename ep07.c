/*************************************************************************
	> File Name: ep07.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时23分16秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 200000

int prime[MAX_N+5]={0};

int main(){
    for (int i=2;i<MAX_N;i++){
        if (!prime[i]) prime[++prime[0]]=i;
        for (int j=1;j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]]=1;
            if (i%prime[j]==0) break;
        }
    }
    printf("%d\n",prime[10001]);
    return 0;
}
