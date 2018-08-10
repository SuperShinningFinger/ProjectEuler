/*************************************************************************
	> File Name: ep44.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月03日 星期五 16时38分01秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <inttypes.h>
int64_t pentagonal(int64_t x){
    return x*(3*x-1)/2;
}

int64_t binary_search(int64_t (*fun)(int64_t),int64_t n,int64_t key){
    int64_t head=0,tail=10000000,mid;
    while (head<=tail){
        mid = (head + tail) / 2;
        if (fun(mid) == key) {
            printf("key=%"PRId64"\n",key);
            return mid;
        }
        if (key < fun(mid)) tail = mid -1;
        else head = mid + 1;
    }
    return 0;
}

int main(){
    int64_t ans = INT64_MAX;
    int64_t i=2,j=i-1;
    while (pentagonal(i)-pentagonal(i-1)<ans){ 
        i++;
        j = i - 1;
        do{
            if (binary_search(pentagonal,INT64_MAX,pentagonal(i)+pentagonal(j))){
                if (binary_search(pentagonal,INT64_MAX,pentagonal(i)-pentagonal(j))){
                    printf("i=%"PRId64", j=%"PRId64" ,difference = %"PRId64"\n",i,j,pentagonal(i)-pentagonal(j));
                    if (ans > pentagonal(i) - pentagonal(j)){
                        printf("ans=%"PRId64"\n",ans);
                        ans = pentagonal(i) - pentagonal(j);
                     }
                 }
             }
            j--;
        } while (j>=1 && pentagonal(i)-pentagonal(j) < ans);
    }
    printf("%"PRId64"\n",ans);

    return 0;
}
