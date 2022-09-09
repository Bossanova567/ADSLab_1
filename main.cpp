#include "Tree.h"


int main(){
    Node* start = new Node;
    CreateTree(start, 12, 1);
    ShowTree(start, 0);
    PrefixOrder(start,0);
    return 0;
}