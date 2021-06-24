#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class DList{
	struct DNode{
		string data;
		DNode *next, *prev;
	};
	DNode *head, *tail;
	public:
		DList(){
			head = NULL;
			tail = NULL;
		}
		void add(string x){
//			DNode *t = new DNode;
//			t->data = x;
//			t-> next = head;
//			t->prev = NULL;
//			if(head != NULL)
//				head->prev = t;
//			head = t;
			DNode * t = new DNode;
			t->data = x;
			t->next = NULL;
			t->prev = NULL;
			if(head == NULL)
				head = tail = t;
			else{
				tail->next = t;
				t->prev = tail;
				tail = t;
			}	
		}
		void nhap(){
			head = NULL;
			tail = NULL;
			int x;
			while(1){
				cout << "\n nhap x (<>0) them vao danh sach: " ;
				cin >> x;
				if(x==0)
					break;
				DNode * t = new DNode;
				t->data = x;
				t->next = NULL;
				t->prev = NULL;
				if(head == NULL)
					head = tail = t;
				else{
					tail->next = t;
					t->prev = tail;
					tail = t;
				}
			}
		}
		void print(){
			cout << "\n Noi dung danh sach: \n ====> ";
			DNode *p =head;
			while(p!= NULL){
				cout << p->data;
				if(p->next != NULL)
					cout << "<-->";
				else
					cout << "-->";
				p = p->next;
			}
			cout << "NULL\n";
		}
		void chenK(int x, int k){
			if(k < 1)
				cout << "\n Vi tri chen khong hop le!";
			else{
				if(k == 1){
					DNode *t = new DNode;
					t->data = x;
					t->prev  = NULL;
					t->next = head;
					head->prev = t;
					head = t;
				}
				else{
					DNode *p = head;
					int i = 1;
					while(i < k -1){
						p = p->next;
						i++;
					}
					DNode *q = p->next;
					DNode *t = new DNode;
					t->data = x;
					t->next = q;
					q->prev = t;
					t->prev = p;
					p->next = t;
				}
			}
		}
		void xoaK(int k){
			if(k < 1)
				cout << "\n Vi tri chen khong hop le!";
			else{
				int vt = 1;
				DNode *p = head;
				
				while(p!= NULL && vt < k){
					vt++;
					p = p->next;
				}
				if(p == NULL|| p->next == NULL)
					cout << "\nVi tri xoa khong hop le!";
				else{
					DNode *q = p->next;
					DNode *r = p->prev;
					r->next = q;
					q->prev = r;
					delete p;	
				}
			}
		}
		void xoaC() {
		    if(head == NULL) {
		        return;
		    }
		    tail = tail->prev;
		    tail->next = NULL;
		}
		void xoaD() {
		    if(head == NULL) {
		        return;
		    }
		    head = head->next;
		    head->prev = NULL;
		}
		void docFile(){
			ifstream read("LIST.inp");
			while(!read.eof()){
				string x= "";
				read >> x;
				bool checkTrung = false;
				DNode *p = head;
				while(p!=NULL){
					if(x == p->data ){
						checkTrung = true;
						break;
					}
					p = p->next;
				}
				if(checkTrung == false)
					add(x);
			}
			read.close();
		}
		void ghiFile(){
			ofstream write("LIST.out");
			DNode *p = head;
			while(p!=NULL){
				write << p->data << " 67";
				p = p->next;
			}
			write.close();
		}
};
main(){
	DList LL;
//	LL.add(1);
//	LL.add(3);
//	LL.add(5);
//	LL.add(2);
//	LL.nhap();
//	LL.xoaK(3);
	LL.docFile();
	LL.print();
	LL.ghiFile();
}
