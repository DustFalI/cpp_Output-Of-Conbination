#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,r,a[1000]={0},arr=1;//数组用于存放各个位的数字 
	cin>>n>>r;
	while(arr)
	{
		if(arr == r+1)//判定下标是否越界，因为是先叠加下标再加一，所以叠加完后的下一步就判断，所以在前面 
		{
			for(int i=1;i<=r;i++)
			{
				cout<<setw(3)<<a[i];
			}
			arr--;//下标减一，回到上一位叠加 
			cout<<endl;
			continue;
		}
		
		if(!a[arr])//判定是否为空，加位的操作 
		{
			a[arr] = a[arr - 1] + 1;
			arr++;
			continue;
		}
		//**关键** 
		if(a[arr] + r - arr < n)//判定叠加后不能超过最大值，并且后面的值也不能超过最大值 
		{//本条判断要求从第一位就计算好后面的数叠加是否超过最大值 
			a[arr]++;//例：第一位是4，就没有必要往后叠加了，因为后面的数一定大于5 
			arr++;
			continue;
		}
		else//超过最大值不能继续叠加的情况，回退，去上一位叠加 
		{
			a[arr] = 0;
			arr--;
		}
	}
	return 0;
}
