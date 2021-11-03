#include <iostream>

using namespace std;

int main()
{
    int a=5;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Nilai ke-"<<i <<" = "<< a<<endl;
        a+=5; //artinya a = a+5 (a yang lama"5" di tambah 5)
    }
    
    return 0;
}
