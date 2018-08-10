/*************************************************************************
	> File Name: ep24.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 11时20分00秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 1000000

int jnum[10]={1};

int num[10]={0,1,2,3,4,5,6,7,8,9};

int used[10]={0};

void init(){
    jnum[1]=1;
    for (int i=2;i<=9;i++){
        jnum[i]=jnum[i-1]*i;
    }
}

int solve(int n){
    if ( n == 0){
        for (int i = 0;i<10;i++){
            if (used[i]==0){
                used[i]=1;
                return i;
            }
        }
    }
    int i = 9;
    while (jnum[i] > n) i--;
    int t = n/jnum[i]+1,j=-1;
    while (t){
        j++;
        if (used[j]==0) t--;
    }
    used[j]=1;
    return j;
}

int digit(int n){
    return floor(log10(n)) + 1;
}

int main(){
    init();
    int n=1000000-1;
    for (int i=0;i<10;i++){
        printf("%d",solve(n)); 
        n %= jnum[9-i];
    }
    printf("\n");
    return 0;
}
