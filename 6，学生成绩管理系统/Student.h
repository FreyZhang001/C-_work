#ifndef STUDENT_H
#define STUDENT_H
#define NAMEMAX 10

#include<iostream>
#include<cstring>
#include<stdlib.h>

#include"Date.h"
using namespace std;

struct studentinf//�ṹ������
{
	int no;
	char name[NAMEMAX];
	int english;
	int math;
	Date date;
	studentinf *next;
};
class Student
{
	public:
		Student(string);//����
		void insert(int,char[]);//����
		void insert(int,char[],int,int);//����
		void del(int);//ɾ��
		void update(int,int,int);//�޸�����
		void select(int);//����
		void showstu();//��ʾ
	private:
		int sum;//��������
		string mclass;//�༶�����
		studentinf *stu_h;
};

#endif