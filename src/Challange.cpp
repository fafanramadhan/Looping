#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
//Variable
    int i,n;
    string id,kls,jur;
//UI
    cout << "\t\tProgram Biodata\n";
    cout << "Jumlah biodata yang ingin di inputkan: ";
    cin >> n;
//biodata
    for (i = 1; i <=n; i++) 
    {   
        cin.ignore();
        cout << "\n\nBiodata ke-" << i << endl;
        cout << "Nama\t: ";
        getline(cin,id);
        cout << "Kelas\t: ";
        getline(cin,kls);
        cout << "Jurusan\t: ";
        getline(cin,jur);
       
        
    }
    getch();
    return 0;
}

