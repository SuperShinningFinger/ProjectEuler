/*************************************************************************
	> File Name: ep21.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月07日 星期二 10时53分12秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N+5]={0};
int dnum[MAX_N + 5] = {0};

void init(){
    for (int i = 2;i <=MAX_N ;i++){
        if (!prime[i]){
            prime[++prime[0]] = i;
            is_prime[i] = 1;
        }
        for (int j = 1; j <= prime[0] && i*prime[j] <= MAX_N; j++){
            prime[i*prime[j]] = 1;
            if (i % prime[j] == 0){
               
                break;
            }

        }
    }
}

int main(){
    for (int i = 2; i <= MAX_N;i++){
        for (int j = i;j<=MAX_N;j++){
            if (i * j > MAX_N) break;
            dnum[i*j] += i;
            if (i!=j)
            dnum[i*j] += j;
            if (i*j==220)
            printf("dnum%d=%d\n",i*j,dnum[i*j]);
        }
    }
    int ans = 0;
    for (int i = 2;i<=MAX_N;i++){
        int temp =dnum[i]+1;
        if (temp > MAX_N || temp == i) continue;
        if (i == dnum[temp]+1){      
            printf("i=%d,temp=%d,dnumtemp=%d\n",i,temp,dnum[temp]+1);
            ans += i;
        }
    }
    printf("%d\n",ans);

    return 0;
}
