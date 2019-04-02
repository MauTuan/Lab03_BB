#include<iostream>
using namespace std;

void doicoso(unsigned int n, unsigned int b);
void xuat(int so);
int main ()
{
	int so = 0;
	unsigned n = 1;
	unsigned b = 1;
	
	cout << " nhap so nguyen n: ";
	cin >> n;
	cout << " nhap co so b : ";
	cin >> b;
	doicoso(n, b);
	
	system("pause");
	return 0;
}

void doicoso(unsigned int n, unsigned int b)
{
	int sodu;
	int sodulucsau = 0;
	int i = 1;

	do
	{
		sodu = n%b;
		
			 sodulucsau = sodulucsau + (i*sodu);
		
		
		n = n / b;
		xuat(so);
		i *= 10;
		

	} while (n > 0);
	
	cout << " ket qua chuyen doi he" << sodulucsau;

}

void xuat(int so)
{
	switch (so)
	{
	case 10:
		cout << "A";
	case 11:
		cout << "B";
	case 12:
		cout << "C";
	case 13:
		cout << "D";
	case 14:
		cout << "E";
	case 15 :
		cout << "F";
	default:
		break;
	}
}
