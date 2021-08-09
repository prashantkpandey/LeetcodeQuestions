#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  char str[100];
  int i,l;
  cout<<"enter the string";
  gets(str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {
    if(str[i]=='p' && str[i+1]=='i')
    {
      str[i+4]=str[i+2];
      str[i+5]=str[i+3];
      str[i]='3';
      str[i+1]='.';
      str[i+2]='1';
      str[i+3]='4';


    }
  }str[l+2]=NULL;
  puts(str);


}
