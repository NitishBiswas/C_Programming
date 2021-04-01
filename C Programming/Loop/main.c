#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3&&b!=a;b++){
            for(c=1;c<=3&&c!=b&&c!=a;c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}
