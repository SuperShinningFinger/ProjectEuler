/*************************************************************************
	> File Name: ep29.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时15分45秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_N 10000
#define MAX_M 205


int result[MAX_N][MAX_M];
int result_num = 0;

int *calculate(int a,int b){
    int *num = (int *)calloc(sizeof(int),MAX_M);
    num[0] = 1;
    num[1] = a;
    for (int i = 1; i < b; i++){
        for (int j = 1; j <= num[0]; j++){
            num[j] *= a;
        }
        for (int j = 1; j <= num[0]; j++){
            if (num[j] < 10) continue;
            num[j + 1] += num[j] /10;
            num[j] = num[j] % 10;
            num[0] += (j == num[0]);
        }
    }
    return num;
}


int judge(int *num){
    if (result_num ==0) return 1;
    for (int i = 0; i < result_num; i++){
        if (memcmp(num,result[i],sizeof(int)*MAX_M)) continue;
        return 0;
    }
    return 1;
}

int main(){
    for (int a = 2; a <= 100; a++){
        for (int b = 2; b <= 100; b++){
            int *num = calculate(a,b);
            if (!judge(num)) continue;
            memcpy(result[result_num],num,sizeof(int)*MAX_M);
            result_num ++;
        }
    }
    printf("%d\n",result_num);
    return 0;
}
