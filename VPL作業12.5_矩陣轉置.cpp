#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n,m;
	cin>>n>>m;
	int k[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>k[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<k[j][i]<<" ";
		}
		cout<<endl;
	}




	return 0;
}

