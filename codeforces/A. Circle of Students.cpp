#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n,x,p=0;
        vector<int>ch;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            ch.push_back(x);
        }
        if(ch[0]==1)
        {
            if(n==1 || n==2)
            {
                cout<<"YES"<<endl;
            }

            else if(ch[2]-ch[1]==-1)
            {
                for(int k=2;k<n;k++)
                {
                    if(ch[k]-ch[k-1]==-1)
                        continue;
                    else
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
                ch.clear();
            }
            else if(ch[2]-ch[1]==1)
            {
            for(int k=2;k<n;k++)
                {
                    if(ch[k]-ch[k-1]==1)
                        continue;
                    else
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
                ch.clear();
            }
            else
            {
                cout<<"NO"<<endl;
                ch.clear();
            }
        }
        else
        {

            int dif = ch[1]-ch[0];
            int dif1=n-1;
            int dif2=1-n;

            if(dif == -1)
            {
                for(int k=1;k<n;k++)
                {
                    if(ch[k]-ch[k-1]==dif || ch[k]-ch[k-1]==dif1)
                        continue;
                    else
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
                ch.clear();
            }
            else if(dif==1)
            {
                for(int k=1;k<n;k++)
                {
                    if(ch[k]-ch[k-1]==dif || ch[k]-ch[k-1]==dif2)
                        continue;
                    else
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
                ch.clear();
            }
            else
            {
                cout<<"NO"<<endl;
                ch.clear();
            }

        }
    }
    return 0;
}
