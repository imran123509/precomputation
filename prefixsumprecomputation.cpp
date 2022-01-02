#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int fact[N];
int main(){
	fact[0]=fact[1]=1;
	for(int i=2; i<N; i++){
		fact[i]=fact[i-1]*1LL*i;
	}

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fact[n]<<endl;
	}
}
