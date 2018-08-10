/*************************************************************************
	> File Name: ep19.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 23时43分24秒
 ************************************************************************/

#include<stdio.h>

int days[13] = {0,
    31,28,31,30,
    31,30,31,31,
    30,31,30,31
};

int judge(int y){
    if ((y % 4==0&& y%100) || y%400==0){
        return 1;
    }
    return 0;
}

int get_day(int y,int m,int d){
    d++;
    if (d > days[m]){
        if (m != 2) d=1;
        else{
            if (!judge(y)) d=1;
            else{
                if (d>days[m]+1) d=1;
            }
        }
    }
    return d;
}

int main(){
    int y = 1900, m = 1, d = 1,w = 1,ans = 0;
    do{
        d = get_day(y,m,d);
        if (d==1) m++;
        if (m==13){
            m = 1;
            y++;
        }
        w++;
        w %= 7;
        printf("%d-%d-%d\n",y,m,d);
        if (w==0 && d==1 && y>1900) ans++;
    }while (y<=2000);

    printf("%d\n",ans);
    return 0;
}
