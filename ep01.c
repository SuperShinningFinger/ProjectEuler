/*************************************************************************
	> File Name: ep01.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时01分30秒
 ************************************************************************/

#include<stdio.h>


int main(){
    int sum=0;
    for (int i=3;i<1000;i++){
        if (i%3==0||i%5==0) sum+=i;
    }    
    printf("%d\n",sum);


    return 0;
}
