#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,gh;
    cin>>ch;
    int i=0;
    while(i<ch.size())
    {
        if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
            i=i+3;
        else
        {
            gh.push_back(ch[i]);
            if(ch[i+1]=='W'&& ch[i+2]=='U' && ch[i+3]=='B')
                gh.push_back(' ');
                i++;
        }
    }
    cout<<gh<<endl;
    return 0;
}
