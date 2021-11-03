#include <iostream>

using namespace std;

int main()
{
    int a = 5,i=1;

    do
    {
        cout << "Nilai ke-" << i << " = "<< a <<endl;
        a+=5;
        i++;
    } while (i<=10);
    
    return 0;
}
