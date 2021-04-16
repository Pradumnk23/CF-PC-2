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
    test()
    {
        lli n,o=0,e=0;
        cin>>n;
        lli a[n];
        vl vo;
        vl ve;
        for(lli i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
                vo.pb(a[i]);
            else
                ve.pb(a[i]);
        }
        for(lli i=0; i<vo.size();i++)
            cout<<vo[i]<<" ";
        for(lli i=0; i<ve.size();i++)
            cout<<ve[i]<<" ";
        cout<<endl;
    }
    return 0;
}
