#include<iostream>
#include<queue>
using namespace std;
class BST{
	struct TNode{
		int data;
		TNode *left, *right;
		TNode(int x){
			data = x;
			left = right = NULL;
		}
		TNode(int x, TNode *ll, TNode *rr){
			data = x;
			left = ll;
			right = rr;
		}
	};
	TNode *root;
	public:
		TNode* chenx(TNode *&T, int x){
			if(T == NULL)
				T = new TNode(x);
			else if(T->data == x)
				cout << "Da ton tai trong cay. ";
			else if(T->data < x)
				T->right = chenx(T->right,x);
			else
				T->left = chenx(T->left,x);
			return T;
		}
		void chenx(int x){
			root = chenx(root,x);
		}
		void taoCayBST(){
			root = NULL;
			int x;
			while(1){
				cout << "Nhap x: ";
				cin >> x;
				if(x == 0)
					break;
				chenx(x);
			}
		}
		void chieuRong(){
			queue<TNode*> Q;
			if(root != NULL)
				Q.push(root);
			else{
				cout << "cay RONG";
				return;
			} 
			while(!Q.empty()){
				TNode * x = Q.front();
				Q.pop();
				cout << x->data << " ";
				if(x->left != NULL)
					Q.push(x->left);
				if(x->right)
					Q.push(x->right);
			}
		}
		int getmax(){
			if(root == NULL)
				return 0;
			else{
				TNode *p =root;
				while(p->right!= NULL)
					p = p->right;
				return p->data;
			}
		}
		int getMin(){
			if(root == NULL)
				return 0;
			else{
				TNode *p =root;
				while(p->left!= NULL)
					p = p->left;
				return p->data;
			}
		}
		TNode *timx(TNode *&T, int x){
			if(T==NULL)
				cout << "Khong xoa!";
			else{
				if(T->data > x)
					T->left = timx(T->left,x);
				else if(T->data < x)
					T->right = timx(T->right, x);
				else{
					if(T->left == NULL && T->right == NULL){
						TNode * q = T;
						T = NULL;
						delete q;
					}
					else if(T->left ==NULL){
						TNode * q = T;
						T= T->right;
						delete q;
					}
					else if(T->right == NULL){
						TNode *q = T;
						T = T->left;
						delete q;
					}
					else{
						TNode *p = T->left;
						while(p->right != NULL)
							p= p->right;
						T->data = p->data;
						T->left = timx(T->left, p->data);
					}
				}		
			}
			return T;
		}
		void timx(int x){
			root = timx(root, x);
		}
		
};
main(){
	BST T;
	T.taoCayBST();
	T.chieuRong();
	cout << T.getmax();
	cout << timx(5);
}
