#include <bits/stdc++.h>
using namespace std;

int main() {
	//std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
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

