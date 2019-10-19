#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>ch[8];
    int sum1=0,sum2=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            char mn;
            cin>>mn;
            ch[i].push_back(mn);
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
                if(ch[i][j]=='Q')
                sum1+=9;
                if(ch[i][j]=='R')
                sum1+=5;
                if(ch[i][j]=='B')
                sum1+=3;
                if(ch[i][j]=='N')
                sum1+=3;
                if(ch[i][j]=='P')
                sum1+=1;
                if(ch[i][j]=='q')
                sum2+=9;
                if(ch[i][j]=='r')
                sum2+=5;
                if(ch[i][j]=='b')
                sum2+=3;
                if(ch[i][j]=='n')
                sum2+=3;
                if(ch[i][j]=='p')
                sum2+=1;
        }
    }
    if(sum1>sum2)
        cout<<"White"<<endl;
   else if(sum2>sum1)
    cout<<"Black"<<endl;
   else
    cout<<"Draw"<<endl;
   return 0;
}
