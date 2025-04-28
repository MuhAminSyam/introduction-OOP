#include <iostream>
using namespace std;

class persegi panjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void input_data()
    {
        cout << "masukkan panjang:";
        cin >> panjang;
        cout << "masukkan lebar:";
        cin >> lebar;
    }
    void output_data()
    {
        cout << "tampilakn luas = " << luas << endl;
    }
    void hitung_luas()
    {
        luas = panjang * lebar;
    }
};

int main()
{
    persegi_panjang pp;
    pp.input_data();
    pp.hitung_luas();
    pp.output_data();
}