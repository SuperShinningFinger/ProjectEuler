/*************************************************************************
	> File Name: ep37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 19时10分28秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 10000000
#define TOTAL 11
int prime[MAX_N]={0};
int is_prime[MAX_N]={0};
void init(){
    for (int i=2;i<=MAX_N;i++){
        if (!prime[i]){
            prime[++prime[0]]=i;
            is_prime[i]=1;
        }
        for (int j=1;j<=prime[0]&&i*prime[j]<=MAX_N;j++){
            prime[i*prime[j]]=1;
            if (i%prime[j]==0) break; 
        }
    }
}

int main(){
    init();
    int ans=0,flag=0,total=0;
    for (int i=5;i<=prime[0];i++){
        int temp1=prime[i],temp2=prime[i],flag=0;
        while (temp1){
            if (!is_prime[temp1]){
                flag=1;
                break;
            }
            temp1/=10;
        }
        while (temp2){
            if (!is_prime[temp2]){
                flag=1;
                break;
            }
            int p=(int)pow(10,floor(log10(temp2)));
            p=temp2/p * p;
            temp2-=p;
        }
        if (flag==0){
            total++;
            ans+=prime[i];
            printf("prime%d=%d\n",total,prime[i]);
            if (total==11) break;
        }
    }
    printf("%d\n",ans);
    return 0;
}
