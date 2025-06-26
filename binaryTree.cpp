//BinarySearchTree_0135

#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node class
    Node()
    {
        leftchild = nullptr; //Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;
    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        //This function searches the currentNode of the specified Node  as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                
            
        }
    }
}