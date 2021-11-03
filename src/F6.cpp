#include <iostream>

using namespace std;

int main()
{
//Variable
    int i,n;
    float nilai,jml=0,rat;
//UI
    cout << "Banyak nya nilai= ";
    cin >> n;

    for (i = 1; i <=n; i++) 
    {                                            
        cout << "Input nilai ke-" << i << " = ";
        cin >> nilai;   
        jml+=nilai;
        rat=jml/n;
    }
//pengolahan nilai
    
     cout << "\n Total nilai= "<<jml<<endl; 
     cout << " Rata rata nilai= " <<rat<<endl;


    return 0;
}

