#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,y,a,k=1;
    vector<int>ch,gh;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ch.push_back(a);

    }
    if(x+y<n)
    {
        cout<<x<<endl;
    }
    else if(x>=n)
    {
        cout<<n<<endl;

    }
    else
    {

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=(x+y)*k;j++)
        {
            if(j<ch.size())
            gh.push_back(ch[j]);
            else
                break;
        }
        sort(gh.begin(),gh.end());

        if(gh[0]==ch[i+x])
        {
            cout<<i+x+1<<endl;
            break;
        }
        else
            gh.clear();
            k++;

    }
    }
    return 0;
}
