#include<iostream>
#include<queue>
using namespace std;

class BinaryTree{
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
		void taoCayT1(){
			TNode *a = new TNode(10, new TNode(8), new TNode(12));
			TNode *b = new TNode(20, new TNode(16), new TNode(25));
			root = new TNode(15, a, b);
		}
		void taoCayT2(){
//			TNode * a = new TNode(7, new TNode(2), new TNode(6, new TNode(5), new TNode(11)));
//			TNode *b = new TNode(5,NULL, new TNode(9, new TNode(4), NULL));
//			root = new TNode(2, a, b);
			
			//Thay viet
			TNode *a = new TNode(6, new TNode(5), new TNode(11));
			TNode *b = new TNode(7, new TNode(2), a);
			TNode *c = new TNode(5,NULL, new TNode(9, new TNode(4),NULL));
			root = new TNode(2, b, c);
		}
//		void duyetCay(){
//			
//		}
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
		
	
};
main(){
	BinaryTree T;
	T.taoCayT2();
	T.chieuRong();
}
