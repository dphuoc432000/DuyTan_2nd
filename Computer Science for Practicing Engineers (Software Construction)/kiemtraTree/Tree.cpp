#include<iostream>
#include<queue>
#include<fstream>
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
		int sonut(TNode *T)
		{
			if(T==NULL)
				return 0;
			else 
				return 1+sonut(T->left)+sonut(T->right);
		}
		TNode *chen(TNode *&T, int x)
		{
			if(T==NULL) 
				T=new TNode(x);
			else if(sonut(T->left)>sonut(T->right))
				T->right=chen(T->right,x);
			else 
				T->left=chen(T->left,x); 
			return T;
		}
		void docFile(){
			ifstream fi("TREE.INP");
			root = NULL;
			int x;
			while(!fi.eof()){
				fi >> x;
				chen(root,x);
			}
			fi.close();
		}
		void ghiFile(){
			ofstream fo("TREE.OUT");
			fo << "-Tong node: " << tongNode() << endl;
			fo << "-So node la: " << soNutLa() << endl;
			fo << "-Chieu cao: " << chieuCao() << endl;
			fo << "-So lon nhat: " << maxCay() << endl;
			fo << "-So node co mot con: " << soNodeMotCon() << endl;
			fo << "-Duyet chieu rong: ";
			queue<TNode*> Q;
			if(root != NULL)
				Q.push(root);
			else{
				fo << "cay RONG";
				return;
			} 
			while(!Q.empty()){
				TNode * x = Q.front();
				Q.pop();
				fo << x->data << " ";
				if(x->left != NULL)
					Q.push(x->left);
				if(x->right)
					Q.push(x->right);
			}
			cout << endl;
			fo.close();
		}
		int tongNode(TNode *& T){
			if(T == NULL)
				return 0;
			else
				return T->data + tongNode(T->left) + tongNode(T->right);
		}
		int tongNode(){
			tongNode(root);
		}
		int soNutLa(TNode *& T){
			if(T == NULL)
				return 0;
			else if(T->left == NULL && T->right == NULL)
				return 1;
			else
				return soNutLa(T->left) + soNutLa(T->right);
		}
		int soNutLa(){
			soNutLa(root);
		}
		int chieuCao(TNode *T){
			if(T == NULL)
				return 0;
			else
				return	1+ max(chieuCao(T->left), chieuCao(T->right));
		}
		int chieuCao(){
			chieuCao(root);
		}
		int maxCay(){
			queue <TNode *>Q;
			int max = root ->data;
			if(root != NULL){
				Q.push(root);
				while(!Q.empty()){
					TNode * p = Q.front();
					Q.pop();
					if(p->data >= max)
						max = p->data;
					if(p->left != NULL)
						Q.push(p->left);
					if(p->right!= NULL)
						Q.push(p->right);
				}
			}
			return max;
		}
		int soNodeMotCon(TNode *& T){
			if(T == NULL)
				return 0;
			else if((T->left == NULL && T->right!= NULL) || (T->left != NULL && T->right == NULL))
				return 1 + soNodeMotCon(T->right) + soNodeMotCon(T->left);
			else
				return soNodeMotCon(T->right) + soNodeMotCon(T->left);
		}
		int soNodeMotCon(){
			soNodeMotCon(root);
		}
};
main(){
	BST t;
	t.docFile();
	t.ghiFile();
}
