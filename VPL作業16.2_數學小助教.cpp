#include <bits/stdc++.h>
using namespace std;

int main() {
	std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	cin>>n;
	string str;
	for(int r=0;r<n;r++){
		bool jk = true;
		cin>>str;
		int sum=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='('){
				sum++;
			}else if(str[i]==')'){
				sum--;	
			}
			if(sum<0){
				cout<<"NO"<<endl;
				if(r!=n-1){
					jk = false;
					break;
				}else{
					return 0;
				}
			}
		}
		if(sum==0){
			cout<<"YES"<<endl;
		}else{
			if(r==n-1 || jk==true){
				cout<<"NO"<<endl; 
			}
		}
	
	}
	



	return 0;
}

