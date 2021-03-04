#include <stdio.h>
int main()
{
    double a,c, S=0;
    for(a=1; a<=100; a++)
    {
        c=1/a;
        S+=c;
    }
    printf("%.2lf\n",S);
    return 0;
}