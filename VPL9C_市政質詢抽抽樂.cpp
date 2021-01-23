#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	int k[n];
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	for(int i=0;i<n;i++){
		if(k[i]==87){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;


	return 0;
}

