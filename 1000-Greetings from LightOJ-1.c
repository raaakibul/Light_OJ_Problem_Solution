#include<stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    int i=1;
    while(n){
            if(n<=125){
        scanf("%d%d",&x,&y);
        printf("Case %d: %d\n",i,x+y);
        i++;
        n--;
        }
    }
    return 0;
}
