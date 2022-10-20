#include <iostream>
using namespace std;

int main()
{
	int i, n,line;
	float aver=0,sum=0;
	int a[3][4]=
	{
		{6,4,9,-13},
		{-1,3,8,7},
		{3,4,10,2}
	};
	cout << "大于平均数的有：";
	line = sizeof(a) / 4;
	for (i = 0; i <= 2; i++)
	{
		for (n = 0; n <= 3; n++)
		{
			sum = a[i][n] + sum;
		}
	}
	aver = sum / line;
	for (i = 0; i <= 2; i++)
	{
		for (n = 0; n <= 3; n++)
		{
			if (a[i][n] > aver)
				cout << a[i][n] << ' ';
		}
	}
	cout << endl;
	cout << "总和 = " << sum << endl;
	return 0;
}
