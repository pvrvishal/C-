///11. strtok()
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char s1[100]="x=10;y=20;z=30";
   char *token=strtok(s1,"=;");
   while(token!=NULL)
   {
     cout<<token<<endl;
     token=strtok(NULL,"=;");
   }
   return 0;
}
