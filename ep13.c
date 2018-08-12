/*************************************************************************
	> File Name: ep13.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 16时23分01秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char num[55];
int ans[55]={1,0};

//大整數第0位記錄長度
int main(){
    for (int i=0;i<100;i++){
        scanf("%s",num);
        int len=strlen(num);
        if (ans[0]<strlen(num)) ans[0]=len;
        for (int j=0;j<len;j++){
            ans[len-j]+=(num[j]-'0');
        }
        for (int j = 1; j<=ans[0];j++){//進位處理，通用模板記住記住記住，可用於乘法
            if (ans[j]<10) continue;
            //以下代碼都是發生進位的處理
            ans[j+1]+=ans[j]/10;
            ans[j]%=10;
            ans[0] += (j==ans[0]);//已經進位，必然有j+1位，如果有j==ans[0]，則長度+1,用bool表示+1,絕了
        }
    } 
    for (int i = ans[0];i>ans[0]-10;i--){
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}
