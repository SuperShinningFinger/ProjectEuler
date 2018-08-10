/*************************************************************************
	> File Name: ep18.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时15分30秒
 ************************************************************************/

#include<stdio.h>

int map[30][30]={0};
int keep[30][30]={0};

int max(int a,int b){
    return a>b?a:b;
}
int main(){
    for (int i=0;i<15;i++){
        for (int j=0;j<=i;j++){
            scanf("%d",map[i]+j);
        }
    }
    
    for (int i=14;i>=0;i--){
        for (int j=0;j<=i;j++){
            keep[i][j]=max(keep[i+1][j],keep[i+1][j+1])+map[i][j];
        }
    }

    printf("%d\n",keep[0][0]);

    return 0;
} 
