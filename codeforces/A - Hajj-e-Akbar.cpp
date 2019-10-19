#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int j=1;
    int i=1;
    while(i)
    {
        cin>>ch;
        if(ch.size()==1)
            i=0;
        else
        {
            if(ch=="Hajj")
                cout<<"Case "<<j<<": Hajj-e-Akbar"<<endl;
            else
               cout<<"Case "<<j<<": Hajj-e-Asghar"<<endl;
               j++;
        }
    }
    return 0;
}
