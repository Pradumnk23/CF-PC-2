#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ok,m,a;
	cin>>n;
	while (n--){
		ok =0;
		cin>>m;
		while (m--){
			cin>>a;
			int t=sqrt(a);
			if (t*t!=a) ok=1;
		}
		if (ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
