/*
		*	Author:	Charles Randall
		*	Date:	04/04/2018
		*	Assignment:		Program	#5	- Binary Search Tree
		*	File:	Main.cpp
		*	Description: This file implements the methods from the binarySearchTree.h file
		*/

#include <iostream>
#include "binarySearchTree.h"
 using namespace std;
BinarySearchTree::BinarySearchTree() {                  //creates the empty root and declares the course
    course c;
    c.courseNumber=0;
    root=new node;
    root->data=c;

}
bool BinarySearchTree::empty() {
    if(root->data.courseNumber==0)
        return true;
    else
        return false;
}
void BinarySearchTree::Delete(ElementType x) {


}
void BinarySearchTree::DeleteAllOnes(node *p) {

}
void BinarySearchTree::Insert(ElementType x) {  //method checks to see if the node and following node is occupied and inserts data in a node
    node*p=root;
    node*q=p;

        while (q->data.courseNumber != 0) {                           //searches for a location to insert data
            q = p;
            if (x.courseNumber == p->data.courseNumber) {              //course equals a course in the tree
                x.counter++;
                break;
            }
            if (x.courseNumber < p->data.courseNumber) {              //course is less than the current course
                q=p->leftchild;
                q->data=x;
                break;
            } else {                                              
                q = p->rightchild;
                q->data=x;
                break;
            }
        }
        p = new node;                                         //attaches new node to the tree along with it NULL children
        p->data=x;
        p->leftchild = p->rightchild = NULL;

        if (empty()) {                                         //checks where to place the new node
            root = p;
            root->rightchild = new node;
            root->leftchild = new node;
        }
        else if (x.courseNumber < q->data.courseNumber) {               //place new node as a leftchild
            q->leftchild = p;
        } else {
            q->rightchild = p;                                   //places new node as a right child
        }

}

void BinarySearchTree::Display() {                   //using recursion to traverse through the tree inorder
    if(!empty())
    Display(root);
    else
        cout<<"class tree is empty please try again"<<endl;
}
void BinarySearchTree::Display(node*currentNode)
{
    if(currentNode!=NULL){
        Display(currentNode->leftchild);
        cout<<currentNode->data.courseNumber;
        Display(currentNode->rightchild);
    }
}
bool BinarySearchTree::IsThere(ElementType x) {

}
