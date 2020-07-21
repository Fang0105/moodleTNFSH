#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		
		cout<<string(i,'.')<<string(2*(n-i)+1,'*')<<string(i,'.')<<endl;
	}


	return 0;
}


