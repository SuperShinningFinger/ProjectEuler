/*************************************************************************
	> File Name: ep16.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时24分08秒
 ************************************************************************/

#include<stdio.h>


int num[1000]={0};

int main(){
    num[0]=1;
    num[1]=1;
    for (int i = 0;i<1000;i++){
        for (int j = 1;j <= num[0]; j++){
            num[j]*=2;
        }
        for (int j=1;j<=num[0];j++){
            if (num[j]<10) continue;
            num[j+1]+=num[j]/10;
            num[j]=num[j]%10;
            num[0]+=(j==num[0]);
        }
    }
    int ans=0;
    for (int i = 1;i<=num[0];i++){
        ans+=num[i];
    }
    printf("%d\n",ans);


    return 0;
}
