#include "Tree.h"
Node* root = NULL;
void CreateTree(Node* pNode, int n, datatype data){ // n - кількість вузлів
    if (n != 0)
    {
        pNode = new Node;
        pNode->key = data;
        pNode->left = pNode->right = NULL;
        CreateTree(pNode->left, n/2, data);
        CreateTree(pNode->left, n-n/2-1, data);
    }
    else
        pNode = NULL;
}

void ShowTree(Node* pNode, int level){
    pNode = root;
    if (pNode != NULL){
        ShowTree(pNode->left, level + 1);
        cout << endl;
        if (pNode == root)
            cout << "Root->:  ";
        else
        {
            for (int i = 0;i < level;i++)
                cout << "       ";
        }
        cout << pNode->key;
        ShowTree(pNode->right, level + 1);
    }
}