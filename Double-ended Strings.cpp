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
bool isSquare(int x)
{
    int y=sqrt(x);
    return y*y==x;
}
int main()
{
    test()
    {
        string a,b;
        cin>>a>>b;
        lli maxm=0;
        for (lli len = 1; len <= min(a.length(),b.length()); len++)
        {
            for (lli i = 0; i + len <= a.length(); i++)
            {
                for (lli j = 0; j + len <= b.length(); j++)
                {
                    if (a.substr(i, len) == b.substr(j, len))
                        maxm= max(maxm, len);
                }
            }
        }
        cout<<a.length()+b.length()-2*maxm<<endl;
    }
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int solve(){
   string a; cin>>a;
   string b; cin>>b;
   int ans=0;
   for(int i=0;i<b.length();i++){
      for(int j=1;j<=b.length()-i;j++){
         int check=a.find(b.substr(i,j));
         if(check>=0)ans=max(ans,j);
      }
   }
   cout<<a.length()+b.length()-2*ans<<endl;
}
int main(){
   int t; cin>>t;
   while(t--){
      solve();
   }
}
*/
