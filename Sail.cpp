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
    lli t,sx,sy,ex,ey,ans;
    cin>>t>>sx>>sy>>ex>>ey;
    char c[t];
    for(lli i=0; i<t; i++){cin>>c[i];}
    for(lli i=0; i<t; i++)
    {
        if(c[i]=='E' && sx<ex)
            {ans=i;sx++;}
        else if(c[i]=='N' && sy<ey)
            {ans=i;sy++;}
        else if(c[i]=='S' && sy>ey)
            {ans=i;sy--;}
        else if(c[i]=='W' && sx>ex)
            {ans=i;sx--;}
    }
    if(sx==ex && sy==ey)
        cout<<ans+1<<endl;
    else
        cout<<-1<<endl;


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
    lli t,sx,sy,ex,ey,ans;
    cin>>t>>sx>>sy>>ex>>ey;
    char c;
    for(lli i=1; i<=t; i++)
    {
        cin>>c;
        if(c=='E' && sx<ex)
            {sx++;}
        else if(c=='N' && sy<ey)
            {sy++;}
        else if(c=='S' && sy>ey)
            {sy--;}
        else if(c=='W' && sx>ex)
            {sx--;}
        if(sx==ex && sy==ey)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
	return 0;
}
*/
