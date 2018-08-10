/*************************************************************************
	> File Name: ep47.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时23分26秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <inttypes.h>
#define MAX_N 1000000
int prime[MAX_N+5]={0};

int init(){
    for (int i=2;i<=MAX_N;i++){
        if (!prime[i]) {
            prime[++prime[0]]=i;
            if (prime[0]<100){
            //    printf("prime %d = %d\n",prime[0],i);
            }
        }
        for (int j=1;j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]]=prime[i]+1;
            if (i%prime[j]==0) {
            
                break;
            }
        }
    }
}


int main(){
    init();
    for (int i=1;i<=20;i++){
        printf("%d ",prime[i]);
    }
    printf("\n");
    for (int i=1;i<=MAX_N;i++){
        if (prime[i]==4&&prime[i+1]==4&&prime[i+2]==4&&prime[i+3]==4){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
