/*************************************************************************
	> File Name: ep35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 18时56分01秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 1000000

int prime[MAX_N+5]={0};
int is_prime[MAX_N+5]={0};
int judge(int x){
    int t=floor(log10(x))+1;
    int i=t;
    while (i--){
        if (!is_prime[x]) return 0;
        int p=(int) pow(10,t-1) * (x%10);
        x/=10;
        x+=p;
    }
    return 1;
}


int main(){
    for (int i = 2;i <=MAX_N; i++){
        if (!prime[i]){
            prime[++prime[0]]=i;
            is_prime[i]=1;
        }
        for (int j=1;j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]]=1;
            if (i%prime[j]==0) break;
        }
    }    
    int ans=0;
    for (int i = 2;i<=MAX_N;i++){
        if (judge(i)) ans++;
    }
    printf("%d\n",ans);

    return 0;
}
