#include <iostream>
using namespace std;

class Slist{ //single List
	struct Node{
		int data;
		Node * next;
	};
	Node *head;
	public:
		Slist(){
			head = NULL;
		}
		void add(int x){
//			Node *t = new Node;
//			t->data = x;
//			t->next = head;
//			head =t;
			Node *t = new Node;
			t->data = x;
			t->next = NULL;
			if(head == NULL){
				head = t;
			}
			else{
				Node *p = head;
				while(p->next != NULL)
					p = p->next;
				p->next = t;
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
		void nhap(){// nhap den so 0 thi dung
			head = NULL;
			Node * cuoi = NULL; int x;
			while(1){
				cout << "\n nhap  x(<>0) them vao danh sach: ";
				cin >> x;
				if(x == 0)
					break;
				Node *t = new Node;
				t->data = x;
				t->next =NULL;
				if(head == NULL) 
					head = cuoi = t;
				else{
					cuoi->next = t;
					cuoi = t;
				}
			}
		}
		int tong(){
			int k=0;
			Node *p= head;
			while(p!=NULL) {
				k += p->data; p=p->next;
			}
			return k;
		}
		void chen(int x){
			if(head == NULL){
				head = new Node;
				head->data = x;
				head->next = NULL;
			}
			else{
				// dem den node cuoi
				Node *p = head;
				while(p-> next != NULL)
				p = p->next;
				// noi node t sau p
				Node *t = new Node;
				t->data = x;
				t->next = NULL;
				p->next = t;
				
			}
		}
		void chenk(int x, int k){
			if(k < 1)
				cout << "\n Vi tri chen khong hop le!";
			else{
				if(k == 1){
					Node *t = new Node;
					t->data = x;
					t-> next = head;
					head = t;
				}
				else{
					Node *p = head;
					int i = 1; //  i: vi tri chay, k -1: vi tri truoc vi tri k can chen
					while (i < k-1 && p!= NULL){
						p = p-> next;
						i++;
					}
					if(p == NULL)
						cout << "\nVi tri chen khong hop le!";
					else{
						Node *t = new Node;
						t->data = x;
						t->next = p->next;
						p->next = t;
						cout << "\nDa chen xong node tai vi tr k!";
					}
				}
			}
		}
		void xoaD(){
			if(head == NULL)
				cout << "\nDanh sach rong, khong xoa duoc!";
			else{
				Node *q = head;
				head = head->next;
				delete q;
			}
		}
		void xoaC(){
			if(head == NULL)
				cout << "\nDanh sach rong, khong xoa duoc!";
			else{
				Node *p = head;
				while(p->next != NULL)
					p = p->next;
				Node *r = head;
				while(r-> next != p)
					r = r->next;
				r->next = NULL;
				delete p;
			}
		}
		void xoak(int k){
			if(k < 1|| head == NULL)
				cout << "\nDanh sach rong, xoa khong duoc!";
			else{
				int i = 1;
				Node *p = head;
				while(p!= NULL && i < k){
					vt++;
					p = p->next;
				}
				if(p == head)
					xoaD();
				else if(p!=NULL && p->next == NULL)
					xoaC();
				else if(p == NULL|| p->next == NULL)
					cout << "\nVi tri xoa khong hop le!";
				else{
					Node *q = p->next;
					p->next = q->next;
					delete q;
				}
			}	
		}
		Node *chenK_dq(Node *&L, int x, int k){
			if(k <1 ||(L == NULL && k > 1)){
				cout << "\nVi tri chen khong hop le!";
				return L;
			}
			else{
				if(k == 1){
					Node *t = new Node;
					t->data = x;
					t->next = L;
					return t;
				}
				else{
					L->next = chenK_dq(L->next, x, k -1);
					return L;
				}
			}
		}
		void chenK_dq(int x, int k){
			head = chenK_dq(head,x,k);
		}
		Node *xoaK_dq(Node *&L, int k){
			if(L == NULL ||  k < 1)
				cout << "\nKhong xoa duoc";
			else{
				if( k== 1){
					Node *q =L;
					L = L->next;
					delete q;
				}
				else{
					L->next = xoaK_dq(L->next, k-1);
				}
			}
			return L;
		}
		void reverse(){
			Node *p = head,*t = NULL;
			while(p!= NULL){
				Node *q = p->next;
				p->next = t;
				t = p;
				p = q;
			}
			head = t;
		}
		void reverseIJ(int i, int j){
			Node *prevI = NULL;
			Node *currI = head;
			int vtI = 1;
			while(vtI < i && currI != NULL){
				prevI = currI;
				currI = currI->next;
				vtI++;
			}
			
			Node *prevJ = NULL;
			Node *currJ = head;
			int vtJ = 1;
			while(vtJ < j && currJ != NULL){
				prevJ = currJ;
				currJ = currJ->next;
				vtJ++;
			}
			if(currI == NULL || currJ == NULL)
				cout << "\nMot trong 2 vi tri bang null, nen khong the hoan vi";
			if(prevI != NULL )
				prevI->next = currJ;
			else 
				head = currJ;
				
			if(prevJ != NULL)
				prevJ->next = currI;
			else
				head = currI;
			
			Node *temp = currJ->next;
			currJ->next = currI->next;
			currI->next = temp;
		}
		void removeOddNumbers(){
			if(head == NULL)
				cout << "\nDanh sach rong!";
			else{
				Node *p = head;
				Node *r =p;
				p = p->next;
				while(p->next != NULL){
					if(p->data % 2 != 0){
						r->next = p->next;
						delete p;
						p = r;
					}
					else
						r = p;	
					p = p->next;
					cout << "Err";
				}
				if(head->data % 2 != 0)
					xoaD();
				if(p->next == NULL && p->data % 2 != 0)
					xoaC();
			}
			print();
		}
//		void hoanVi(Node *x, Node *y){
//			Node *temp = y->next;
//			y->next = x->next;
//			x->next = temp;	
//		}
		void hoanVi(int &x, int &y){
			int temp = y;
			y = x;
			x = temp;
		}
		void ascending(){
			Node *tail = head;
			while(tail->next != NULL)
				tail = tail->next;
				
//			int vtI = 1, vtJ = 2;
			for(Node * i = head; i != tail; i = i->next){
//				cout << "i: " << i->data << endl;
				for(Node * j = i->next; j != NULL; j = j->next) {
//					cout << "j: " << j->data;
//					if(i->data > j->data)
//						reverseIJ(vtI,vtJ);
//					vtJ++;
//					print();
//					cout<< endl;
					if(i->data > j->data)
						hoanVi(i->data , j->data);
				}
//				vtI++;
//				cout << "i sau: " << vtI<< endl;
			}
				
			print();
		}
		
		void tachDsChanLe(){
			Slist dsChan, dsLe;
			Node *p = head;
			while(p != NULL){
				if(p->data % 2 == 0)
					dsChan.add(p->data);
				else
					dsLe.add(p->data);
				p = p->next;
			}
			cout << "\nDanh sach chan: "; dsChan.print();
			cout<< "\nDanh sach le: "; dsLe.print();
		}
		void kiemTraDSChuaQua3SoLe(){
			Node*p = head;
			int count= 0;
			while(p!= NULL){
				if(p->data % 2 != 0)
					count ++;
				p = p->next;
			}
			if(count <=3)
				cout << "\nDanh sach khong qua 3 so le.";
			else
				cout << "\nDanh sach da qua 3 so le.";
		}
};
main(){
	Slist L;
//	L.add(1);
//	L.add(3);
//	L.add(5);
//	L.add(7);
	L.nhap();
	L.print();
//	cout << L.tong();
////	//L.chen(10);
////	L.print();
////	//L.chenk(3,4);
////	L.print();
////	L.xoaC();
	L.xoak(3);
	L.print();
//	//L.chenK_dq(5,2);
//	L.print();
	//L.reverse();
	//L.reverseIJ(1,1);
	//L.print();
//	L.removeOddNumbers();
//	L.print();
//	L.ascending();
//	L.tachDsChanLe();
//	L.kiemTraDSChuaQua3SoLe();
//	L.sort();
}
