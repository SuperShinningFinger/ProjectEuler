/*************************************************************************
	> File Name: ep39.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时28分17秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int used[1005] = {0};

int main(){
    int ans = 0,max_num=0;
    for (int i = 1; i*i <1000; i++){
        for (int j = i+1; 2*i*j<= 1000; j++){
            int a = 2 * i *j;
            int b = j*j - i*i;
            int c = j*j + i*i;
            if (a+b+c > 1000) continue;
            if (used[a+b+c])  continue;
            int k = 1;
            while (k*(a+b+c)<=1000){
                used[k*(a+b+c)]++;
                if (used[k*(a+b+c)]>max_num){
                    
                    max_num = used[k*(a+b+c)];
                    ans =k*( a + b +c);
                }    
                k++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
