#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int i,j,k;
cin>>i;
cin>>j;
cin>>k;
int rslt;
if(i>=1){
	if(j>=1){
		if(k>=1){
			if(i<=j && i<=k){
				cout<<i<<"\n";
			}
			else if(j<=i && j<=k){
				cout<<j<<"\n";
			}
			else{
				cout<<k<<"\n";
			}
		}
	}
}
return 0;
}
