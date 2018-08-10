/*************************************************************************
	> File Name: ep04.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时14分19秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int ans=0;
    for (int i=100;i<=999;i++){
        for (int j=100;j<=999;j++){ 
            int sum=i*j,temp1=0;
            while (sum){
                temp1=temp1*10+sum%10;
                sum/=10;
            }
            if (temp1==i*j) {
                ans=ans>temp1?ans:temp1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
