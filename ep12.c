/*************************************************************************
	> File Name: ep12.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月04日 星期六 20时33分54秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 100000

int dnum[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};
int mnum[MAX_N + 5] = {0};

void init(){
    for (int i = 2; i * 2 <= MAX_N; i++){
        if (!prime[i]){
            prime[++prime[0]] = i;
            dnum[i] = 2;
            mnum[i] = 1;
        }
        for (int j = 1; j <=prime[0] && i * prime[j] <=MAX_N; j++){
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0){
                mnum[i*prime[j]] = mnum[i] + 1;
                dnum[i*prime[j]] = dnum[i]/(mnum[i]+1) * (mnum[i]+2);
            }
            else{
                mnum[i*prime[j]] = 1;
                dnum[i*prime[j]] = dnum[i] * dnum[prime[j]];
            }
        }
    }
    return;
}

int factor_num(int n){
    if (n & 1){
        return (dnum[n]*dnum[(n+1)/2]);
    }
    else{
        return (dnum[n/2]*dnum[n+1]);
    }
}

int main(){
    init();
    int n = 1;
    while (factor_num(n) < 500) n++;
    printf("%d\n",n*(n+1)/2);
    return 0;
}
