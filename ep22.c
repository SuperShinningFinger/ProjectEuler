/*************************************************************************
	> File Name: ep22.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时36分38秒
 ************************************************************************/

#include <stdio.h>
#include "ep22.h"
#include <string.h>
int main(){
    int len=0;
    while (strlen(nameList[len])>0) len++;
    sort(nameList,nameList+len);
    int sum = 0;
    for (int i=0;i<=len;i++){
        for (int j=0;j<=strlen(nameList[i]);j++){
            sum += (nameList[i][j]-'A'+1);
        }
        sum*=(i+1);
    }
    printf("%d\n",sum);

    return 0;
}
