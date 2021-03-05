#include<stdio.h>
int main()
{
    int n[20],i,j,k;
    for(i=0;i<=19;i++)
        scanf("%d",&n[i]);
    for(i=0,j=19;i<10;i++,j--){
        k=n[i];
        n[i]=n[j];
        n[j]=k;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
 
