#include "Tree.h"

void CreateTree(Node* pNode, int n, datatype data){ // n - кількість вузлів
    if (n > 0)
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
    if (pNode != NULL){
        ShowTree(pNode->left, level + 1);
        cout<<endl;
        for (int i = 0;i < level;i++)
            cout << " ";
        cout << pNode->key;
        ShowTree(pNode->right, level + 1);
    }
}
void PrefixOrder(Node* pNode, int level){
    if (pNode != NULL) {
        ShowTree(pNode, level);
        PrefixOrder(pNode->left, ++level);
        PrefixOrder(pNode->right, ++level);
    }
}
void PostfixOrder(Node* pNode, int level){
    if (pNode != NULL) {
        PostfixOrder(pNode->left, ++level);
        PostfixOrder(pNode->right, ++level);
        ShowTree(pNode, level);
    }
}
void InfixOrder(Node* pNode, int level){
    if (pNode != NULL) {
        InfixOrder(pNode->left, ++level);
        ShowTree(pNode, level);
        InfixOrder(pNode->right, ++level);
    }
}