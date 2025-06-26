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
                currentNode = currentNode->rightchild;
                
            
        }
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        //step 1: Allocate memory for the new node
        Node *newNode = new Node();

        //Step 2: Assign value to the data field of new node
        newNode->info = x;

        //Step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;
        
        //Step 4: Locate the node which will be the parent of the  node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //Step 5: If parent is NULL (Tree is empty)
        if (parent == nullptr)
        {
            //5a: Mark the new node as ROOT
            ROOT = newNode;

            //5b: Exit
            return;
        }

        //Step 6: If the value in the data field of new node  is less than that of parent
        if (x < parent->info)
        {
            //6a: Make the left child of parent point to the new node
            parent->leftchild = newNode;
        }
    }
}
