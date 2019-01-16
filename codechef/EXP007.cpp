#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int func(string a,string b){
	string op = a.append(b);
	string po = b.append(a);
	return op.compare(po) > 0 ? 1: 0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	int k;
	cin>>k;
	vector <int> :: iterator i;
	vector <string> a;
	string val;
	for(int i=0;i<k;i++){
		cin>>val;
		a.push_back(val);
	}
/*	for(int j=0;j<a.size();j++){
		cout<<a[j]<<endl;
	}*/
	sort(a.begin(),a.end(), func);
	for(int i=0;i<a.size();i++){
		cout<<a[i];
	}cout<<endl;
	}
	return 0;
}
