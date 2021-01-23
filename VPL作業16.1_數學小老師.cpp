#include <bits/stdc++.h>
using namespace std;



int main(){
	string str;
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
			return 0;
		}
	}
	if(sum==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl; 
	}
	










return 0;
}

