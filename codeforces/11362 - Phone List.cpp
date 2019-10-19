#include<bits/stdc++.h>
using namespace std;
const int alphabet = 26;
int p = 0;
struct TrieNode
{
    struct TrieNode *children[alphabet];
    bool isendofword;
};
struct TrieNode *getnode(void)
{
    struct TrieNode *Pnode = new TrieNode;
    Pnode->isendofword = false;
    for(int i=0;i<26;i++)
        Pnode->children[i]=NULL;
    return Pnode;
};
void insert1(struct TrieNode *root,string key)
{
    struct TrieNode *Pcrawl = root;
    for(int i=0;i<key.size();i++)
    {
        int index = key[i]-'0';
        if(Pcrawl->children[index]==NULL)
            Pcrawl->children[index]=getnode();
        Pcrawl=Pcrawl->children[index];
        if(Pcrawl->isendofword == true)
            p=1;
    }
    Pcrawl->isendofword = true;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        struct TrieNode *root = getnode();
        for(int j=0;j<n;j++)
        {
            string ch;
            cin>>ch;
            insert1(root,ch);
        }
        if(p==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        p=0;
    }
    return 0;
}
