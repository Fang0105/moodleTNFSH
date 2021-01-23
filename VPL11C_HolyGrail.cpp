#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		
		cout<<string(i,'.')<<string(2*(n-i)+1,'*')<<string(i,'.')<<endl;
	}


	return 0;
}

