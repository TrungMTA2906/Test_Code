#include <iostream>
using namespace std;
int TinhGiaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * TinhGiaiThua(n - 1);
}
int main()
{
    int n;
    cout << "Nhap so can tinh giai thua: ";
    cin >> n;
    cout << endl;
    cout << "Giai thua cua " << n << " la: " << TinhGiaiThua(n);
    return 0;
}

