#include <iostream>
using namespace std;
int* ChuyenThanhKiTu(int n) {
    static int DaySo[4];
    DaySo[0] = n / 1000;
    DaySo[1] = (n % 1000) / 100;
    DaySo[2] = (n % 100) / 10;
    DaySo[3] = n - DaySo[0] * 1000 - DaySo[1] * 100 - DaySo[2] * 10;
    return DaySo;
}
int main()
{
    int SoNgauNhien = 1234;
    int* p = ChuyenThanhKiTu(SoNgauNhien);
    int SNN[4];
    for (int i = 0; i < 4; i++) {
        SNN[i] = p[i];
    }
    cout << "Welcome to the Cows and Bulls Game!" << endl;
    cout << "Enter a number: " << endl;
    cout << ">>> ";
    int SoChon;
    int dem = 0;
    int temp = 0;
    int demmax = 0;
    while (true)
    {
        cin >> SoChon;
        p = ChuyenThanhKiTu(SoChon);
        
        for (int i = 0; i < 4; i++) {
            if (p[i] == SNN[i]) {
                dem = dem + 1;
            }
        }       
        if (demmax < dem) {
            demmax = dem;           
        }
        temp = demmax - dem;
        cout << dem << "Cows" << "," << temp <<" Bulls" <<demmax<< endl;
        dem = 0;
        if (demmax == 4) {
            cout << " MISSION SUCCESS...";
                break;
        }
        
    }
    
    




}

