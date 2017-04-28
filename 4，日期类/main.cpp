#include<iostream>
using namespace std;

class Myday
{
	public:
		Myday();
		Myday(int,int,int);
		int day;
		int month;
		int year;
		void view();
		bool setyear(int);
		bool setmonth(int);
		bool setday(int);
		int compare(Myday);//�Ƚ�
	private:
		int count_day();//������˶�����
		bool is_leap(int y);//�Ƿ�����
};
 
Myday::Myday()//����1
{
	day=1;
	month=1;
	year=2000;
}
Myday::Myday(int y,int m,int d)//����2
{
	Myday();
	day=d;
	month=m;
	year=y;
}

void Myday::view()//��ʾ
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

bool Myday::setyear(int y)//������
{
	if(y>999&&y<=9999)
	{
		year=y;
		return true;
	}else
		return false;
}
bool Myday::setmonth(int m)//������
{
	if(m>=1&&m<=12)
	{
		month=m;
		return true;
	}
	else
	{
		month=1;
		return false;
	}
}
bool Myday::setday(int d)//������
{
	if(month==2)
	{
		if(!is_leap(year)&&d>28)
		{	
			day=28;
			return false;
		}else if(is_leap(year)&&d>29)
		{
			day=29;
			return false;
		}else
		{
			day=d;
			return true;
		}
	}
	else
	{
		day=d;
		return true;
	}
}

int Myday::compare(Myday x)//�Ƚ�
{
	int sub;
	sub=0;
	sub+=count_day();
	sub-=x.count_day();
	if(year==x.year)
		return sub;
	else if(year>x.year)
	{
		for(int i=x.year;i<year;i++)
			sub+=is_leap(i)?366:365;
	}else if(year<x.year)
	{
		for(int i=year;i<x.year;i++)
			sub-=is_leap(i)?366:365;
	}


	return sub;
}
bool Myday::is_leap(int year)
{
	if(year%100!=0&&year%4==0)
		return true;
	if(year%100==0&&year%400==0)
		return true;
	return false;
}
int Myday::count_day()
{
	int sum;
	sum=0;
	for(int i=1;i<month;i++)
	{
		switch(i)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:sum+=31;break;
		case 4:case 6:case 9:case 11:sum+=30;break;
		case 2:sum+=is_leap(year)?29:28;break;
		}
	}
	sum+=day;
	return sum;
}

void main()
{
	Myday day1(4001,1,1),day2(4000,1,1);
	day1.view();
	day2.view();
	cout<<day1.compare(day2)<<endl;
	cout<<day2.compare(day1)<<endl;
}





