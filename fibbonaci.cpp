//fibbonaci 
#include<iostream>
using namespace std;
int fibbo(int n){
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	return fibbo(n-1)+fibbo(n-2);
}
int main(){
	int n;
	cout<<"Enter the no of terms";
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<fibbo(i)<< " ";
	}
	return 0;
}
