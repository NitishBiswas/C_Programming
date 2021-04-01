 //First Project
 //Converting & Counting Alphabets with type

 #include<stdio.h>//Header File
 /* stdio means standard input output */

 #include<conio.h>//Header File
 /* conio means console input output */

 #include<ctype.h>//Header File
 /* ctype means character type */

 /* creating data type */
 typedef struct
 {
 char name[30];
 char gender;
 }user;

 main()
 {

 char a[50],ch1,ch2,ch3,ch4;
 int i,j,k,count=0,temp=0,z,m;
 /* temp used to make reference to a temporary variable */
 int *p;//integer type of pointer
 user u;//User defined data type
 char c1,c2;
 printf(" Enter your name: ");
 gets(u.name);//get string

 printf("\n");
 printf(" If you are male press M");
 printf("\n");
 printf(" OR");
 printf("\n");
 printf(" If you are female press F");
 printf("\n");

 printf(" Press here: ");
 u.gender=getchar();//get character

 if(islower(u.gender))
 {
 u.gender=toupper(u.gender);
 }
 gets(a);

 /* Welcome Note */

 switch(u.gender)
 {
 case 'M':
 printf("\n");
 printf(" MR.");
 for(i=0;u.name[i]!='\0';i++)
 {
 ch1=u.name[i];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 printf("%c",ch1);
 count++;
 }
 }

 p=&count;
 printf(",");
 printf("\n\n");
 printf(" ********** Welcome To My CCA Applications **********");
 printf("\n\n");

 printf(" Your Lucky Number Is %d ",*p);
 printf("\n");
 printf(" And You Are So Lucky Person.");
 printf("\n");

 printf(" Let's Come To The Main Topics...");
 printf("\n\n ");

 count=temp;
 printf("Enter A Name: ");
 gets(a);
 printf("\n ");

 /* Change Alphabet using case conversion */

 j=0;
 if(isdigit(a[j]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 if(ispunct(a[j]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 printf("Changing: ");
 j=0;
 while(a[j]!='\0')
 {
 ch1=a[j];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 ch2=tolower(ch1);
 printf("%c",ch2);
 count++;
 }

 j++;
 }

 printf("\n\n ");
 printf("Number of Alphabet is %d ",count);
 printf("\n");

 for(i=0;a[i]!='\0';i++)
 {
 c1=a[i];
 if(islower(c1))
 {
 c2=toupper(c1);
 }else{
 c2=c1;
 }

 /* Find Alphabet details using switch case */

 switch(c2)
 {
 case 'A':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 1\n");
 break;

 case 'B':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 2\n");
 break;

 case 'C':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 3\n");
 break;

 case 'D':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 4\n");
 break;

 case 'E':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 5\n");
 break;

 case 'F':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 6\n");
 break;

 case 'G':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 7\n");
 break;

 case 'H':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 8\n");
 break;

 case 'I':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 9\n");
 break;

 case 'J':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 10\n");
 break;

 case 'K':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 11\n");
 break;

 case 'L':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 12\n");
 break;

 case 'M':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 13\n");
 break;

 case 'N':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 14\n");
 break;

 case 'O':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 15\n");
 break;

 case 'P':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 16\n");
 break;

 case 'Q':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 17\n");
 break;

 case 'R':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 18\n");
 break;

 case 'S':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 19\n");
 break;

 case 'T':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 20\n");
 break;

 case 'U':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 21\n");
 break;

 case 'V':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 22\n");
 break;

 case 'W':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 23\n");
 break;

 case 'X':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 24\n");
 break;

 case 'Y':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 25\n");
 break;

 case 'Z':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 26\n");
 break;

 }

 }

 printf("\n\n ");
 printf("********** Thank You. **********");
 }
 }
 break;

 case 'F':
 printf("\n");
 printf(" MRS.");
 for(i=0;u.name[i]!='\0';i++)
 {
 ch1=u.name[i];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 printf("%c",ch1);
 count++;
 }
 }
 printf(",");
 printf("\n\n");
 printf(" ********** Welcome To My CCA Applications **********");
 printf("\n\n");

 printf(" Your Lucky Number Is %d ",count);
 printf("\n");
 printf(" And You Are So Lucky Person.");
 printf("\n");

 printf(" Let's Come To The Main Topics...");
 printf("\n\n ");

 count=temp;
 printf("Enter A Name: ");
 gets(a);
 printf("\n ");

 k=0;
 if(isdigit(a[k]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 if(ispunct(a[k]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 printf("Changing: ");
 k=0;
 while(a[k]!='\0')
 {
 ch3=a[k];
 if(islower(ch3))
 {
 ch4=toupper(ch3);
 printf("%c",ch4);
 count++;
 }else{
 ch4=tolower(ch3);
 printf("%c",ch4);
 count++;
 }

 k++;
 }

 printf("\n\n ");
 printf("Number of Alphabet is %d ",count);
 printf("\n");

 for(i=0;a[i]!='\0';i++)
 {
 c1=a[i];
 if(islower(c1))
 {
 c2=toupper(c1);
 }else{
 c2=c1;
 }

 switch(c2)
 {
 case 'A':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 1\n");
 break;

 case 'B':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 2\n");
 break;

 case 'C':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 3\n");
 break;

 case 'D':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 4\n");
 break;

 case 'E':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 5\n");
 break;

 case 'F':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 6\n");
 break;

 case 'G':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 7\n");
 break;

 case 'H':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 8\n");
 break;

 case 'I':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 9\n");
 break;

 case 'J':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 10\n");
 break;

 case 'K':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 11\n");
 break;

 case 'L':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 12\n");
 break;

 case 'M':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 13\n");
 break;

 case 'N':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 14\n");
 break;

 case 'O':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 15\n");
 break;

 case 'P':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 16\n");
 break;

 case 'Q':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 17\n");
 break;

 case 'R':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 18\n");
 break;

 case 'S':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 19\n");
 break;

 case 'T':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 20\n");
 break;

 case 'U':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 21\n");
 break;

 case 'V':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 22\n");
 break;

 case 'W':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 23\n");
 break;

 case 'X':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 24\n");
 break;

 case 'Y':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 25\n");
 break;

 case 'Z':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 26\n");
 break;

 }

 }
 printf("\n\n ");
 printf("********** Thank You. **********");
 }
 }
 break;

 default:
 printf("\n\n");
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }

 /* To start again */

 printf("\n\n");
 printf(" If you want to start again press 1");
 printf("\n");
 printf(" Press Here: ");
 scanf("%d",&m);
 gets(u.name);
 switch(m)
 {
 case 1:
 printf(" Enter your name: ");
 gets(u.name);

 printf("\n");
 printf(" If you are male press M");
 printf("\n");
 printf(" OR");
 printf("\n");
 printf(" If you are female press F");
 printf("\n");

 printf(" Press here: ");
 u.gender=getchar();

 if(islower(u.gender))
 {
 u.gender=toupper(u.gender);
 }
 gets(a);

 switch(u.gender)
 {
 case 'M':
 printf("\n");
 printf(" MR.");
 for(i=0;u.name[i]!='\0';i++)
 {
 ch1=u.name[i];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 printf("%c",ch1);
 count++;
 }
 }

 printf(",");
 printf("\n\n");
 printf(" ********** Welcome To My CCA Applications **********");
 printf("\n\n");

 printf(" Your Lucky Number Is %d ",count);
 printf("\n");
 printf(" And You Are So Lucky Person.");
 printf("\n");

 printf(" Let's Come To The Main Topics...");
 printf("\n\n ");

 count=temp;
 printf("Enter A Name: ");
 gets(a);
 printf("\n ");

 j=0;
 if(isdigit(a[j]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 if(ispunct(a[j]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 printf("Changing: ");
 j=0;
 while(a[j]!='\0')
 {
 ch1=a[j];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 ch2=tolower(ch1);
 printf("%c",ch2);
 count++;
 }

 j++;
 }

 printf("\n\n ");
 printf("Number of Alphabet is %d ",count);
 printf("\n");

 for(i=0;a[i]!='\0';i++)
 {
 c1=a[i];
 if(islower(c1))
 {
 c2=toupper(c1);
 }else{
 c2=c1;
 }

 switch(c2)
 {
 case 'A':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 1\n");
 break;

 case 'B':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 2\n");
 break;

 case 'C':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 3\n");
 break;

 case 'D':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 4\n");
 break;

 case 'E':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 5\n");
 break;

 case 'F':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 6\n");
 break;

 case 'G':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 7\n");
 break;

 case 'H':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 8\n");
 break;

 case 'I':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 9\n");
 break;

 case 'J':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 10\n");
 break;

 case 'K':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 11\n");
 break;

 case 'L':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 12\n");
 break;

 case 'M':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 13\n");
 break;

 case 'N':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 14\n");
 break;

 case 'O':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 15\n");
 break;

 case 'P':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 16\n");
 break;

 case 'Q':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 17\n");
 break;

 case 'R':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 18\n");
 break;

 case 'S':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 19\n");
 break;

 case 'T':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 20\n");
 break;

 case 'U':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 21\n");
 break;

 case 'V':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 22\n");
 break;

 case 'W':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 23\n");
 break;

 case 'X':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 24\n");
 break;

 case 'Y':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 25\n");
 break;

 case 'Z':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 26\n");
 break;

 }

 }

 printf("\n\n ");
 printf("********** Thank You. **********");
 }
 }
 break;

 case 'F':
 printf("\n");
 printf(" MRS.");
 for(i=0;u.name[i]!='\0';i++)
 {
 ch1=u.name[i];
 if(islower(ch1))
 {
 ch2=toupper(ch1);
 printf("%c",ch2);
 count++;
 }else{
 printf("%c",ch1);
 count++;
 }
 }
 printf(",");
 printf("\n\n");
 printf(" ********** Welcome To My CCA Applications **********");
 printf("\n\n");

 printf(" Your Lucky Number Is %d ",count);
 printf("\n");
 printf(" And You Are So Lucky Person.");
 printf("\n");

 printf(" Let's Come To The Main Topics...");
 printf("\n\n ");

 count=temp;
 printf("Enter A Name: ");
 gets(a);
 printf("\n ");

 k=0;
 if(isdigit(a[k]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 if(ispunct(a[k]))
 {
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }else{
 printf("Changing: ");
 k=0;
 while(a[k]!='\0')
 {
 ch3=a[k];
 if(islower(ch3))
 {
 ch4=toupper(ch3);
 printf("%c",ch4);
 count++;
 }else{
 ch4=tolower(ch3);
 printf("%c",ch4);
 count++;
 }

 k++;
 }

 printf("\n\n ");
 printf("Number of Alphabet is %d ",count);
 printf("\n");

 for(i=0;a[i]!='\0';i++)
 {
 c1=a[i];
 if(islower(c1))
 {
 c2=toupper(c1);
 }else{
 c2=c1;
 }

 switch(c2)
 {
 case 'A':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 1\n");
 break;

 case 'B':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 2\n");
 break;

 case 'C':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 3\n");
 break;

 case 'D':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 4\n");
 break;

 case 'E':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 5\n");
 break;

 case 'F':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 6\n");
 break;

 case 'G':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 7\n");
 break;

 case 'H':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 8\n");
 break;

 case 'I':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 9\n");
 break;

 case 'J':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 10\n");
 break;

 case 'K':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 11\n");
 break;

 case 'L':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 12\n");
 break;

 case 'M':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 13\n");
 break;

 case 'N':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 14\n");
 break;

 case 'O':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 15\n");
 break;

 case 'P':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 16\n");
 break;

 case 'Q':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 17\n");
 break;

 case 'R':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 18\n");
 break;

 case 'S':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 19\n");
 break;

 case 'T':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 20\n");
 break;

 case 'U':
 printf("\n ");
 printf(" '%c' is an vowel.\n",c2);
 printf(" And,\n Number of serial is 21\n");
 break;

 case 'V':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 22\n");
 break;

 case 'W':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 23\n");
 break;

 case 'X':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 24\n");
 break;

 case 'Y':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 25\n");
 break;

 case 'Z':
 printf("\n ");
 printf(" '%c' is a consonant.\n",c2);
 printf(" And,\n Number of serial is 26\n");
 break;

 }

 }
 printf("\n\n ");
 printf("********** Thank You. **********");
 }
 }
 break;

 default:
 printf("\n\n");
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }

 break;
 default:
 printf("\n\n");
 printf(" Wrong Input!!!\a\a");
 printf("\n\n ");
 printf("Try Again.");
 printf("\n\n ");
 printf("********** Thank You. **********");
 }


 getch();
 return 0;
 }


