#include<stdio.h>
int main(){
    int n, cut=0, a,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        for(j=2;j<=a;j++){
            if(a%j==0) break;
        }
        if(j==a) cut++;
    }
    printf("%d",cut);
}