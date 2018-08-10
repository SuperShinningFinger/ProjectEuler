/*************************************************************************
	> File Name: ep42.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时55分59秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include "ep42.h"


int triangle(int n){
    return n*(n+1)/2;
}

int binary_search(int k){
    int head = 0,tail = 10000, mid;
    while (head <= tail){
        mid = (head + tail) /2;
        if (triangle(mid) == k) return mid;
        if (triangle(mid) < k) head = mid + 1;
        else tail = mid -1;
    }

    return 0;
}

int main(){
    int ans = 0,len = strlen(word[0]), sum = 0, i = 1;
    while (len){
        sum = 0;
        for (int j = 0; j < len; j++){
            sum += word[i][j] - 'A' + 1;
        }

        if (binary_search(sum)){
            printf("word=%s,sum = %d\n",word[i],sum);
            ans ++;
        }
        len = strlen(word[++i]);
    }
    printf("%d\n",ans);
    return 0;
}
