/*************************************************************************
	> File Name: ep22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时51分50秒
 ************************************************************************/

#include<iostream>
#include <stdio.h>
#include "ep22.h"
#include <string.h>
#include <algorithm>
#include <inttypes.h>
using namespace std;
int main(){
    int len=0;
    while (nameList[len].length()>0) len++;
    sort(nameList,nameList+len);
    int64_t sum = 0;
    int i=0;
    while (nameList[i].length()!=0){
        int temp = 0;
        for (int j=0;j<nameList[i].length();j++){
            temp += (nameList[i][j]-'A'+1);
        }
        sum+=(i+1)*temp;
        i++;
    }
    printf("%"PRId64"\n",sum);

    return 0;
}
