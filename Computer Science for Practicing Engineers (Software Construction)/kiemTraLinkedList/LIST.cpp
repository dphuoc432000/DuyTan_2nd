#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class  linkedList{
	struct Node{
		int data;
		Node * next;
	};
	Node *head;
	public:
		linkedList(){
			head = NULL;
		}
		void add(int x){
			Node *t = new Node;
			t->data = x;
			t->next = head;
			head =t;
		}
		void docFile(){
			ifstream read("LIST.inp");
			while(!read.eof()){
				int x;
				read >> x;
				add(x);
			}
			read.close();
		}
		void chanLe(){
			linkedList ll;
			linkedList rr;
			Node *p = head;
			while(p != NULL){
				if(p->data % 2 == 0)
					ll.add(p->data);
				else
					rr.add(p->data);
				p = p->next;
			}
						
		}
		void print(){
			cout << "\n Noi dung cua danh sach: \n";
			Node *p = head;
			while(p != NULL){
				cout << p->data << " --> ";
				p = p->next;
			}
			cout<< "NULL \n";
		}
		void ghiFile(){
			ofstream write("LIST.out");
			Node *p = head;
			while(p!=NULL){
				write << p->data << " ";
				p = p->next;
			}
			write << "\n" << tong();
			write << "\n" << giaTriThu5();
			write << "\n" << demSoNT();
			write << "\n" << getMax() << "\n";
			delete_Index_Dq(4);
			Node *q = head;
			while(q!=NULL){
				write << q->data << " ";
				q = q->next;
			}
			write.close();
		}
		int tong(){
			Node*p = head;
			int sum = 0;
			while(p!= NULL){
				sum += p->data;
				p= p->next;
			}
			return sum ;
		}
		int length(){
			int count = 0;
			Node*p = head;
			while(p!= NULL){
				count++;
				p= p->next;
			}
			return count;
		}
		int giaTriThu5(){
			if(length() < 5 )
				return -1;
			else{
				Node*p = head;
				int i = 1;
				while(i < 5){
					i++;
					p = p->next;
				}
				return p->data;
			}
		}
		bool isPrime(int x){
			if(x < 2)
				return false;
			else{
				if(x == 2)
					return true;
				else{
					for(int i = 2 ; i <= sqrt(x); i++)
						if(x % i == 0)
							return false;
					return true;
				}
			}
		}
		int demSoNT(){
			Node*p = head;
			int count= 0;
			while(p!= NULL){
				if(isPrime(p->data) == 1)
					count++;
				p= p->next;
			}
			return count;
		}
		int getMax(){
			int max = head->data;
			Node*p = head;
			while(p!= NULL){
				if(max <= p->data)
					max = p->data;
				p= p->next;
			}
			return max;
		}
		Node *delete_Index_Dq(Node *&L,int index){
			if(index < 1|| L == NULL){
				cout<<"\n list is empty\n";
			}else{
				if(index == 1){
					Node *q = L;
					L = L->next;
					delete q;
				}else {
					L->next = delete_Index_Dq(L->next, index - 1);
				}
			}
			return L;
		}
		void delete_Index_Dq(int index){
			head = delete_Index_Dq(head,index);
		}
		
};
main(){
	linkedList l;
	l.docFile();
	l.print();
	cout << l.tong();
	cout << l.length();
	cout << l.giaTriThu5();
	l.ghiFile();
	cout <<"\n" <<l.demSoNT();
	cout <<"\n" <<l.getMax();
	l.delete_Index_Dq(4);
	l.print();
	l.chanLe();
	
	
}
