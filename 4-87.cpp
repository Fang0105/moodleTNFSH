#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
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


