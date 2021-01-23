#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string(n-i-1,'.');
		cout<<string(i+1,'*')<<endl;
	}


	return 0;
}

