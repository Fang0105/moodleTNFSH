#include <bits/stdc++.h>
using namespace std;

int main() {
	//std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	double n,m;
	cin>>n>>m;
	int y = m-n+1;
	for(int i=0;i<y;i++){
		double ans = n*9/5+32;
		cout<<(int)n<<"C="<<ans<<"F"<<endl;
		n++;
	}
	


	return 0;
}


