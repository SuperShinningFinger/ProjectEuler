/*************************************************************************
	> File Name: ep45.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月04日 星期六 11时01分02秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>

int64_t pentagonal(int64_t x){
    return x*(3*x-1)/2;
}


int64_t hexagonal(int64_t x){
    return x*(2*x-1);
}

int64_t binary_search(int64_t (*fun)(int64_t),int64_t n,int64_t key){
    int64_t head = 0,tail = n-1,mid;
    while (head <= tail){
        mid = (head + tail) >> 1;
        if (fun(mid) == key) return mid;
        if (fun(mid) < key) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main(){
    int64_t flag = 0,ans = 0;
    for (int i =  144; flag == 0; i++){
        int temp = hexagonal(i); 
        ans = binary_search(pentagonal,100000000,temp);
        if (ans != 0){
            flag = 1;
            ans = pentagonal(ans);
        }
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
