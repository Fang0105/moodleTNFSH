#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n,m;
	cin>>n>>m;
	bool ab[m+1];
	for(int i=1;i<=m;i++){
		int k;
		cin>>k;
		ab[k]=true;
	}	
	for(int i=1;i<=n;i++){
		if(ab[i]==false){
			cout<<i<<" ";
		}
	}
	cout<<endl;





	return 0;
}

