/*************************************************************************
	> File Name: ep36.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时00分23秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int is_palindromic(int i,int n){
    int temp=i,sum=0;
    while (temp){
        sum = sum*n +temp%n;
        temp/=n;
    }
    if (i==sum) return 1;
    return 0;
}

int main(){
    int ans=0;
    for (int i=1;i<MAX_N;i++){
        if (is_palindromic(i,10)&&is_palindromic(i,2)){
            ans+=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
