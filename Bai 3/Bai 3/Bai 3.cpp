#include <iostream>
using namespace std;
bool KiemTraSoNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	if (n > 2)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i < sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int SNT;
	cout << "Nhap so can kiem tra: ";
	cin >> SNT;
	cout << endl;
	if (KiemTraSoNguyenTo(SNT) == true) {
		cout << "La so nguyen to." << endl;
	}
	else
		cout << "Khong la so nguyen to." << endl;
}