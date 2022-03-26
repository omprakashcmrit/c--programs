#include<stdio.h>
int main()
{
struct student
{ 
 char usn[10];
 char stuname[10];
 int sem;
 float m1,m2,m3,m4,m5,avg;
};
struct student s[10];
int i,n,avg;
printf("enter number of student record");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("student usn:");
 scanf("%s",&s[i].usn);
 printf("student name:");
 scanf("%S",&s[i].stuname);
 printf("enter semester");
 scanf("%d",&s[i].sem);
 printf("enter 5 subject names");
 scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m3,&s[i].m4,&s[i].m5);
}
 for(i=0;i<n;i++)
{
 s[i].avg=((s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/(5.0));
}
printf("students scoredabove avg");
printf("\nusn\tstudent name\taverag");
for(i=0;i<n;i++)
{
 if(s[i].avg>50)
{
 printf("\n%s\t%s\t%f\n",s[i].usn,s[i].stuname,s[i].avg);
}
}
printf("student scored below avg");
printf("\nusn\tstudent name\taverage");
for(i=0;i<n;i++)
{
 if(s[i].avg<50.0)
{
 printf("\n%s\t%s\t%f\n",s[i].usn,s[i].stuname,s[i].avg);
}
}
return 0;
}

