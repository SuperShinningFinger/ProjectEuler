/*************************************************************************
	> File Name: ep46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 15时30分43秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#include <inttypes.h>
#define MAX_N 100000


int prime[MAX_N + 5]={0};
int used[MAX_N + 5] = {0};
void init(){
    for (int i = 2; i <=MAX_N; i++){
        if (!prime[i]){
            prime[++prime[0]] = i;
            used[i] = 1;
        }
        for (int j = 1; j <= prime[0] && i*prime[j] <= MAX_N;j++){
            prime[i*prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return;

}
int main(){
    init();
    for (int i = 1;i <= prime[0]; i++){
        for (int j = 1;;j++){
            if (prime[i]+2*j*j > MAX_N) break;
            used[prime[i]+2*j*j] = 1;
        }
    }
    for (int i = 9; i<=MAX_N; i+=2){
        if (used[i]) continue;
        printf("%d\n",i);
        break;
    }
    return 0;
}
