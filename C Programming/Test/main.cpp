# include<stdio.h>
int main ()
{

    printf("   WELLCOME\n\n NITISH BISWAS\n\n ");

    int volume;
    int length=5;
    int width=8;
    volume=length*width;
    printf(" Volume=%d\n\n",volume);

    char ch='A';
    printf(" Constant=%c\n\n",ch);

     float radius = 7.6;
    float area = (radius*radius*3.1416);
    printf(" Area=%f\n\n",area);

    double pi=3.14165426183;
    printf(" Pi=%.15f\n\n",pi);

     int b;
    b=10;
    b=b+1;
    b+=1;
    printf(" b=%d\n\n",b);
    printf(" b2=%d\n\n",b-2);

   // int a=20;
    int a=25;
    //int a=30;
     if (a<25){
        printf("%d is less than 25\n\n",a);
    }else{
        if (a==25){
            printf("%d is equals to 25\n\n",a);
           } else{
                printf("%d is greater than 25\n\n",a);
            }
        }
    return 0;
}
