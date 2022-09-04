#ifndef ADSLAB_1_TREE_H
#define ADSLAB_1_TREE_H

#include <iostream>

using namespace std;

struct Node
{
    datatype key; // Інформаційне поле (ключ) вузла
    Node* parent; // Вказівник на батьківський вузол
    Node* left; // Вказівник на лівого сина
    Node* right; // Вказівник на правого сина
}pNode, root;


#endif //ADSLAB_1_TREE_H
