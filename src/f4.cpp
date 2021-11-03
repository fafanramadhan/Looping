#include <iostream>

using namespace std;

int main()
{
//Variable
    int i,n;
    float nilai;
//UI
    cout << "Banyak nya nilai= ";
    cin >> n;

    for (i = 1; i <=n; i++) 
    {                                            
        cout << "Input nilai ke-" << i << " = ";
        cin >> nilai;   
    }
    


    return 0;
}

