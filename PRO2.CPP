#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<process.h>
class student
{
int rollno;
char name[20];
int marks[5];
float total,perc;

public:

void getdata();
void putdata();
int retrollno()
{
return rollno;
}
char* findname()
{
return name;
}
}s[3];
void student::getdata()
{
cout<<"\nenter rollno       :";
cin>>rollno;
cout<<"\nenter name       :";
cin>>name;
cout<<"\nenter marks in 5 subjects         :";
for(int i =0;i<5;i++)
{
cin>>marks[i];
cout<<"\n";
}
}
void student::putdata()
{      total=0;
cout<<"rollno is   :"<<rollno;
cout<<"\nname is :"<<name;
cout<<"\nmarks are   :\n";
for(int i=0;i<5;i++)
{
cout<<marks[i]<<"\n";
total+=marks[i];
}
perc=total/5;
cout<<"total marks are:" <<total;
cout<<"\npercentage is:" <<perc;
getch();
}
void main()
{
char a[20];
int n,op;
clrscr();
for(int i=0;i<3;i++)
{
s[i].getdata();
delay(1000);
clrscr();
} while(op!=3)
{            clrscr();
cout<<"ENTER YOUR CHOICE:\n1.to find from roll numbers\n2.to find from name!\n3.exit ";
cin>>op;

switch(op)
{
case 1:
int flag=0;
//to find from employ no.
cout<<"enter the roll no to check!\n";
cin>>n;
for( i=0;i<3;i++)
{
int y=s[i].retrollno();
if(n==y)
{
s[i].putdata();
flag=1;
break;
}
}
if(flag==0)
cout<<"invalid roll no!\n";
break;
case 2:
//to find from employ name.
cout<<"\nenter the name to check from\n";
gets(a);
flag=0;
for( i=0;i<3;i++)
if(strcmpi(a,s[i].findname()) ==0)
{
s[i].putdata();
flag=1;
break;
}
if(flag==0)
cout<<"invalid employ name!\n";
break;
}}
getch();
}
