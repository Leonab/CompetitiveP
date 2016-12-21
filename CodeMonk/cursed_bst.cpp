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

struct node {
    int data;
    node *left,*right;
};

struct node *newNode(int n)
{
    struct node* ptr = new node;
    ptr->data=n;
    ptr->left=ptr->right=NULL;
    return ptr;
};

struct node *insertion(struct node *root, int n)
{
    if(root==NULL)
        return newNode(n);

    if(n<=root->data)
        root->left=insertion(root->left,n);
    else
        root->right=insertion(root->right,n);

    return root;
};

int findMaxInPath(struct node *q, int x)
{
	struct node *p = q;
	int mx = -1;
	while(p->data != x)
	{
		if(p->data > x)
		{
			mx = max(mx, p->data);
			p = p->left;
		}
		else
		{
			mx = max(mx, p->data);
			p = p->right;
		}
	}
	return max(mx, x);
}
int findMax(struct node *p, int x, int y)
{
	//node *p = root;
	while((x < p->data and y < p->data) || (x > p->data and y > p->data))
	{
		if(x < p->data and y < p->data)
			p = p->left;
		else if(x > p->data and y > p->data)
			p = p->right;
	}
	return max(findMaxInPath(p, x), findMaxInPath(p, y));
}

int main()
{
    int n;cin>>n;
    int a[n];
    rep(i,n)
    {
        cin>>a[i];
    }
    struct node *root=NULL,*ptr;
    root=newNode(a[0]);
    ptr=root;
    repi(i,1,n)
    {
        insertion(ptr,a[i]);
    }
    int x,y;cin>>x>>y;
    cout<<findMax(root,x,y)<<endl;
    return 0;
}
