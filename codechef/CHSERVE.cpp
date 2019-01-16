
#include <iostream>

using namespace std;

int main()
{
long int t;
cin>>t;
while(t--){
   long int p1,p2,k;
   cin>>p1>>p2>>k;
   long int sum = p1+p2;
   long int d=sum/k;
   if(d%2==0){
       cout<<"CHEF"<<endl;
   }
   else{
       cout<<"COOK"<<endl;
   }
}
    return 0;
}
