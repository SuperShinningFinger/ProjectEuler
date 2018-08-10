/*************************************************************************
	> File Name: ep03.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时08分56秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define MAX_N 1000000
int prime[MAX_N+5]={0};
int main(){
    int64_t num=600851475143,ans=0;
    for (int i=2; i<=MAX_N;i++){
        if (!prime[i]) {
            prime[++prime[0]]=i;
            if (num%i==0){
                ans=i;
            }
        }

        for (int j=1; j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]]=1;
            if (i%prime[j]==0) break;
        }
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
