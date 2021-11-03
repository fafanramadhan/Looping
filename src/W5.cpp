#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    float nilai,jml,rat,kal=1;
//UI
    cout << "Banyak nilai: ";
    cin >> n;
    

    while (i<=n)
    {
        cout <<"Input nilai" <<i<< " = ";
        cin >> nilai;

        jml+=nilai;
        rat=jml/n;
        kal*=nilai;
        i++;
    }
    
    cout << "\nTotal nilai= " <<jml<<endl;
    cout << "Hasil kali nilai= "<<kal <<endl;
    cout << "Rata Rata= " <<rat<<endl;


    return 0;
}
