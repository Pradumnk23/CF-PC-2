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
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define ml                  map<<lli,lli>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define lld                  long double
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
#define mod                 1000000007

int main()
{
    fastio;
    test()
    {
        lli n,k,d, minm=INT_MAX;
        cin>>n>>k>>d;
        lli a[n];
        fn cin>>a[i];
        for(lli i=0; i<=n-d; i++)
        {
            sl s;
            for(lli j=i; j<i+d; j++)
            {
                s.insert(a[j]);
            }
            lli sizes=s.size();
            minm=min(sizes,minm);
            s.clear();

        }
        cout<<minm<<endl;
    }
    return 0;
}
