/*************************************************************************
	> File Name: ep32.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时33分10秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <inttypes.h>
int num[10]={0};
int used[10000]={0};

int set_one(int x){
    while (x){
        if (x%10==0) return 1;
        if (num[x%10]>0) return 1;
        num[x%10]++;
        x/=10;
    }
    return 0;
}

int judge(int i,int j,int sum){
    memset(num,0,sizeof(num));
    if (set_one(i)) return 0;
    if (set_one(j)) return 0;
    if (set_one(sum)) return 0;
    for (int k=1;k<10;k++){
        if (num[k]!=1) return 0;
    }
    return 1;
}

int main(){
    int64_t ans=0;
    for (int i=1;i<1000;i++){
        for (int j=i+1;j<=10000;j++){
            if (judge(i,j,i*j)){
                printf("i=%d,j=%d,i*j=%d\n",i,j,i*j);
                if (used[i*j]==0){    
                    ans+=i*j;
                    used[i*j]=1;
                }
            }
        }
    }
    printf("%"PRId64"\n",ans);

    return 0;
}
