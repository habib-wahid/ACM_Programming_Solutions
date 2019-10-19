#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,vec,gh;
    int h1=0,e1=0,l1=0,o1=0;
    cin>>gh;
    ch.push_back('o');
    vec.push_back('o');
    for(int i=0;i<gh.size();i++)
    {
        ch.push_back(gh[i]);
    }
    for(int i=1;i<=ch.size();i++)
    {
        if(ch[i]=='h' && h1<1 && vec[vec.size()-1]=='o')
            {
                vec.push_back(ch[i]);
                h1=h1+1;
            }
        if(ch[i]=='e' && e1<1 && vec[vec.size()-1]=='h')
            {
                vec.push_back(ch[i]);
                e1++;
            }
        if(ch[i]=='l' && l1<2 && (vec[vec.size()-1]=='e' || vec[vec.size()-1]=='l'))
            {
                vec.push_back(ch[i]);
                l1++;
            }
        if(ch[i]=='o' && o1<1 && vec[vec.size()-1]=='l')
            {
                vec.push_back(ch[i]);
                o1++;
            }
    }

    if(vec=="ohello")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
