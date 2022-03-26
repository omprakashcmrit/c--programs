#include<stdio.h>

int str_length(char[]);
int str_compare(char[],char[]);
int str_concat(char[],char[]);
int main()
{
 char str[50];
 char str1[50],str2[50];
 char str_des[50],str_src[50];
 int length,compres;
 printf("enter the string");
 scanf("%s",&str);
 length=str_length(str);
 printf("the length of %s is %d\n",str,length);
 printf("enter two strings for string compare:");
 scanf("%s%s",&str1,&str2);
 compres=str_compare(str1,str2);
 if(compres<0)
 {
  printf("string\"%s\" is less than \"%s\"\n",str1,str2);
 }
 else if(compres==0)
 {
  printf("string\"%s\" is less than \"%s\"\n",str1,str2);
 }
 else
 {
 printf("string\"%s\" is greater than\"%s\"\n",str1,str2);
 }
 printf("enter two strings for string concantation");
 scanf("%s%s",&str_des,&str_src);
 str_concat(str_des,str_src);
 printf("the string after concantation \"%s\"\n",str_des);
 return 1;
 }
 int str_length(char s[])
 {
  int i;
  for(i=0;s[i]!=0;i++);
  return i;
}
 int str_compare(char s1[],char s2[])
 {
  int i,j;
  for(i=0,j=0;(s1[i]!='\0'&& s2[j]!='\0');i++,j++)
 {
  if (s1[i]!=s2[j])
 {
  return (s1[i] - s2[j]);
 }
 } 
 if(s1[i]=='\0' && s2[j]=='\0')
  {
   return 0;
  }
 else if(s1[i]=='\0' || s2[j]=='\0')
 { 
  return(s1[i]-s2[i]);
 }
 }
 int str_concat(char s1[],char s2[])
 {
  int i,j;
  for(i=0;s1[i]!='\0';i++);
  for(j=0;s2[j]!='\0';i++,j++)
 {
  s1[i]=s2[j];
 }
  s1[i]='\0';
 }
