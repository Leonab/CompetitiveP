#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *getNew(int n)
{
    struct node *ret = new node;
    ret->data=n;
    ret->left=ret->right=NULL;
    return ret;
}

struct node *insertion(struct node *root, int n)
{
    if(root==NULL)
    {
        return getNew(n);
    }

    if(n<=root->data)
    {
        root->left=insertion(root->left,n);
    }
    else
        root->right=insertion(root->right,n);

    return root;

};

int height(struct node *ptr)
{
    if(ptr==NULL)
        return 0;

    int lh,rh;
    lh=height(ptr->left);
    rh=height(ptr->right);

    //cout<<lh<<'\t'<<rh<<endl;
    return 1+max(lh,rh);
}

int main()
{
    int n;cin>>n;
    int a[n];
    rep(i,n)
    {
        cin>>a[i];
    }
    node *root=NULL,*ptr;
    root=getNew(a[0]);
    ptr=root;
    repi(i,1,n)
    {
        insertion(ptr,a[i]);
    }

    cout<<height(root);

    return 0;
}
