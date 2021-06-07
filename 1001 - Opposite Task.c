#include<stdio.h>
int main(){

    int i,j,x;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&j);
        if(j>10){
            printf("%d %d\n",j-10,j-(j-10));
        }
        else{
            printf("0 %d\n",j);
        }
    }

return 0;
}
