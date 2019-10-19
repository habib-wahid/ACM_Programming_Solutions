#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define inf 1000000
int arr[mx];
int tree[mx*4];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=2*node;
    int right=(2*node)+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return inf;
    if(b>=i && e<=j)
        return tree[node];
    int left=2*node;
    int right=(2*node)+1;
    int mid=(b+e)/2;
    int p1=  query(left,b,mid,i,j);
    int p2=  query(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,q,p;
        cin>>n>>q;
        for(int j=1;j<=n;j++)
        {
            cin>>p;
            arr[j]=p;
        }
        init(1,1,n);
        int x,y;
        cout<<"Case "<<i<<":"<<endl;

        for(int j=1;j<=q;j++)
        {
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<endl;
        }
        // memset(arr,0,n+1);
        // memset(tree,0,3*n+3);

    }
     return 0;
}
