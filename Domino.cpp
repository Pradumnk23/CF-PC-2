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
    lli n;
    cin>>n;
    lli x,y,s=0,sl=0,su=0;
    for(lli i=0; i<n; i++)
    {
        cin>>x>>y;
        su+=x;
        sl+=y;
        s+=((x%2)!=(y%2)); /* if( ( x % 2 ) != ( y % 2 ) )
                                 c++; */
    }
    if(su%2==0 &&sl%2==0)
        cout<<0<<endl;
    else if(s%2==0 && s>0) /* else if( c % 2 == 0 && c > 0)
                                    cout<<1; */
        cout<<1<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
