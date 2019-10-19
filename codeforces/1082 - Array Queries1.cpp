#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define inf 1000000
int arr[mx];
int tree[4*mx];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int x,int y)
{
    if(x>e || y<b)
        return inf;
    if(b>=x && e<=y)
        return tree[node];
    int left = 2*node;
    int right = 2*node+1;
    int mid = (b+e)/2;
    int p1=query(left,b,mid,x,y);
    int p2=query(right,mid+1,e,x,y);
    return min(p1,p2);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        init(1,1,n);
        printf("Case %d:\n",i);
        for(int k=1;k<=q;k++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            int c =query(1,1,n,x,y);
            printf("%d \n",c);
        }
    }
}
