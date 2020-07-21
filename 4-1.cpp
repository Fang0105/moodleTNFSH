#include <bits/stdc++.h>
using namespace std;

int main() {
	//std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	int n,num;
	cin>>n>>num;
	if(n>45||n<=0){
		cout<<"Error";
		return 0;
	}
	for(int i=1;i<=n;i++){
		num++;
		printf("%d: %d\n",i,num);
	}
	
	
	


	return 0;
}


