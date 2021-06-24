#include <iostream>
#include <queue>
using namespace std;
class AVLTree{
	struct TNode{
		int data;
		TNode *left, *right;
		TNode(int x){
			data = x;
			left = right = NULL;
		}
		TNode(int x, TNode* ll, TNode* rr){
			data = x;
			left = ll;
			right = rr;
		}
	};
	TNode *root;
	public:
		int cao(TNode *T){
			if(T == NULL)
				return 0;
			else 
				return 1 + max(cao(T->left), cao(T->right));
		}
		TNode *chenx(TNode *&T, int x){
			if(T == NULL)
				T = new TNode(x);
			else if(x == T->data)
				cout << "Da co trong cay";
			else{
				if(x < T->data)
					T->left = chenx(T->left,x);
				else
					T->right = chenx(T->right,x);
				int h1 = cao(T->left), h2 = cao(T->right);
				if(h1 > h2+1){
					int h11 = cao(T->left->left);
					int h12 = cao(T->left->right);
					if(h11>h12)
						qL(T);
					else
						qLR(T);
				}
				else if(h2 > h1+ 1){
					int h22 = cao(T->right->right);
					int h21 = cao(T->right->left);
					if(h22 > h21)
						qR(T);
					else
						qRL(T);
				}
			}
			return T;
		}
		TNode *qL(TNode *&T){
			TNode *x = T;
			TNode *y = x->left;
			x->left = y->right;
			y->right = x;
			T = y;
			return T;
		}
		TNode *qLR(TNode *&T){
			TNode * x = T;
			TNode * y = x->left;
			TNode * z = y->right;
			y->right = z->left;
			x->left = z->right;
			z->left = y;
			z->right = x;
			T = z;
			return T;
		}
		TNode *qR(TNode *&T){
			TNode *x = T;
			TNode *y = x->right;
			x->right = y->left;
			y->left = x;
			T = y;
			return T;
		}
		TNode *qRL(TNode *&T){
			TNode *x = T;
			TNode *y = x->right;
			TNode *z = y->left;
			y->left = z->right;
			x->right = z->left;
			z->left = x;
			z->right = y;
			T = z;
			return T;
		}
		void chenx(int x){
			chenx(root, x);
		}
		void chieuRong(){
			queue<TNode*> Q;
			if(root != NULL){
				Q.push(root);
			}	
			else{
				cout << "Cay rong";
				return;
			}
			while(!Q.empty()){
				TNode * x = Q.front();
				Q.pop();
				cout << x->data << " ";
				if(x->left!= NULL)
					Q.push(x->left);
				if(x->right)
					Q.push(x->right);
			}
				
		}
		
};
main(){
	AVLTree a;
	a.chenx(20);
	a.chenx(37);
	a.chenx(3);
	a.chenx(34);
	a.chenx(36);
	a.chenx(10);
	a.chenx(5);
	a.chenx(40);
	a.chenx(50);
	a.chieuRong();
	cout << endl;
//
//	AVLTree a1;
//	a1.chenx(27);
//	a1.chenx(11);
//	a1.chenx(35);
//	a1.chenx(29);
//	a1.chenx(24);
//	a1.chenx(26);
//	a1.chenx(53);
//	a1.chenx(44);
//	a1.chenx(10);
//	a1.chenx(16);
//	a1.chenx(13);
//	a1.chieuRong();
//	
//	cout << endl << "cau b: ";
//	AVLTree b;
//	b.chenx(20);
//	b.chenx(10);
//	b.chenx(17);
//	b.chenx(41);
//	b.chenx(55);
//	b.chenx(5);
//	b.chenx(60);
//	b.chenx(72);
//	b.chenx(4);
//	b.chenx(1);
//	b.chenx(18);
//	b.chenx(27);
//	b.chenx(35);
//	b.chieuRong();

	AVLTree c;
	c.chenx(5);
	c.chenx(9);
	c.chenx(11);
	c.chenx(3);
	c.chenx(7);
	c.chenx(6);
	c.chenx(13);;
	c.chieuRong();
	
}

