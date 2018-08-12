/*************************************************************************
	> File Name: ep17.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月25日 星期三 17时53分36秒
 ************************************************************************/

#include<stdio.h>
 int num20[20]={0,3,3,5,4,
                4,3,5,5,4,
                3,6,6,8,8,
                7,7,9,8,8};
 int numten[10]={0,0,6,6,5,
                 5,5,7,6,6};
int getnum(int n){
 
    if (n<20) return num20[n];
    if (n<100) return numten[n/10]+num20[n%10];
    if (n<1000){
        if (n%100==0)
        return num20[n/100]+7;
        else
         return getnum(n%100)+num20[n/100]+10;
    }
    if (n==1000) return 11;
}
int main(){
    int sum=0;   
    for (int i=1;i<=1000;i++){
        sum+=getnum(i);
    }
    printf("%d\n",sum);
    return 0; 
}
