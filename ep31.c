/*************************************************************************
	> File Name: ep31.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时58分05秒
 ************************************************************************/

#include<stdio.h>

int dp[205]={0};
int w[8]={1,2,5,10,20,50,100,200};
int main(){
    dp[0]=1;
    for (int i=0;i<8;i++){ 
        for (int j=1;j<=200;j++){
                dp[j]+=dp[j-w[i]];
        }
    }
    printf("%d\n",dp[200]);

    return 0;
}
