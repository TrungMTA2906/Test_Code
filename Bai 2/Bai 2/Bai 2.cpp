#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "Nhap so phan tu cua day FiBo: " << endl;
    cin >> n;
    if (n <= 0) cout << "Khong ton tai day FiBo." << endl;
    if (n == 1) cout << "1." << endl;
    if (n == 2)cout << "1 , 1 ." << endl;
    else {
        int PT1 = 1;
        int PT2 = 1;
        cout << PT1 << "," << PT2 << ",";
        for (int i = 3; i <= n; i++) {           
            int PT3 = PT1 + PT2;
            cout << PT3 << ",";
            PT1 = PT2;
            PT2 = PT3;          
        }
    }
}

