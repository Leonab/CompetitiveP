#include<bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int (i)=0;(i)<(N);(i)++)
#define repi(i,j,N) for(int (i)=(j);(i)<(N);(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define ll long long

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

struct node {
    string data;
    node* next;
};

node* newNode(string a) {
    struct node* temp;
    temp->data = a;
    temp->next = NULL;
    return temp;
};

void insertion(struct node* ptr1, struct node* ptr2) {
    ptr1->next=ptr2;
}

int main()
{
    int n;cin>>n;
    node* root = newNode("/");
    rep(i,n-1) {
        string a="",b="";
        cin>>a>>b;
        node* ptra=newNode(a);
        node* ptrb=newNode(b);
        insertion(ptra,ptrb);
    }
    return 0;
}
