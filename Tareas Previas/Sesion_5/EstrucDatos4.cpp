// Arboles en C++

#include <iostream>
using namespace std;

// Se crea un arbol utilizando una estructura
struct Node {
	int data;
	struct Node *left, *right;  //Se crean las conexiones con el nodo izquierdo y el nodo derecho
	Node(int data) { 
		this->data = data;
		left = right = NULL; //Se realiza para indicar que en un inicio no posee nodos abajo
	}
};

// Preorder traversal el recorrido seria primero nodo raiz, luego todos los nodos a la izquierda y luego los nodos a la derecha
void preorderTraversal(struct Node* node) {
	if (node == NULL)
		return;

	cout << node->data << "->"; //Primero el nodo raiz
	preorderTraversal(node->left); //Luego los nodos a la izquierda
	preorderTraversal(node->right); //Luego los nodos a la derecha
}

// Postorder traversal el recorrido seria todos los nodos a la izquierda, luego todos los nodos a la derecha y finalmente el nodo raiz
void postorderTraversal(struct Node* node) {
	if (node == NULL)
		return;

	postorderTraversal(node->left);  //Primero los nodos a la izquierda
	postorderTraversal(node->right); //Luego los nodos a la derecha
	cout << node->data << "->"; //Luego el nodo raiz
}

// Inorder traversal el recorrido seria todos los nodos a la izquierda, luego el nodo raiz y finalmente los nodos a la derehca
void inorderTraversal(struct Node* node) {
	if (node == NULL)
		return;

	inorderTraversal(node->left); //Primero los nodos a la izquierda
	cout << node->data << "->"; //Luego el nodo raiz
	inorderTraversal(node->right); //Luego los nodos a la derecha
}

int main() {
    //Se asignan espacios de memoria a los nodos en el arbol y se agregan valores
	struct Node* root = new Node(1);
	root->left = new Node(12);
	root->right = new Node(9);
	root->left->left = new Node(5);
	root->left->right = new Node(6);

    //Se imprimen los valores en los nodos a los diferentes ordenes de recorrido
	cout << "Inorder traversal ";
	inorderTraversal(root);

    cout << "\nPreorder traversal ";
    preorderTraversal(root);

    cout << "\nPostorder traversal ";
    postorderTraversal(root);
}