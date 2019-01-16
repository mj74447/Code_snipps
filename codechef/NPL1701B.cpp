#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int t;
cin>>t;

while(t--){
	int k;
	cin>>k;
	int a[k];
	int count=0;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	for(int i=1;i<k-1;i++){
		if((a[i-1]>a[i]) && a[i]<a[i+1]){
			count++;
		}
	}
	cout<<count<<"\n";
}
return 0;
}
