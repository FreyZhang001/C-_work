#include<iostream>
#include<math.h>
#include<string>
#include<time.h>
using namespace std;

struct studentinf//ѧ���ṹ��
{
	int no;
	int cla;
	char name[10];
	int english;
	int math;
	int computer;
};
struct count//������ͳ��ʹ��
{
	int e1;//С��60
	int e2;//���ڵ���60С��70
	int e3;//���ڵ���70С��80
	int e4;//���ڵ���80С��90
	int e5;//���ڵ���90
};
//��Ŀ��Ŀ�ģ��ṹ������ͼ
void main()
{	
	srand((unsigned)time(NULL));
	studentinf student[30];
	count e_num,m_num,c_num;//ͳ�Ƴ�ʼ��
	e_num.e1=0;e_num.e2=0;e_num.e3=0;e_num.e4=0;e_num.e5=0;
	m_num.e1=0;m_num.e2=0;m_num.e3=0;m_num.e4=0;m_num.e5=0;
	c_num.e1=0;c_num.e2=0;c_num.e3=0;c_num.e4=0;c_num.e5=0;
	for(int i=0;i<30;i++)
	{
		student[i].cla=14;
		student[i].no=1401+i;
		strcpy(student[i].name,"����");
		student[i].english=rand()%90+10;
		student[i].math=rand()%90+10;
		student[i].computer=rand()%90+10;
	}
	
	cout<<"ѧ���ɼ���"<<endl;
	cout<<"|�༶\t|ѧ��\t|����\t|Ӣ��\t|��ѧ\t|�����\t|"<<endl;
	for(i=0;i<30;i++)
		cout<<"|"<<student[i].cla<<"\t|"<<student[i].no<<"\t|"<<student[i].name<<"\t|"<<student[i].english<<"\t|"<<student[i].math<<"\t|"<<student[i].computer<<"\t|"<<endl;
	


	//ͳ�����
	for(i=0;i<30;i++)
	{
		if(student[i].english<60)//Ӣ��ͳ��
			e_num.e1++;
		else if(student[i].english>=60&&student[i].english<70)
			e_num.e2++;
		else if(student[i].english>=70&&student[i].english<80)
			e_num.e3++;
		else if(student[i].english>=80&&student[i].english<90)
			e_num.e4++;
		else if(student[i].english>=90)
			e_num.e5++;

		if(student[i].math<60)//��ѧͳ��
			m_num.e1++;
		else if(student[i].math>=60&&student[i].math<70)
			m_num.e2++;
		else if(student[i].math>=70&&student[i].math<80)
			m_num.e3++;
		else if(student[i].math>=80&&student[i].math<90)
			m_num.e4++;
		else if(student[i].math>=90)
			m_num.e5++;

		if(student[i].computer<60)//�����ͳ��
			c_num.e1++;
		else if(student[i].computer>=60&&student[i].computer<70)
			c_num.e2++;
		else if(student[i].computer>=70&&student[i].computer<80)
			c_num.e3++;
		else if(student[i].computer>=80&&student[i].computer<90)
			c_num.e4++;
		else if(student[i].computer>=90)
			c_num.e5++;
	}
	
	//���ͳ�ƽ��
	cout<<"ͳ�ƽ��:"<<endl;
	cout<<"|ͳ��\t|90����\t|80-90\t|70-80\t|60-70\t|60����\t|"<<endl;
	cout<<"|Ӣ��\t|"<<e_num.e5<<"\t|"<<e_num.e4<<"\t|"<<e_num.e3<<"\t|"<<e_num.e2<<"\t|"<<e_num.e1<<"\t|"<<endl;
	cout<<"|��ѧ\t|"<<m_num.e5<<"\t|"<<m_num.e4<<"\t|"<<m_num.e3<<"\t|"<<m_num.e2<<"\t|"<<m_num.e1<<"\t|"<<endl;
	cout<<"|�����\t|"<<c_num.e5<<"\t|"<<c_num.e4<<"\t|"<<c_num.e3<<"\t|"<<c_num.e2<<"\t|"<<c_num.e1<<"\t|"<<endl;

}
