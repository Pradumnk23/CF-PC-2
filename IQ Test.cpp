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
    char a[4][4];
    for(lli i=0; i<4; i++)
    {
        for(lli j=0; j<4; j++)
            cin>>a[i][j];
    }
    for(lli i=0;i<3;i++)
        for(lli j=0;j<3;j++)
        {
	        lli ans = (a[i][j]==a[i][j+1]) + (a[i][j]==a[i+1][j]) + (a[i][j]==a[i+1][j+1]);
            if(ans>=2||ans==0)
                return yes,0;
        }
	no;
    return 0;
}
