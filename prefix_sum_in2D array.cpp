#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int ar[N][N];
int pr[N][N];
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>ar[i][j];
			pr[i][j]=ar[i][j]+pr[i-1][j]+pr[i][j-1]-pr[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		
		cout<<pr[c][d]-pr[a-1][d]-pr[c][b-1]+pr[a-1][b-1]<<endl;
	}
	}
