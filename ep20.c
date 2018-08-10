/*************************************************************************
	> File Name: ep20.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时30分53秒
 ************************************************************************/

#include<stdio.h>

int num[1000]={0};
int main(){
    num[0]=1;
    num[1]=1;
    for (int i=2;i<=100;i++){
        for (int j=1;j<=num[0];j++){
            num[j]*=i;
        }
        for (int j=1;j<=num[0];j++){
            if (num[j]<10) continue;
            num[j+1]+=num[j]/10;
            num[j]%=10;
            num[0]+=(j==num[0]);
        }
    }
    int ans=0;
    for (int i=1;i<=num[0];i++){
        ans+=num[i];
    }
    printf("%d\n",ans);
    return 0;
}
