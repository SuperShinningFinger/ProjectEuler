/*************************************************************************
	> File Name: ep30.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时36分44秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 1000000
int main(){
    int ans=0;
    for (int i=2;i<MAX_N;i++){
        int temp=i,sum=0;
        while (temp){
            sum+=(int)pow(temp%10,5);
            temp/=10;
        }
        if (sum==i){
            ans+=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
