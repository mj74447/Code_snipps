#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int a[26]={0};
	cin>>n;
	int b[6]={0};
	int c=2;
	int o=1;
	int d=1;
	int e=2;
	int h=1;
	int f=1;
	string s;
	cin>>s;
	int v;int flag=0; 
	for(int i=0;i<n;i++){
			int k =(s[i]-97);
			a[k]++;
	}
	for(int i=0;i<26;i++){
		if(a['c'-97]>0){
			b[0]=a['c'-97];
		}
		if(a['o'-97]>0){
			b[1]=a['o'-97];
			
		}
		if(a['d'-97]>0){
			b[2]=a['d'-97];
			
		}
		if(a['e'-97]>0){
			b[3]=a['e'-97];	
		}
	
		if(a['h'-97]>0){
			b[4]=a['h'-97];	
		}	
		
		if(a['f'-97]>0){
			b[5]=a['f'-97];	
		}	
	}
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+b[i];
	//	cout<<b[i];
	}
	//cout<<endl;
	int val = (sum/8);
	cout<<val<<endl;
	return 0;
}
