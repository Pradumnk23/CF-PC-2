#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define ml                  map<<lli,lli>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)
#define MOD                 1000000007

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return gcd(B, A % B);
}

int main()
{
    fastio;
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    lli n;
    cin>>n;
    pl p[2*n];
    rep(i,0,2*n)
        {cin>>p[i].fi;p[i].se=i+1;}
    sort(p,p+2*n);
    for(lli i=0; i<n; i++)
    {
        if(p[2*i].fi!=p[2*i+1].fi)
        {
            cout<<-1;
            return 0;
        }
    }
    for(lli i=0; i<n; i++)
        cout<<p[2*i].se<<" "<<p[2*i+1].se<<endl;

    return 0;
}
/*
#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");

	int n;
	in>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<2*n;i++)
	{
	    int x;
	    in>>x;
	    v.push_back({x,i+1});
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
	    if(v[2*i].first!=v[2*i+1].first)
	    {
	        out<<"-1";
	        return 0;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    out<<v[2*i].second<<" "<<v[2*i+1].second<<"\n";
	}
	
	return 0;
}
*/
