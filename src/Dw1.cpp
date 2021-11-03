#include <iostream>

using namespace std;

int main()
{
    char ulangi;
    int i=0;

    do
    {
        cout << "apakah kamu ingin mengulagi?\n";
        cout << "jawab (y/n): ";
        cin >> ulangi;
        i++;
    } while (ulangi=='y');

    cout << "perulangan selesai!\n";
    cout << "kamu mengulang sebanyak " <<i<< " kali\n";
    
    return 0;
}
