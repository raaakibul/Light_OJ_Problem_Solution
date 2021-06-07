#include<stdio.h>
int main(){
    int i=1,n,a,b;
    scanf("%d",&n);
    while(n){
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
        i++;
        n--;
    }

return 0;
}
