/*************************************************************************
	> File Name: ep26.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时28分09秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int circle(int n){
    int visited[1005]={0},length=0;
    int rest = 1;
    while (visited[rest] == 0 && rest !=0){
        if (rest % n ==0) return 0;
        visited[rest] = length;
        rest = rest * 10 % n;
        length++;
        if (n==7)
        printf("n=%d,rest=%d,length=%d\n",n,rest,length);
    }

    return length-visited[length];
}

int main(){
    int ans = 0, max_length = 0;
    for (int i = 3;i <= 1000; i++){
        if (circle(i)>max_length){
            ans = i;
            max_length = circle(i);
        }
    }
    printf("%d\n",ans);
    return 0;
}
