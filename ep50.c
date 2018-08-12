/*************************************************************************
	> File Name: ep50.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 21时34分36秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define MAX_N 1000000


int prime[MAX_N + 5]={0};
int is_prime[MAX_N + 5]={0};

void init(){
    int n = 1;
    for (int i = 2;i <= MAX_N;i++){
        if (!prime[i]){
            prime[++prime[0]] = i;

            is_prime[i] = 1;
  
        }
        for (int j = 1; j<=prime[0] && prime[j]*i<=MAX_N;j++){
            prime[i*prime[j]] = 1;
            if (i%prime[j]==0) break;
        }
    }
    return;
}

int main(){
    init();
    printf("go!\n");
    int ans = 0,max_length=0;
    for (int i = 1; i <= prime[0];i++){
        int temp = 0;
        for (int j = i;j<=prime[0];j++){
            temp += prime[j];
            if (temp > MAX_N) break;
            if (is_prime[temp] && j - i >max_length){
                max_length=j-i;
                ans =temp;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
