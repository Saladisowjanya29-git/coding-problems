#ifndef STACK_H
#define STACK_H
#include<iostream>
#define MAX 100
using namespace std;
struct stack{
	int st[MAX];
	int top = -1;
	
	bool is_full(){
		return top == MAX - 1;
	}
	
	void push(int n){
	    if(is_full){
	        cout << "Stack is overflowed.";
	    }
	    st[++top] = n;
	}
	
	void insert(int val){
		push(n);
	}
	
	bool is_empty(){
		return top = -1;
	}
	
	void pop(){
	    if(top == -1){
	        cout << "Stack is empty.";
	        return;
	    }
	    top--;
	}
	
	void display(){
	    if(top == -1){
	        cout << "Stack is empty." << " ";
	    }
		for(int i = 0; i <= top; i++){
	        cout << st[i] << " ";
	    }
		cout << endl;
	}
	
	void peek(){
	    if(top == -1){
	        cout << "Stack is empty.";
	        return;
	    }
	    cout << st[top];
	}
};
#endif
