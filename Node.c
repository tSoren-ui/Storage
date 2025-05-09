#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	Node *left;
	Node *right;
}Node;



Node *sex(Node *parent){
	if (parent == NULL){
	make node(parent);
	return;
	}
	parent->left = makenode(parent);
	parent->right = makenode(parent);
}
Node *makenode(Node *parent){
	if (root != NULL){
		return;
	}
	Node *newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = NULL:
	newNode->right = NULL;
}
int main(void){
	Node *parent;
	sex(parent);
}         