#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,r,a[1000]={0},arr=1;//�������ڴ�Ÿ���λ������ 
	cin>>n>>r;
	while(arr)
	{
		if(arr == r+1)//�ж��±��Ƿ�Խ�磬��Ϊ���ȵ����±��ټ�һ�����Ե���������һ�����жϣ�������ǰ�� 
		{
			for(int i=1;i<=r;i++)
			{
				cout<<setw(3)<<a[i];
			}
			arr--;//�±��һ���ص���һλ���� 
			cout<<endl;
			continue;
		}
		
		if(!a[arr])//�ж��Ƿ�Ϊ�գ���λ�Ĳ��� 
		{
			a[arr] = a[arr - 1] + 1;
			arr++;
			continue;
		}
		//**�ؼ�** 
		if(a[arr] + r - arr < n)//�ж����Ӻ��ܳ������ֵ�����Һ����ֵҲ���ܳ������ֵ 
		{//�����ж�Ҫ��ӵ�һλ�ͼ���ú�����������Ƿ񳬹����ֵ 
			a[arr]++;//������һλ��4����û�б�Ҫ��������ˣ���Ϊ�������һ������5 
			arr++;
			continue;
		}
		else//�������ֵ���ܼ������ӵ���������ˣ�ȥ��һλ���� 
		{
			a[arr] = 0;
			arr--;
		}
	}
	return 0;
}
