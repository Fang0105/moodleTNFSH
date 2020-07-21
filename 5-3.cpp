#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	int n;
	cin>>n;
	for(int i=0,p=1,f=n;i<n;i++,p++,f--){
		for(int j=0;j<n-i-1;j++){
			cout<<0;
		}
		for(int k=p;k>0;k--){
			cout<<f;
		}
		cout<<endl;
	}





	return 0;
}


