#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

void trangthai(float BMI);
float tinhchisoBMI(float w, float h);


int main()
{
	float w;
	float h;
	float BMI;
	cout << " nhap can nang cua ban theo (kg) :";
	cin >> w;
	cout << " nhap chieu cao cua ban theo (m) : ";
	cin >> h;
	cout << " ban nang " << w << " kg " << endl;
	cout << " ban cao " << h << " met " << endl;
	BMI = tinhchisoBMI(w, h);
	cout << "chi so BMI cua ban la: " << setprecision(3) << BMI << " va trang thai cua ban la ";
	trangthai(BMI);

	_getch();
	return 0;

}

float tinhchisoBMI(float w, float h)
{
	float BMI;
	BMI = w / pow(h, 2);
	return BMI;
}

void trangthai(float BMI)

{
	if (BMI < 15)
		cout << "doi khat";
	else if (BMI < 17.5)
		cout << "bieng an";
	else if (BMI < 18.5)
		cout << "thieu can";
	else if (BMI <= 25)
		cout << " ly tuong ";
	else if (BMI < 30)
		cout << " thua can ";
	else if (BMI <40)
		cout << " beo phi ";
	else if (BMI >40)
		cout << " tre em bi beo phi  ";
}