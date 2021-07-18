#include <iostream>
using namespace std;
bool PaLinDrome(string x)
{
    string DoiXungX;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        DoiXungX.push_back(x[i]);
    }
    if (x == DoiXungX) return true;
    else return false;
}

int main()
{
    string PLD;
    cout << "Nhap chuoi: ";
    cin >> PLD;
    if (PaLinDrome(PLD)) {
        cout << "La chuoi PaLoDrome." << endl;
    }      
    else {
        cout << "Khong phai chuoi PaLoDrome." << endl;
    }
}

