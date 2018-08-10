/*************************************************************************
	> File Name: ep05.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时11分19秒
 ************************************************************************/


//复习复习


#include<stdio.h>
#include <inttypes.h>
int gcd(int a,int b){
    if (!b) return a;
    return gcd(b,a%b);
}


int main(){
    int64_t ans=1;
    for (int i=2;i<=20;i++){
        if (ans % i==0) continue;
        ans =ans *i/ gcd(ans,i);
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
