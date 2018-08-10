/*************************************************************************
	> File Name: ep08.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时25分55秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <inttypes.h>
#define DIGIT 13

int main(){
    char num[1005]={0},temp[1005]={0};
    while (~scanf("%s",temp)){
        strcat(num,temp);
    }
    int64_t zero=0,ans=1,res=1;
    for (int i=0;num[i];i++){
        if (num[i]=='0') zero++;
        else{
            ans*=(num[i]-'0');
        }
        if (i>DIGIT-1){
            if (num[i-DIGIT]=='0') zero--;
            else{
                ans/=(num[i-DIGIT]-'0');
            }
        }
        if (zero==0&&res<ans) res=ans;
    }
        printf("%"PRId64"\n",res);
    return 0;
}
