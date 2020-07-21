#include <bits/stdc++.h>
using namespace std;
double dragon(double a,double b,double c){
	double p = (a+b+c)/2;
	double l = sqrt(p*(p-a)*(p-b)*(p-c));
	return l;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	//¡LI¢DI?e?J?e¢DXAu?A?a?¢G¡Âa|A¢DIprintfcMscanf
	double a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
	if(a+b<=c){
		cout<<"illegal"<<endl<<"unavailable"<<endl;
		return 0;
	}else{
		if(a*a+b*b>c*c){
			cout<<"acute"<<endl<<fixed<<setprecision(4)<<dragon(a,b,c)<<endl;
		}else if(a*a+b*b==c*c){
			cout<<"right"<<endl<<fixed<<setprecision(4)<<dragon(a,b,c)<<endl;
		}else{
			cout<<"obtuse"<<endl<<fixed<<setprecision(4)<<dragon(a,b,c)<<endl;
		}
	}




	return 0;
}

