#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int menu();
int study(int *ans);
int main()
{	
	int i;
	int rmenu;//�˵�ѡ��
	char ch;//�Ӽ���
	int s[20],ans[10];//s:���20������ans:��
	ofstream fp;
	while(1)
	{
		srand((unsigned)time(NULL));//����
		for(i=0;i<20;i++)
		{
			s[i]=rand()%90+10;
			//cout<<s[i]<<endl;
		}
		rmenu=menu();
		if(rmenu!=1&&rmenu!=2)
			exit(1);
		ch=rmenu==2?'-':'+';
		fp.open("data.txt",ios::out);
		if(fp==NULL)
		{
			cout<<"error"<<endl;
			exit(1);
		}
		for(i=0;i<10;i++)
		{
			fp<<s[i]<<ch<<s[i+10]<<"="<<endl;
			ans[i]=rmenu==2?s[i]-s[i+10]:s[i]+s[i+10];
		}
		fp.close();
		cout<<"�÷�:"<<study(ans)<<endl;
		//cout<<"�÷�:"<<study(ans)<<"��ʱ:"<<(start-clock())/1000<<"��"<<endl;
	}
}

int menu()
{	int in;
	cout<<"1,�ӷ�"<<endl;
	cout<<"2,����"<<endl;
	cout<<"3,�˳�"<<endl;
	cin>>in;
	return in;
}
int study(int *ans)
{	
	int i;
	int user_ans;
	int result=0;
	char s;
	ifstream fp1("data.txt",ios::in);
	for(i=0;i<10;i++)
	{	
		s=fp1.get();
		while(s!='\n')
		{
			cout<<s;
			s=fp1.get();
		}
		cin>>user_ans;
		if(user_ans==ans[i])
			result+=10;
	}
	
	fp1.close;
	return result;
}
