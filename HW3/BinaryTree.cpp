#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    cout << "20211522 박상은" << endl;
    typedef BinaryTree<char> charTree;
    typedef charTree* charTreePtr;

    charTreePtr bt1(new charTree);

    bt1->insert('G');

    bt1->left()->insert('E');
    bt1->right()->insert('F');

    bt1->left()->left()->insert('A');
    bt1->left()->right()->insert('B');
    bt1->right()->left()->insert('C');
    bt1->right()->right()->insert('D');

    cout << "Root contains: " << bt1->getData() << endl;
    cout << "Left and Right subtree root: " << bt1->left()->getData() << " "<< bt1->right()->getData() << endl;
    cout << "Leaf Node (->순서대로->) " << bt1->left()->left()->getData() << " " << bt1->left()->right()->getData()<<" "
        <<bt1->right()->left()->getData()<<" "<< bt1->right()->right()->getData();
}