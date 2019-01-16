#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long int t;
	cin>>t;
	while(t--){
		long long int k,l;
		cin>>k;
		cin>>l;
		long long int a[k];
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		long long int cake=0;
		long long int hard=0;
		long long int p_2 = (int)(l/2);
		long long int p_10 = (int)(l/10);
		for(long long int i=0;i<k;i++){
			if(a[i]>=p_2){
			cake++;
			}
			if(a[i]<=p_10){
				hard++;
			}
		}
		
		if(cake==1 && hard==2){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	
	return 0;
}
