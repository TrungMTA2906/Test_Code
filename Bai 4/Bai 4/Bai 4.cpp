#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string temp;
    cout << "Nhap chuoi nhi phan: ";
    cin >> temp;
    char a[100];
    strcpy(a, temp.c_str());
    vector<string> x;   
    char* p = strtok(a, ",");
    while (p != NULL)
    {       
        x.push_back(p);
        p = strtok(NULL, ",");
    }
    cout << "Cac so nhi phan chia het cho 5: "; 
    for (int i = 0; i < x.size(); i++) {

        if (x[i]==  "0101"|| x[i] == "1010" || x[i] == "1111") {
            cout << x[i]<<",";
        }
    }
    return 0;
}
