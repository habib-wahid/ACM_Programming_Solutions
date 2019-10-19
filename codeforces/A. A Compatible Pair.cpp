#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,x;
   vector<long long int>ch,gh;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       ch.push_back(x);
   }
   for(int i=0;i<m;i++)
   {
       cin>>x;
       gh.push_back(x);
   }
   sort(ch.begin(),ch.end());
   sort(gh.begin(),gh.end());
   if(ch[n-2]>0 && gh[n-1]>0)
    cout<<ch[n-2]*gh[n-1]<<endl;
   else if(ch[n-2]>0 && gh[n-1]<0)
}
