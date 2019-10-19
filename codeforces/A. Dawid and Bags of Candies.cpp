#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    if(arr[3]==(arr[0]+arr[1]+arr[2]))
        cout<<"YES"<<endl;
    else if((arr[3]+arr[0])==(arr[1]+arr[2]))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
