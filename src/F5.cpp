#include <iostream>

using namespace std;

int main()
{
//Variable
    int i,n;
    float nilai,jml=0;
//UI
    cout << "Banyak nya nilai= ";
    cin >> n;

    for (i = 1; i <=n; i++) 
    {                                            
        cout << "Input nilai ke-" << i << " = ";
        cin >> nilai;   
        jml+=nilai;
    }
//Total nilai
    
     cout << "\n Total nilai= "<<jml<<endl; 


    return 0;
}

