#include <iostream>

using namespace std;

int main()
{
    int i=1;
    float n,nilai,jml;

     cout <<"Banyak nilai: ";
     cin >> n;

    do
    {
        cout <<"input nilai ke-"<< i <<"=";
        cin >> nilai;
        jml+=nilai;
        i++;

    } while (i<=n);
    cout << "Total Nilai: " <<jml<<endl;
    return 0;
}
