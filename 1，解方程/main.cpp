#include<iostream>
#include<math.h>
using namespace std;
int menu();
void intoabc();
void one(double a,double b,double c);
void two(double a,double b,double c);
double a=1,b=-3,c=2;//����ϵ��
int main()
{
	int rmenu;//�˵�ѡ��
	
	while(1){
		rmenu=menu();
		switch(rmenu){
			case 0:intoabc();break;
			case 1:one(a,b,c);break;
			case 2:two(a,b,c);break;
			case 3:return 0;break;
		}
	}
	return 0;
}

int menu()
{	int in;
	cout<<"0,����ϵ��"<<endl;
	cout<<"1,��ʾ����"<<endl;
	cout<<"2,��ʾ������"<<endl;
	cout<<"3,�˳�"<<endl;
	cin>>in;
	return in;
}

void one(double aa,double bb,double cc)
{
	cout<<aa<<"*x^2+"<<bb<<"*x+"<<cc<<"=0"<<endl;
}

void two(double aa,double bb,double cc)
{
	double r,j;//��rʵ��j�鲿
	double d;//b^2-4ac
	d=bb*bb-4*aa*cc;
	r=(-bb)/(2*aa);
	if(d==0){
		j=0;
		cout<<"x1="<<r<<",x2="<<r<<endl;
	}else if(d>0){
		j=sqrt(d)/(2*aa);
		cout<<"x1="<<r+j<<",x2="<<r-j<<endl;
	}else if(d<0){
		j=sqrt(-d)/(2*aa);
		cout<<"x1="<<r<<"+j"<<j<<",x2="<<r<<"-j"<<j<<endl;
	}
}

void intoabc()
{
	cout<<"����������ϵ��:"<<endl;
	cin>>a>>b>>c;
}
