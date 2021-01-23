#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	for(int i=n-1;i>=0;i--){
		cout<<m[i]<<" ";
	}
	cout<<endl;





	return 0;
}

