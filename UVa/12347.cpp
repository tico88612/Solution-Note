#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
	int data;
	Node *left,*right;
}Node;

Node* insert(Node *head,int enter){
	if(head==NULL){
		Node *w=new Node;
		w->data=enter;
		w->left=NULL;
        w->right=NULL;
		head=w;
	}
	else if(head->data>enter){
		head->left=insert(head->left,enter);
	}
	else{
		head->right=insert(head->right,enter);
	}
	return head;
}
void postorder(Node* head){
	if(head->left)
		postorder(head->left);
	if(head->right)
		postorder(head->right);
	printf("%d\n",head->data);
}
int main(){
	Node *NOW=NULL;
	int enter;
	while(cin>>enter) {
	    NOW=insert(NOW,enter);
	}
	postorder(NOW);
	return 0;
}