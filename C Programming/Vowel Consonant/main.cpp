#include<stdio.h>
main()
{
    char c;
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("%c is Vowel.",c);
    }else{
        printf("%c is Consonant.",c);
    }
}
