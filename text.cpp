// text.cpp : �������̨Ӧ�ó������ڵ㡣
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
	while(cout<<"����or��������ʾ?(1 or 0)"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"����������:";
		cin>>p->name;
		cout<<"������ѧ��:";
		cin>>p->num;
		cout<<"�������Ա�:";
		cin>>p->sex;
		cout<<"����������:";
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
		cout<<"������"<<p->name<<endl;
		cout<<"ѧ�ţ�"<<p->num<<endl;
		cout<<"�Ա�"<<p->sex<<endl;
		cout<<"���䣺"<<p->age<<endl;
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
