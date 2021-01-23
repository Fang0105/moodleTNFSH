#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	long long n,m;
	cin>>n>>m;
	if(n>m){
		swap(n,m);
	} 
	long long h = m-n+1;
	long long ans = (m+n)*h/2;
	cout<<ans;

	return 0;
}

