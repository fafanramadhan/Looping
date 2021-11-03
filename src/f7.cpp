#include <iostream>
using namespace std;
int main()
{
//Variable
    int i,n;
    float nilai,jml=0,rat,kal=1;
//UI
    cout << "Banyak nya nilai= ";
    cin >> n;

    for (i = 1; i <=n; i++) 
    {                                            
        cout << "Input nilai ke-" << i << " = ";
        cin >> nilai;   
        jml+=nilai;//jml=jml default + nilai input
        kal*=nilai;//kal=kal default + nilai input
        rat=jml/n;
    }
//pengolahan nilai
    
     cout << "\n Total nilai= "<<jml<<endl; 
     cout << " jumlah perkalian= "<<kal<<endl;
     cout << " Rata rata nilai= " <<rat<<endl;


    return 0;
}

