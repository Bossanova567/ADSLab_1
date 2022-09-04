#include "Tree.h"


int main(){
    Node* start = new Node;
    start = NULL;
    CreateTree(start, 5, 1);
    ShowTree(start, 0);
    return 0;
}