#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<ctime>
/**********c��tm�ṹ********************
struct tm {
  int tm_sec;   // �룬������Χ�� 0 �� 59���������� 61
  int tm_min;   // �֣���Χ�� 0 �� 59
  int tm_hour;  // Сʱ����Χ�� 0 �� 23
  int tm_mday;  // һ���еĵڼ��죬��Χ�� 1 �� 31
  int tm_mon;   // �£���Χ�� 0 �� 11
  int tm_year;  // �� 1900 ���������
  int tm_wday;  // һ���еĵڼ��죬��Χ�� 0 �� 6��������������
  int tm_yday;  // һ���еĵڼ��죬��Χ�� 0 �� 365���� 1 �� 1 ������
  int tm_isdst; // ����ʱ
}***********************************/
using namespace std;

class Date
{
	public:
		int year,month,day,hour,minute,second;
		Date();
		Date(int,int,int,int,int,int);//����
		void setdate(int,int,int,int,int,int);//����
		void showdate();//��ʾ�����س�
		void showdate_endl();//��ʾ���س�
};

#endif