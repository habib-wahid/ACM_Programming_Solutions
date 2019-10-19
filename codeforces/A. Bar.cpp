#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,p=1;
    string kh="18";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string gh;
        cin>>gh;
        if((gh.size()==1)&&(gh[0]>='0'&& gh[0]<='9'))
         sum++;
         else if((gh.size()==2)&&(gh[0]>='0'&& gh[0]<='9')&&gh<"18")
            sum++;
        else if(gh=="ABSINTH"||gh=="BEER"||gh=="BRANDY"|| gh=="CHAMPAGNE"||gh=="GIN"||gh=="RUM"||gh=="SAKE"||gh=="TEQUILA"||gh=="VODKA"||gh=="WHISKEY"|| gh=="WINE")
        sum++;
        else
            p=1;
    }
    cout<<sum<<endl;
    return 0;
}
