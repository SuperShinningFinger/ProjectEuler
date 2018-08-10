/*************************************************************************
	> File Name: ep34.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时51分36秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 1000000
int fac[10]={0};

int main(){
    for (int i=0;i<10;i++){
        int temp=1;
        for (int j=1;j<=i;j++){
           temp*=j;         
        }
        fac[i]=temp;
            
    }
    int ans=0;
    for (int i=3;i<MAX_N;i++){
        int temp=i,sum=0;
        while (temp){
            sum+=fac[temp%10];
            temp/=10;
        }
        if (sum==i){
            ans+=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
