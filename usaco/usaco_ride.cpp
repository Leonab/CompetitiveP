/*
ID: leonabr1
PROG: ride
LANG: C++11
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    vector<int> c,d;
    fin >> a >> b;
    //cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        int index = a[i]-'A'+1;
        c.push_back(index);
    }
    for(int i=0;i<b.size();i++)
    {
        int index = b[i]-'A'+1;
        d.push_back(index);
    }
    int ans1=1,ans2=1;
    for(int i=0;i<c.size();i++)
    {
        ans1*=c[i];
    }
    for(int i=0;i<d.size();i++)
    {
        ans2*=d[i];
    }
    if((ans1%47)==(ans2%47))
        fout << "GO" << endl;
        //cout<< "GO"<<endl;
    else
        fout << "STAY" <<endl;
        //cout<<"STAY"<<endl;
    return 0;
}

/*
int
hash(char *s)
{
	int i, h;

	h = 1;
	for(i=0; s[i] && isalpha(s[i]); i++)
		h = ((s[i]-'A'+1)*h) % 47;
	return h;
}

void
main(void)
{
	FILE *in, *out;
	char comet[100], group[100];  /* bigger than necessary, room for newline

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	fgets(comet, sizeof comet, in);
	fgets(group, sizeof group, in);

	if(hash(comet) == hash(group))
		fprintf(out, "GO\n");
	else
		fprintf(out, "STAY\n");
	exit (0);
}*/
