#include<iostream>
#include<string>
#include <stdlib.h>
#include"Student.h"
using namespace std;
int menu();
int main()
{
	Student stu("5214");
	int m=menu();
	int no,english,math;
	char name[10];
	while(1)
	{
		switch(m)
		{
		case 1://����ѧ��
			cout<<"д���ʽ ��:14112 test"<<endl;
			cin>>no>>name;
			stu.insert(no,name);
			break;
		case 2://����ѧ���ͳɼ�
			cout<<"д���ʽ ��:14112 test ��ѧ�ɼ� Ӣ��ɼ�"<<endl;
			cin>>no>>name>>math>>english;
			stu.insert(no,name,math,english);
			break;
		case 3://���³ɼ�
			cout<<"�����ʽ:ѧ�� ��ѧ�ɼ� Ӣ��ɼ�"<<endl;
			cin>>no>>math>>english;
			stu.update(no,math,english);
			break;
		case 4://��ʾ����
			stu.showstu();
			system("pause");
			break;
		case 5:
			cout<<"����ѧ��:"<<endl;
			cin>>no;
			stu.select(no);
			break;
		case 6:
			cout<<"����ѧ��:"<<endl;
			cin>>no;
			stu.del(no);
			break;
		case 7://�˳�
			return 0;
			break;
		default:
			cout<<"������ѡ��"<<endl;
			m=menu();
			break;
		}
		m=menu();
	}
	
	return 0;
}
int menu()
{	
	int m;
	cout<<"1,����ѧ��"<<endl;
	cout<<"2,����ѧ���ͳɼ�"<<endl;
	cout<<"3,���³ɼ�"<<endl;
	cout<<"4,��ʾ����"<<endl;
	cout<<"5,����ѧ��"<<endl;
	cout<<"6,ɾ��ѧ��"<<endl;
	cout<<"7,�˳�"<<endl;
	cin>>m;
	return m;
}