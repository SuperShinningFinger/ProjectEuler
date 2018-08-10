/*************************************************************************
	> File Name: ep40.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时37分48秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define MAX_N 1000000

int num[MAX_N + 5] = {0};

int digit(int x){
    return floor(log10(x)) + 1; 
}
void init(){
    int j = 1;
    for (int i = 1;i <= MAX_N;i++){
        num[i] = num[i-1] + digit(i);
    }
}

int find_num(int x){
    for (int i=1;i<=MAX_N;i++){
        if (num[i] > x) return i;
    }
    return 0;
}

int sol_num(int n,int x){
    int ans;
    for (int i=0;i<x;i++){
        int p = (int) pow (10,digit(n)-1);
        ans = n/p;
        n -= ans * p;
    }
    return ans;
}
int main(){
    init();
    int ans = 1;
    printf("num1=%d, num10=%d\n",num[1],num[10]);
    int n = find_num(10);
    ans *= sol_num(n,num[n]-10);
    
   printf("n=%d, ans*=%d\n",n, sol_num(10,num[n]-10)); 
     n = find_num(100);
    ans *= sol_num(n,num[n]-100);
   printf("n=%d ,ans*=%d\n",n, sol_num(100,num[n]-100)); 
     n = find_num(1000);
    ans *= sol_num(n,num[n]-1000);
    
   printf("n=%d\n",n); 
     n = find_num(10000);
    ans *= sol_num(n,num[n]-10000);
    
   printf("n=%d\n",n); 
     n = find_num(100000);
    ans *= sol_num(n,num[n]-100000);
    
   printf("n=%d\n",n); 
     n = find_num(1000000);
    ans *= sol_num(n,num[n]-1000000);
    
   printf("n=%d\n",n); 
    
    printf("%d\n",ans);
    return 0;
}
