#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	int a=0,b=0,c=0,me;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(i==0){
			me = k;
		}else{
			if(k>me){
				a++;
			}else if(me==k){
				b++;
			}else{
				c++;
			}
		}
	}
	cout<<c<<endl<<b<<endl<<a<<endl;





	return 0;
}

