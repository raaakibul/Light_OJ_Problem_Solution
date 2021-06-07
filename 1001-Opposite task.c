#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d",&n);
    while(n){
        scanf("%d",&a);
        b = a/2;
        a = a%2 + a/2;
        printf("%d %d\n",a,b);
        n--;
    }
return 0;
}
