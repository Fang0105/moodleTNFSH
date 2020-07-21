#include <bits/stdc++.h>
using namespace std;


int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	long long hh[51];
	hh[0]=0;
	hh[1]=1;
	for(long long i=2;i<=50;i++){
		hh[i]=hh[i-1]+hh[i-2];
	}
	long long n;
	cin>>n;
	for(long long i=0;i<=n;i++){
		cout<<hh[i]<<" ";
	}
	





	return 0;
}


