// text.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
struct student
{
	char name[20];
	long num;
	char sex;
	int age;
	struct student *next;
};

int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"输入or结束并显示?(1 or 0)"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"请输入姓名:";
		cin>>p->name;
		cout<<"请输入学号:";
		cin>>p->num;
		cout<<"请输入性别:";
		cin>>p->sex;
		cout<<"请输入年龄:";
		cin>>p->age;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p; 
		}
		q=p;
		p->next=NULL;	 
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"姓名："<<p->name<<endl;
		cout<<"学号："<<p->num<<endl;
		cout<<"性别："<<p->sex<<endl;
		cout<<"年龄："<<p->age<<endl;
		cout<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
	return 0;
}
