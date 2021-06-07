#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int j=1;

    while(t-->0)
    {
        int sum = 0;
        int n,x;
        printf("\n");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            scanf("%d",&x);
            if(x>0)
                sum = sum + x;
        }

        printf("Case %d: %d\n",j,sum);

        j++;
    }
    return 0;
}
