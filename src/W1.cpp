#include <iostream>

using namespace std;

int main()
{
//variable declaration
char ulangi= 'y';
int i=0;

//perulangan
while (ulangi == 'y')
{
    cout << "Apakah anda ingin mengulang? \n";
    cout << "jawab (y/n)";
    cin >> ulangi;
//increment i, difunakan untuk mengetahui berapa jumlah i(pengulangan)
    i++;
}
cout << "perulangan selesai! \n";
cout << "Anda melakukan perulangan sebanyak "<<i<< " kali" <<endl;
    return 0;
}
