/*************************************************************************
	> File Name: ep11.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时47分15秒
 ************************************************************************/

#include<stdio.h>

int dir[4][2]={
    1,1,
    1,0,
    -1,1,
    0,1
};

int main(){
    int num[30][30]={0};
    for (int i=5;i<25;i++){
        for (int j=5;j<25;j++){
            scanf("%d",num[i]+j);
        }
    }
    int ans=0;
    for (int i=5;i<25;i++){
        for (int j=5;j<25;j++){
            for (int k=0;k<4;k++){
                int sum=1;
                for (int step=0;step<4;step++){
                   int xx = i+dir[k][0]*step;
                   int yy = j+dir[k][1]*step;
                   sum*=num[xx][yy];
                }
                if (sum>ans) ans=sum;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
