#include<bits/stdc++.h>
using namespace std;

int rec_fib(int n,int &k){
	k++;
	if(n==0) return 0;
	if(n==1) return 1;

	return rec_fib(n-1,k)+rec_fib(n-2,k);
}

int main(){

	int k=0;

	int n;
	cin>>n;


    cout<<"Answer of fibonacci : ";
	cout<<rec_fib(n,k)<<endl;

	cout<<"number of recurrsions calls : ";
	cout<<k<<endl;



}