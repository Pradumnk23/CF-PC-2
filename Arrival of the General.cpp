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
    lli n,cnt1=0,cnt2=0;
    cin>>n;
    lli a[n],b[n];
    fn cin>>a[i];
    fn{b[i]=a[i];}
    sort(b, b + n, greater<lli>());
    for(lli i=0; i<n; i++)
    {
        if(a[i]==b[0]){break;}
        else{cnt1++;}
    }
    for(lli i=n-1; i>=0; i--){if(a[i]==b[n-1]){break;}else{cnt2++;}}
    if(cnt1+cnt2>=n)cout<<cnt1+cnt2-1<<endl;
    else{cout<<cnt1+cnt2;}
    return 0;
}
