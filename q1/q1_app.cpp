#include "AvlTree.h"
#include "flags.h"
#include "AvlTree.cpp"
#include <iostream>

using namespace std;

// Testing program
int main() {
    AvlTree<int> t;

    /*
     * Test 0
     */
//    cout << "Assignment 04, Question 01 Nick Voss: " << endl;
//    cout << "Test0: " << endl;
//
//    for (int num : {50, 30, 40, 35, 32, 40, 45, 48, 46, 30, 47}) {
//        t.insert(num);
//    }
//
//    cout << "The built AVL tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;
//
//    t.remove(48);
//    cout << "The updated AVL tree is (preorder traversal):" << endl;
//    t.printTree();
//    cout << endl;

    /*
     * Test 1
     */
    cout << "Assignment 04, Question 02 Nick Voss: " << endl;
    cout << "Test1: " << endl;

    for (int num : {50, 30, 40, 35, 32, 40, 45, 48, 46, 30, 47}) {
        t.insertImproved(num);
    }

    cout << "The built AVL tree is (preorder traversal) using continuous rotations:" << endl;
    t.printTree();
    cout << endl;

    t.removeImproved(48);
    cout << "The updated AVL tree is (preorder traversal):" << endl;
    t.printTree();
    cout << endl;

    /*
     * Test 2
     */
    // You need to test three times, and output the results
//    cout << "Assignment 04, Question 03 Nick voss: " << endl;
//    cout << "Test2: " << endl;
//    cout << "The generated random AVL tree:" << endl;
//    t.makeRandomTree(3, 16);
//    t.printTree();

    return 0;
}