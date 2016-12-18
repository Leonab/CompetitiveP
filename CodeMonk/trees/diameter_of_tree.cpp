/*#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

struct node {
 int data;
 struct node *left;
 struct node *right;
};

int lcount=1,rcount=1;

struct node *newNode(node *tree, int data, char s)
{
    //int z=s.size();
    struct node *temp = new node;
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
    if(s=='L')
    {
        tree->left=temp;
    }
    if(s=='R')
    {
        tree->right=temp;
    }
    delete temp;
};


void lcounter(node* lefty)
{
    int kudo1=0,kudo2=0;
    if(lefty->left!=NULL)
        kudo1++;
    else
        if(lefty->right!=NULL)
        kudo2++;
    //return lcounter;
    lcount=max(kudo1,kudo2);
}

void rcounter(node* righty)
{
    int kudo1=0,kudo2=0;
    if(righty->right!=NULL)
        kudo1++;
    else
        if(righty->left!=NULL)
        kudo2++;
    //return rcounter;
    rcount=max(kudo1,kudo2);
}


int main()
{
    int t,x;cin>>t>>x;
    struct node *root = new node;
    root->data=x;
    root->left=root->right=NULL;
    int z =2*(t-1);
    z/=2;
    int k=0,j=0;
    while(z--){
        string s;cin>>s;
        int n;cin>>n;
        if(k<=z/2)
        newNode(root,n,s[j]);
        else
            newNode(root,n,s[j+1]);
        k++;
    }
    lcounter(root);rcounter(root);
    cout<<lcount+rcount;
    return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;

typedef struct node{
    int val, lh, rh;
    struct node *left, *right;
}node;

node * getNode(int val){
    node *ret = new node;//(node*)calloc(1, sizeof(node));
    ret->val = val;
    return ret;
}
int maxus;

int query(node *ptr){
    if(ptr){
        ptr->lh = query(ptr->left);
        ptr->rh = query(ptr->right);
        if (ptr->lh + ptr->rh + 1  > maxus)
            maxus = ptr->lh + ptr->rh + 1;
        return ( ptr->lh > ptr->rh ? ptr->lh : ptr->rh) + 1;
    }
    else
        return 0;
}
int main()
{
    maxus = INT_MIN;
    node *root = NULL,*ptr;
    int n, x, i ;
    cin>>n>>x;
    root = getNode(x);
    string str;
    while(--n){
        cin>>str;
        i = 0;
        ptr = root;
        while(str[i] && ptr ){
            if(str[i] == 'L'){
                if(ptr->left == NULL)
                    ptr->left = getNode(0);
                ptr = ptr->left;
            }
            else{
                if(ptr->right == NULL)
                    ptr->right = getNode(0);
                ptr = ptr->right;
            }
            i++;
        }
        int z;
        cin>>z;
        ptr->val = z;

    }
    query(root);
    cout<<maxus;
    return 0;
}
