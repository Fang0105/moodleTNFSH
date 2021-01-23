#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	int max = 0,min = 10000,sum = 0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(k>max){
			max = k;
		}
		if(k<min){
			min = k;
		}
		sum+=k;
	}
	cout<<sum<<endl<<sum/n<<endl<<max<<endl<<min<<endl;
	





	return 0;
}

