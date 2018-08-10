/*************************************************************************
	> File Name: ep33.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 18时32分44秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a,int b){
    if  (!b) return a;
    return gcd(b,a%b);
}

int judge(int i, int j){
    int x1=i/10,x2=i%10,y1=j/10,y2=j%10;
    if (!x1||!x2||!y1||!y2) return 0;
    if (x2==y1 && x1*j==y2*i) return 1;
    return 0;
}

int main(){
    int count=0,ansx=1,ansy=1;
    for (int i=11;i<100;i++){
        for (int j=i+1;j<100;j++){
            if (judge(i,j)){
                printf("i=%d,j=%d\n",i,j);
                ansx *= i;
                ansy *= j;
                int temp=gcd(ansx,ansy);
                ansy /= temp;
                ansx /= temp;
                    printf("ansx=%d , ",ansx);
                    printf("ansy=%d\n",ansy);
            }
        }
    }
    printf("%d\n",ansx);
    printf("%d\n",ansy);
    return 0;
}
