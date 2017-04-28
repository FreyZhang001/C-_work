#include<iostream>
#include<string>
#include<ctime>
using namespace std;
enum time_zone{w11=-11,w10=-10,w9=-9,w8=-8,w7=-7,w6=-6,w5=-5,w4=-4,w3=-3,w2,w1,we0=0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,we12};
//-----------------Date----------------------------------------------------------------//

/**********c��tm�ṹ********************
struct tm {//c�й���tm�ṹ���ѧϰ
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

class Date//Date��Ķ���
{
	public:
		int year,month,day,hour,minute,second;
		Date();//ֱ�ӻ�ȡϵͳʱ��
		Date(int,int,int,int,int,int);//����ʱ����ʱ��
		void setdate(int,int,int,int,int,int);//����
		void showdate();//��ʾ�����س�
		void showdate_endl();//��ʾ���س�
};
//-----------------Date2----------------------------------------------------------------//
class Date2:public Date
{
	public:
		time_zone zone;
		Date2(int,int,int,int,int,int);//
		void showdate2();
		void set_zone(time_zone);
	private:
		string zone_str;//ʱ��
};
//-----------------����----------------------------------------------------------------//
//-----------------Date----------------------------------------------------------------//
Date::Date()//Date���ʵ��
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	year=ltm->tm_year+1900;
	month=ltm->tm_mon;
	day=ltm->tm_mday;
	hour=ltm->tm_hour;
	minute=ltm->tm_min;
	second=ltm->tm_sec;
}

Date::Date(int ryear,int rmonth,int rday,int rhour,int rminute,int rsecond)
{
	year=ryear;
	month=rmonth;
	day=rday;
	hour=rhour;
	minute=rminute;
	second=rsecond;
}
void Date::setdate(int ryear,int rmonth,int rday,int rhour,int rminute,int rsecond)
{
	year=ryear;
	month=rmonth;
	day=rday;
	hour=rhour;
	minute=rminute;
	second=rsecond;
}
void Date::showdate()
{
	cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minute<<":"<<second;
}
void Date::showdate_endl()
{
	cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
}
//-----------------Date----------------------------------------------------------------//
//-----------------Date2----------------------------------------------------------------//
Date2::Date2(int ryear,int rmonth,int rday,int rhour,int rminute,int rsecond)
											:Date(ryear,rmonth,rday,rhour,rminute,rsecond)
{
	zone_str="������";
	zone=e8;
	cout<<"..Date2."<<endl;
}
void Date2::showdate2()
{	
	cout<<zone_str<<": ";
	showdate();
}
void Date2::set_zone(time_zone rz)
{	
	int p=zone;
	int n=rz;
	hour-=p-n;
	if(hour>24)
	{
		day++;
		hour-=24;
	}else if(hour<0)
	{
		day--;
		hour+=24;
	}
	zone=rz;
	switch(zone)
	{
		case w11:zone_str="��ʮһ��";break;
		case w10:zone_str="��ʮ��";break;
		case w9:zone_str="������";break;
		case w8:zone_str="������";break;
		case w7:zone_str="������";break;
		case w6:zone_str="������";break;
		case w5:zone_str="������";break;
		case w4:zone_str="������";break;
		case w3:zone_str="������";break;
		case w2:zone_str="������";break;
		case w1:zone_str="��һ��";break;
		case we0:zone_str="��ʱ��";break;
		case e1:zone_str="��һ��";break;
		case e2:zone_str="������";break;
		case e3:zone_str="������";break;
		case e4:zone_str="������";break;
		case e5:zone_str="������";break;
		case e6:zone_str="������";break;
		case e7:zone_str="������";break;
		case e8:zone_str="������";break;
		case e9:zone_str="������";break;
		case e10:zone_str="��ʮ��";break;
		case e11:zone_str="��ʮһ��";break;
		case we12:zone_str="����ʮ����";break;
	}
}



//-----------------Date2----------------------------------------------------------------//

int main()
{	
	Date2 d(2011,5,6,11,11,11);
	d.showdate2();
	time_zone z=w8;
	d.set_zone(z);
	d.showdate2();
	return 0;
}