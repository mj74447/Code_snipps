#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int t;
cin>>t;
while(t--){
	int x,y;
	cin>>x;
	cin>>y;
	int sum1=0,sum2=0;
	int a[x];
	int b[y];
	for(int i=0;i<x;i++){
		cin>>a[i];
		sum1=sum1+a[i];
	}
	
	for(int i=0;i<y;i++){
		cin>>b[i];
		sum2=sum2+b[i];
		
	}
	if(sum2>sum1){
		cout<<"Death"<<endl;
	}
	else{
		cout<<"Snow"<<endl;
	}
	
}
	return 0;
}
