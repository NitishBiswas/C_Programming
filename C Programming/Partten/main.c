#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cas;
    int i,j,line,col;
    scanf("%d",&cas);
    for(;cas>0;cas--){
        scanf("%d%d",&line,&col);
        for(i=0;i<line;i++){
            for(j=0;j<col;j++){
                if((i+j)%2==0){
                    printf("*");
                }else{
                    printf(".");
                }

            }
            printf("\n");
        }
    }
    return 0;
}
