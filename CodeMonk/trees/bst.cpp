#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define li signed long int

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

struct node{
 li data;
 node *left;
 node *right;
};

struct node* newNode(li z)
{
    struct node *temp = new node;
    temp->data=z;
    temp->left=temp->right=NULL;
    return temp;
};

struct node* insertion(struct node* root,li z)
{
    if(root==NULL)
       return newNode(z);
    else
    {

    if(z<=root->data)
        root->left=insertion(root->left,z);
    else
        root->right=insertion(root->right,z);
    return root;
    }
};

void preorder(struct node *root,li q)
{
    if(root->data==q && root!=NULL)
    {
    cout<<root->data<<'\t';
    preorder(root->left,root->left->data);
    preorder(root->right,root->right->data);
    }
    /*else
    {
        preorder(root->left,q);
        preorder(root->right,q);
    }*/
}

int main()
{
    int n;cin>>n;
    while(n--){
        li z;cin>>z;
        insertion(NULL,z);
    }
    struct node *q=NULL;
    cin>>q->data;
    preorder(q,q->data);

    return 0;
}

