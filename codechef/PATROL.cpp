#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int t,n;
	cin>>t;
  long long int u,v,x;
	while(t--){
	cin>>u>>v>>x;
	  double total;
	total = u+v;
  double net = double(x)/(total);
	printf("%.10f\n",net);
	} 
	return 0;
	}