#include<iostream>
#include < conio.h>
using namespace std;

double tinhbieuthuc(double x, double y, char k);

int main()
{
	double x = 0;
	double y = 0;
	double kq = 0;
	char k = '+';
	do
	{
		cout << " nhap x = ";
		cin >> x;
		cout << " nhap y = ";
		cin >> y;
		if (x == 0 || y == 0)
		{
			cout << " moi nhap lai ! " << endl;
		}
	} while (x == 0 || y == 0);




	cout << " nhap phep tinh : ";
	cin >> k;
	k = tinhbieuthuc(x, y, k);
	_getch();
	return 0;

}

double tinhbieuthuc(double x, double y, char k)
{
	double kq;

	switch (k)

	{

	case '+':
		kq = x + y;
		cout << kq;

		break;
	case '-':
		kq = x - y;
		cout << kq;
		break;
	case '*':
		kq = x * y;
		cout << kq;
		break;
	case '/':
		kq = x / y;
		cout << kq;
		break;
	default:
		cout << " khong co ket qua";
		return 0;
		break;
	}
}