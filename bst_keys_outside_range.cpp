#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define inf (1<<30)

typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define mx 0


struct node{
    node* left;
    node* right;
    int key;
};

node* remove(node* root, int min,int max)
{
    if(root==NULL)
        return NULL;
    root->left=remove(root->left,min,max);
    root->right=remove(root->right,min,max);

    if(root->key<min)
    {
        node* rchild = root->right;
        delete root;
        return rchild;
    }

    if(root->key>max)
    {
        node* lchild = root->left;
        delete root;
        return lchild;
    }
    return root;
}

node* newNode(int n)
{
    node* temp = new node;
    temp->key=n;
    temp->left=temp->right=NULL;
    return temp;
}

node* insert(node* root, int key)
{
    if (root == NULL)
       return newNode(key);
    if (root->key > key)
       root->left = insert(root->left, key);
    else
       root->right = insert(root->right, key);
    return root;
}

void display(node* root)
{
    if(root)
    {
        display(root->left);
        cout<<root->key<<" ";
        display(root->right);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    node* root = NULL;
    root = insert(root, 6);
    root = insert(root, -13);
    root = insert(root, 14);
    root = insert(root, -8);
    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 7);

    cout << "Inorder traversal of the given tree is: ";
    display(root);

    root = remove(root, -10, 13);

    cout << "\nInorder traversal of the modified tree is: ";
    display(root);

    return 0;
}
