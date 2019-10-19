#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,gh;
    cin>>ch;
    int big=0,small=0;
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
            big++;
        else
            small++;
    }
    if(big==ch.size())
    {
        for(int i=0;i<ch.size();i++)
        {
            char ph=tolower(ch[i]);
            gh.push_back(ph);
        }
        cout<<gh<<endl;
    }
    else if((ch[0]>='a'&&ch[0]<='z')&&(big==ch.size()-1))
    {
        gh.push_back(toupper(ch[0]));
        for(int i=1;i<ch.size();i++)
        {
            gh.push_back(tolower(ch[i]));
        }
        cout<<gh<<endl;
    }
    else
        cout<<ch<<endl;
    return 0;
}
