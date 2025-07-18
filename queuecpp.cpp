#include "queue.h"
int main(){
	queue q;
	q.enqueue(19);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(25);
	q.dequeue();
	q.peek();
	q.display();
}
