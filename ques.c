#include<stdio.h>
main()
{
 char str[20],str1[20];
 int i,g;
gets(str);
gets(str1);
for(i=0;i<20;i++)
{
 for(g=0;i<20;g++)
 {
  if(str1[g]==str[i])
  {
   printf("yes");
  }
  else
  break;
 }
}
}
