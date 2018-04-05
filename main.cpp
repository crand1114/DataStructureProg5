/*
		*	Author:	Charles Randall
		*	Date:	04/04/2018
		*	Assignment:		Program	#5	- Binary Search Tree
		*	File:	Main.cpp
		*	Description: This file implements the methods from the binarySearchTree.cpp file and is for user input
		*/
#include "binarySearchTree.h"
#include <iostream>
using namespace std;
int main() {
    BinarySearchTree BST;
    course course;

    int option=0;
    int input;
    course.counter=0;


    do{
        cout<<"Class selestion menu"<<endl;                        // the command prompt to inform user on what each number does and menu continues to run until user inputs 9
        cout<<"1. Insert class number onto tree"<<endl;
        cout<<"2. Display classes in order"<<endl;
        cout<<"3. Exit Program"<<endl;
        cout<<"Enter option number:";
        cin>>option;
        switch (option){
            case 1:                                                                     //user input class number
                cout<<"Enter class number"<<endl;
                cin>> input;
                course.courseNumber=input;
                BST.Insert(course);
                break;
            case 2:
                BST.Display();                                        //displays the class numbers inorder then deletes classes with less than 2 students
                break;
        }
    }while (option!=3);                                          //menu continues to run until user inputs 3 to exit the program
    return 0 ;


}