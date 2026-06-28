#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue(int value){
	if (rear == size-1 )
	{
		cout<<"Queue overflow"<<endl;
		return;
	}
	if (front==-1)
	front++;
 rear++;
 queue[rear]=value;
}
void dequeue(){
	if (front ==-1 || front>rear){
		cout<<"Queue underflow"<<endl;
		return;
	}
	cout<<"Deleted element "<<queue[front]<<endl;
	front++;
	if (front > rear){
		front=-1;
		rear=-1;
	}
}
void display(){
	if (front ==-1)
	{
		cout<<"Queue is Empty"<<endl;
		return ;
	}
	cout<<"Queue elements";
	for (int i=front;i<=rear;i++){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}
int main(){
	enqueue(4);
	enqueue(6);
	enqueue(8);
    display();
    dequeue();
    display();
    return 0;
}
