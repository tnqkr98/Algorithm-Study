#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct node{
	char value;
	struct node *left;
	struct node *right;
} Node;
Node *element;

void inorder(Node* tree){
	if (tree == NULL) return;
	inorder(tree->left);
	cout << tree->value;
	inorder(tree->right);
}

void preorder(Node* tree) {
	if (tree == NULL) return;
	cout << tree->value;
	preorder(tree->left);
	preorder(tree->right);
}

void postorder(Node * tree) {
	if (tree == NULL) return;
	postorder(tree->left);
	postorder(tree->right);
	cout << tree->value;
}

int main() {
	int n;
	char t, c1, c2;
	cin >> n;
	element = new Node[n];
	for (int i = 0; i < n; i++) {
		element[i].value = 'A' + i;
		element[i].left = NULL;
		element[i].right = NULL;
	}

	for (int i = 0; i < n; i++) {
		cin >> t >> c1 >> c2;
		if (c1 != '.')
			element[t - 'A'].left = &element[c1 - 'A'];
		if (c2 != '.')
			element[t - 'A'].right = &element[c2 - 'A'];
	}
	preorder(&element[0]); cout << endl;
	inorder(&element[0]); cout << endl;
	postorder(&element[0]);
	return 0;
}