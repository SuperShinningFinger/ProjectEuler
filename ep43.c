/*************************************************************************
	> File Name: ep43.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月03日 星期五 15时45分01秒
 ************************************************************************/

#include<stdio.h>
#include <algorithm>
#include <inttypes.h>
using namespace std;

int prime[7]={2,3,5,7,11,13,17};

int64_t judge(int * num){
    if (num[0]==0) return 0;
    int64_t sum = 0;
    int64_t res = 0;
    int j=0;
    for (int i=0;i<10;i++){
        res=res*10+num[i];
        sum=sum*10+num[i];
        if (i<3) continue;
        sum -= 1000*num[i-3];
        if (sum % prime[j++]) return 0; 
    }
    return res;
}

int main(){
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    int64_t sum = 0;
    do{
        int64_t temp = judge(num);
        if (temp){
            
            sum += temp;
        }   
    }while (next_permutation(num,num+10));
    printf("%"PRId64"\n",sum);
    return 0;
}
