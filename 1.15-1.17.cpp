#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//1.15-1.17
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int number_1;
	int number_2;
	int number_3;
	int number_4;
	cout << "������� 4 �����" << endl;
	cin >> number_1;
	cin >> number_2;
	cin >> number_3;
	cin >> number_4;
	cout << number_1 << " " << number_2 << " " << number_3 << " " << number_4 << endl;

	cout << "������� �������� ����������: x,y,t,v" << endl;
	int x;
	int y;
	int t;
	int v;
	cin >> x;
	cin >> y;
	cin >> t;
	cin >> v;
	cout << "�) " << 5 << " " << 10 << "\t" << "\t�) " << 100 << " " << t << "\t�) " << x << " " << 25 << endl;
	cout << "   " << 7 << " " << "��" << "\t" << "\t   " << 1949 << " " << v << "\t   " << x << " " << y << endl;

	cout << "������� �������� ����������: a,b,x,y" << endl;
	int a;
	int b;
	cin >> a;
	cin >> b;
	cin >> x;
	cin >> y;
	cout << "�) " << 2 << " " << "��" << "\t" << "\t�) " << a << " " << 1 << "\t" << "\t�) " << x << " " << y << endl;
	cout << "   " << 13 << " " << 7 << "\t" << "\t   " << 19 << " " << b << "\t" << "\t   " << 5 << " " << y << endl;

}