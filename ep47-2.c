/*************************************************************************
	> File Name: ep47-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 23时19分42秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int prime[MAX_N+5] = {0};
int dnum[MAX_N+5]={0};

void init(){
    for (int i = 2;i<=MAX_N;i++){
        if (!prime[i]){
            prime[++prime[0]] = i;
            dnum[i]=1;
        }
        for (int j = 1;j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]] = 1;
            if (i%prime[j]==0) {
                dnum[i*prime[j]]=dnum[i];
                break;
            }
            else{
                dnum[i*prime[j]] = dnum[i] + 1;
            }
        }
    }
}

int main(){
    init();
    for (int i = 1;i<=MAX_N-3;i++){
        if (dnum[i]!=4) continue;
        if (dnum[i+1]!=4) continue;
        if (dnum[i+2]!=4) continue;
        if (dnum[i+3]!=4) continue;
        printf("%d\n",i);
        break;
    }
    return 0;
}

