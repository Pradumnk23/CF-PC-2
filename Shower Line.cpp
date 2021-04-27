#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int g[6][6];

int main()
{
    int n = 5;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            cin >> g[i][j];
    int p[6], pans[6], ans = -1, tmp;
    for(int i = 0 ; i < n ; ++i)
        p[i] = i;
    
    do
    {
        //01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        //234
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //34
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        if(tmp > ans)
        {
            ans = tmp;
            for(int i = 0 ; i < n ; ++i)
                pans[i] = p[i];
        }
    }
    while(next_permutation(p, p+n));
    
    cout << ans << "\n";
    return 0;
}
/*
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
    lli a[5][5], max=-1, ans;
    for(lli i=0; i<5; i++)
    {
        for(lli j=0; j<5; j++)
            cin>>a[i][j];
    }
    lli p[5]={0,1,2,3,4};
    do
    {
        ans=a[p[0]][p[1]] + a[p[1]][p[0]] + a[p[1]][p[2]] + a[p[2]][p[1]] + 2*(a[p[2]][p[3]] + a[p[3]][p[2]] + a[p[3]][p[4]] + a[p[4]][p[3]]);
        if(ans>max)
            max=ans;
    }
    while(next_permutation(p,p+5));
    cout<<max<<endl;
	return 0;
}
*/
