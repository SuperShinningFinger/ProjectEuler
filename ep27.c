/*************************************************************************
	> File Name: ep27.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月07日 星期二 09时54分56秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#include <math.h>
#define MAX_N 1000000
int64_t prime[MAX_N + 5]={0};


int is_prime(int64_t n){
    if (n == 2) return 1;
    for (int i = 2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}

void init(){
    for (int i = 2;i<=MAX_N;i++){
        if (!prime[i]){
            prime[++prime[0]] = i;
        }
        for (int j = 1;j <=prime[0] && i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]] = 1;
            if (i%prime[j]==0) break;
        }
    }
}

int64_t calculate(int a,int b){
    int64_t temp,num=0;
    for (int i = 0;;i++){
        temp = i*i+a*i+b;
        if (temp < 0) break;
        if (is_prime(temp)){
            num++;
        }else{
        break;
        }
    }
    return num;
}

int main(){
    init();
    int max_length = 0,ans=0;
    for (int b = 1;prime[b]<1000;b++){
        for (int a=-999;a<1000;a++){
            int temp = calculate(a,prime[b]);
            if (temp > max_length){
                ans = a*prime[b];
                max_length = temp;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
