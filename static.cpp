#include <stdio.h>
void f(void);
int main()
{
    int i;
    for (i=0;i<10;i++)
    {
        f();
    }
}
void f ()
{
    static int j=10;
    printf("%d\n",j);
    j++;
}
