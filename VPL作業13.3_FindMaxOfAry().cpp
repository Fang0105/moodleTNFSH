#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int max(int *k,int size){
	sort(k,k+size);
	return k[size-1];
}

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	cout<<max(num,n)<<endl;
	
  
	return 0;
}

