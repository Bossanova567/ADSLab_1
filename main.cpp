#include "Tree.h"


int main(){
    Node* start = NULL;
    int choice;
    cout << "Menu" << endl;
    cout << "1. Create a Binary Tree." << endl;
    cout << "2. Show the Binary Tree." << endl;
    cout << "3. Perform a PrefixOrder traversal." << endl;
    cout << "4. Perform a PostfixOrder traversal." << endl;
    cout << "5. Perform an InfixOrder traversal." << endl;
    cout << "0. Quit." << endl;
    label1:
    cout << endl;
    cout << "Your choice:";
    cin >> choice;
    if (choice == 0 || choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5) {
        switch (choice) {
            case 0:
                return 0;
            case 1:
                int n; // n - кількість вузлів
                cout << "Enter the number of nodes:";
                cin >> n;
                start = CreateTree(n, 1);
                break;
            case 2:
                if (start){
                    ShowTree(start, 0);
                }
                else {
                    cout << "You didn't create a Tree." << endl;
                }
                break;
            case 3:
                if (start != NULL){
                    PrefixOrder(start, 0);
                }
                else {
                    cout << "You didn't create a Tree." << endl;
                }
                break;
            case 4:
                if (start != NULL){
                    PostfixOrder(start, 0);
                }
                else {
                    cout << "You didn't create a Tree." << endl;
                }
                break;
            case 5:
                if (start != NULL){
                    InfixOrder(start, 0);
                }
                else {
                    cout << "You didn't create a Tree." << endl;
                }
                break;
        }
        goto label1;
    }
    else {
        cout << "You haven't chosen any of the available options. Please, try again." << endl;
        goto label1;
    }
}