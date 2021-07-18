#include<iostream>
using namespace std;
const char MangDoiChieu[] = { 
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
		'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z','W'
};
int main() {
	int  SoNguyen, CoSO;
	char s[100]; 
	cout << "Nhap so nguyen can chuyen: ";
	cin >> SoNguyen;
	cout << "Nhap He co so: ";
	cin >> CoSO;
		if (SoNguyen == 0) {
			cout << "0" << endl;
		}
		else {
			int i = 0;
			while (SoNguyen) { 
				int temp = SoNguyen % CoSO;
				SoNguyen = SoNguyen / CoSO;

				s[i++] = MangDoiChieu[temp];
			}
			s[i] = '\0'; 
			_strrev(s); 
			puts(s);
		}
}

