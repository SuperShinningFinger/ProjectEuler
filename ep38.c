/*************************************************************************
	> File Name: ep38.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 19时36分42秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#include <inttypes.h>

int is_pandigital(int x){
    int num[10] = {0},digit = 0,n=0;
    while (digit < 9){
        n++;
        int temp = x * n;
        while (temp){
            if (temp % 10 == 0) return 0;
            if (num[temp%10]) return 0;
            num[temp%10]++;
            temp /= 10;
            digit ++;
        }
    }
    
    int res = 0;
    for (int i = 1;i <= n; i++){
        int y = x * i;
        res =res *  (int) pow(10,floor(log10(y))+1) + y;
    } 
    return res;
}

int main(){
    int64_t ans = 0;
    for (int i = 1; i < 100000; i++){
        int temp = is_pandigital(i);
        if (temp > ans){
            ans = temp;
        }
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
