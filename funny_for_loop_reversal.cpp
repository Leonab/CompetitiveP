#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,s;
for(scanf("%d",a),s=0;s=s*10+(a%10),a/=10;printf("%d",s));
return 0;
}
