#include <iostream>
using namespace std;
class Queue{
	struct Node{
		int data;
		Node *next;
	};
	Node *head, *tail;
	public:
		CreateQ(){
			head = tail = NULL;
		}
		bool EmptyQ(){
			if(head == NULL)
				return true
			else
				return false;
		}
		void AddQ(int x){
			Node *t = new Node;
			t->data = x;
			t->next = NULL;
			if(head == NULL)
				head = tail = t;
			else{
				tail->next = t;
				tail = t;
			}
		}
		void RemoveQ(){
			int x = 0;
			if(head == NULL)
			cout << "\nHang doi rong!!!";
			else{
				x= head->data;
				Node *t = head;
				if(head->next == NULL)
					head = tail = NULL;
				else{
					head = head->next;
					delete t;
				}
					
			}
			return x;
		}
};
main(){
	
}
