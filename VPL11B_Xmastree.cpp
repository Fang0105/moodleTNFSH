#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"This is a Xmas tree."<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int k=0;k<2*i-1;k++){
			cout<<i;
		}
		cout<<endl;
	}
	for(int i=1;i<n;i++){
		cout<<string(n-1,' ');
		cout<<i<<endl;
	}


	return 0;
}

