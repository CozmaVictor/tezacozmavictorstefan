#include <iostream>
using namespace std;
int main()
{
    int n,y,min=9, nr=0;
    cout<<"nr="; cin>>n;
    y=n;
    while(n>0)
    {
        if(n%10<9)
            min=n%10;
            n=n/10;
    }
    while(y>0)
        {
            if(y%10==min)
            nr++;
            y=y/10;
        }
cout<<min<<" si numarul de aparitii : "<<nr;
}




