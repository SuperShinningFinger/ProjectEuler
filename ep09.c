/*************************************************************************
	> File Name: ep09.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月04日 星期六 11时35分46秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int main(){
    for (int i = 1;i < 16;i++){
        for (int j = i+1;j < 16;j++){
            int a = 2*i*j;
            int b = j*j-i*i;
            int c = j*j+i*i;
            if (1000 % (a + b + c) == 0){
                int p = (int) pow(1000 / (a+b+c),3);
                printf("%d\n",p * a * b * c);
                break;
            }
        }
    }
    return 0;
}
