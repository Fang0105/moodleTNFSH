#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string(n-i-1,'.');
		cout<<string(i+1,'*')<<endl;
	}


	return 0;
}


