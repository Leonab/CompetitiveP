#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;
// you may add more methods here

int maxDiameterSum(int nodes, int tree[511]) {

    int i,sum=0,root;
    vector<int> a;

    if(tree==NULL)
        return 0;
    root=tree[0];
    //a.push_back(root);
    if(nodes==2)
     {
         return root+tree[1];
     }
     else if(nodes==1)
     {
         return root;
     }

    for(i=nodes;i>2;i-=2)
    {
        int rightpar=i/2-1;
        int leftpar=i/2;
        if(tree[i-1]>tree[i])
           a.push_back(tree[i-1]);
        else
           a.push_back(tree[i]);
    }
    if(tree[1]!=NULL || tree[2]!=NULL)
    {
        if(tree[2]!=NULL)
            a.push_back(tree[2]);
        a.push_back(tree[1]);
    }
a.push_back(root);


    for( i=1;i<a.size();i++)
    {
        sum+=a[i];
    }


    return sum;
}

int main() {
    int T, N, A[511];
    int i;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        for(i=0;i<N;i++) {
            scanf("%d",&A[i]);
        }
        printf("%d\n",maxDiameterSum(N,A));
    }
    return 0;
}
