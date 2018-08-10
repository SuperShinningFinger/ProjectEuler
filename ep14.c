/*************************************************************************
	> File Name: ep14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时02分35秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define MAX_N 1000000
#define RANGE 2000000

int keep[RANGE+5]={0};

int solve(int64_t n){//n会超过int范围！！！
    if (n==1) return 1;
    if (n<RANGE && keep[n]) return keep[n];
    int temp;
    if (n%2==0) temp=solve(n/2)+1;
    else temp=solve(3*n+1)+1;
    if (n<=RANGE) keep[n]=temp;
    return temp;
}

int main(){
    int ans=0,res=0;
    for (int i=1;i<MAX_N;i++){
        int temp=solve(i);
        if (ans<temp){
            ans=temp;
            res=i;
        }
    }
    printf("%d\n",res);
    return 0;
}
