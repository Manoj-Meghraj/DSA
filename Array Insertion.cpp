#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50};
	int n=5,value,pos;
	for (int i=0;i<n;i++){
	   cout<<arr[i]<<" ";
	}
	cout<<"\nEnter the value and choose the position for the value"<<endl;
	cin>>value>>pos;
	for (int i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=value;
	n++;
	cout<<"\n After insertion"<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}

