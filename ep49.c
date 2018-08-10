/*************************************************************************
	> File Name: ep49.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 10时24分05秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N  10000
struct Node{
    int num;
    int val;
};

struct Node prime[MAX_N + 5]={0};
int is_prime[MAX_N + 5]={0};

void init(){
    for (int i=2;i*i<=MAX_N;i++){
        for (int j=1;i*j<=MAX_N;j++){
            is_prime[i*j]=1;
        }
    }
    int j=0;
    for (int i=2;i<=MAX_N;i++){
        if (!is_prime[i]){
            prime[j++].num=i;
        }
    }
}

int judge(int i){
    
    return 0;
}

int main(){
    init();
    for (int i)
    return 0;
}
