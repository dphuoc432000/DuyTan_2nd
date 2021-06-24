#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

class Stack{
	struct Node{
		int data;
		Node *next;
	};
	Node *top;
	public:
		CreateS(){
			top = NULL;
		}
		bool EmptyS(){
			if(top==NULL)
				return true;
			else
				return false;
		}
		int PopS(){
			int x = 0;
			if(top != NULL){
				Node *t = top;
				x = top->data;
				top = top->next;
				delete t;
			}
			else
				cout << "\nNgan xep rong!!!";
			return x;
		}
		void PushS(int x){
			Node *t = new Node;
			t->data = x;
			t->next =top;
			top = t;
		}
		void nhap(){
			CreateS();
			int x;
			while(1){
				cout << "Nhap so (<>0) de them vao ngan xep: ";
				cin >> x;
				if(x==0)
					break;
				PushS(x);
			}
		}
		void xuat(){
			Stack t;
			t.CreateS();
			cout << "\n Noi dung ngan xep: ";
			while(!this->EmptyS()){
				int x  = this->PopS();
				cout << x << " " ;
				t.PushS(x);
			}
			while(!t.EmptyS())
				this->PushS(t.PopS());
		}
		bool kiemTra(string t){
			stack <char>S; // su dung stack co san trong C++
			for(int i = 0; i < t.length(); i++)
				if(t[i] == '(')
					S.push(t[i]);
				else if(t[i] == ')'){
					if(!S.empty())
						S.pop();
					else
						return false;
				}
				else{
					cout << "\nChuoi chua ky tu khong hop le!";
					return false;
				}
			if(S.empty())
				return true;
			else
				return false;
		}
};
main(){
	Stack S;
//	S.CreateS();
//	S.PushS(5); 
//	S.PushS(6);
//	S.PushS(7);
//	S.PushS(8);
//	S.PushS(9);
	S.nhap();
	S.xuat();
//	Stack s;
//	cout << s.kiemTra("((()))()()");
	
}
