#include <bits/stdc++.h>
using namespace std;

int main() {
	//std::ios_base::sync_with_stdio(false);
	//¨Ï¥Î¿é¤J¿é¥XÀu¤Æ«á¤£¯à¦A¥Îprintf©Mscanf
	int n;
	scanf("%d",&n);
	stack<char>st;
	for(int i=0;i<=n;i++){
		string str;
		getline(cin,str);
		if(str[0]=='w'){
			st.push(str[5]);
		}else if(str[0]=='t'){
			if(st.size()==0){
				cout<<"You're fired!"<<endl;
				return 0;
			}else{
				st.pop();
			}
		}
	}
	if(st.size()==0){
		cout<<"You're fired!"<<endl;
		return 0;
	}else{
		while(st.size()!=0){
			cout<<st.top();
			st.pop();
		}
	}
	cout<<endl;




	return 0;
}

