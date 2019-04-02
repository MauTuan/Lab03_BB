#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

float nhapsoakhackhong(float a);

void Giaiphuongtrinhbacnhat(double a, double b);



int main()
{
	float a = 1;
	float b = 1;
	float x = 0;
	a = nhapsoakhackhong(a);


	cout << " nhap b : ";
	cin >> b;

	Giaiphuongtrinhbacnhat(a, b);

	system("pause");
	return 0;
}

void Giaiphuongtrinhbacnhat(double a, double b)
{
	double x;
	if (a != 0)
	{
		cout << " phuong trinh co nghiem la : " << endl;
		x = -b / a;

		cout << " ket qua la : " << x;
	}

	else if (b == 0)
	{
		cout << " phuong vo dinh ";
	}
	else if (b != 0)
	{
		cout << " phuong trinh vo dinh ";
	}

}

float nhapsoakhackhong(float a)
{
	do
	{
		cout << " nhap so a khac khong : ";
		cin >> a;
		if (a == 0)
		{
			cout << " moi nhap lai so a!" << endl;

		}
	} while (a == 0);

	return a;

}