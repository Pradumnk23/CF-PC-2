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
    lli y,k,n,cnt=0;
    cin>>y>>k>>n;
    if(n-y<=0)
        {cout<<-1;return 0;}
    else
    {
        for(lli i=k-y%k; i<=n-y; i+=k)
        {
            if((y+i)%k==0)
                {cnt=1;cout<<i<<" ";}
        }
        if(cnt==0)
            cout<<-1;
    }
}
/*
#import<iostream>
using namespace std;
int k,n,x,y;
main()
{
	cin>>y>>k>>n;
	x=k-y%k;
	if(x+y>n)cout<<-1;
	else for(;x+y<=n;x+=k)cout<<x<<' ';
}
*/
