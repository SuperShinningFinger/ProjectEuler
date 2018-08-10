/*************************************************************************
	> File Name: ep15.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时15分17秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>

int main(){
    int64_t ans = 1;
    for (int i = 21,j = 1; i <= 40 && j <= 20; i++,j++){
        ans =ans * i / j;
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
