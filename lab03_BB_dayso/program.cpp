#include<iostream>

using namespace std;


int main()
{
	float n;
	float
		i = 1;
	float
		tong = 0;
	cout << " nhap n :";
	cin >> n;
	
		while (i <= n)
		{ 
			tong +=  1 / i ;
			i++ ;
		}
		cout << " tong " << tong;
	

	system("pause");
	return 0;

}

