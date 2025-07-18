#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

#define MAX 100

struct queue{
int queue[MAX];
int rear=-1,front=-1;
void enqueue(int val){
	if(rear==MAX-1) cout<<" queue is overflown\n";
	else if(rear==-1&&front==-1){
		rear++;
		front++;
		queue[rear]=val;
	}
	else queue[++rear]=val;
}
void dequeue(){
	if(rear==-1&&front==-1){
	cout<<" queue is empty\n";
	}
	else if(rear==front){
		rear=front=-1;
	}
	else ++front;
}
 void peek (){
 	if( rear == -1) cout << " queue is empty\n";
 	else{
 	cout << "peek element is :"
 	cout << queue[rear];
 }
 }
 void display(){
	if(rear==-1&&front==-1){
		cout<<"queue is empty\n";
	}
	cout<<" queue elements are :";
	for(int i=front;i<rear+1;i++){
	cout<<queue[i]<<" ";
	}
}
	
};

#endif
