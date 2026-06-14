#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50};
	int value,pos,n=5;
	cout<<"Before deletion"<<endl;
	for (int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n Enter the position at which you wish to delete the value in array"<<endl;
	cin>>pos;
	for (int i=pos;i<=n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"After deletion"<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

