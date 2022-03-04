#ifndef AVL_TREE_H
#define AVL_TREE_H

#include <iostream>

template<typename Comparable>
class AvlTree {
private:
    struct AvlNode {
        Comparable element;
        AvlNode *left;
        AvlNode *right;
        int height;

        AvlNode(const Comparable &ele, AvlNode *lt, AvlNode *rt, int h = 0)
                : element{ele}, left{lt}, right{rt}, height{h} {}
    };

    AvlNode *root;

public:
    AvlTree();

    AvlTree(const AvlTree &rhs);

    AvlTree(AvlTree &&rhs);

    ~AvlTree();

    // Deep copy.
    AvlTree &operator=(const AvlTree &rhs) {
        AvlTree copy = rhs;
        std::swap(*this, copy);
        return *this;
    }

    // Move.
    AvlTree &operator=(AvlTree &&rhs) {
        std::swap(root, rhs.root);
        return *this;
    }

    const Comparable &findMin() const;

    const Comparable &findMax() const;

    bool isEmpty() const;

    bool contains(const Comparable &x) const;

    void makeEmpty();

    // Methods for assignment 03: Q1
    void printTree() const;

    void insert(const Comparable &x);

    void remove(const Comparable &x);

    // Methods of assignment 03: Q2
    void insertImproved(const Comparable &x);

    void removeImproved(const Comparable &x);

    // Methods of assignment 03: Q3
    void makeRandomTree(const Comparable lower, const Comparable upper);
    // You may add more method(s) here for Q3

private:
    static const int ALLOWED_IMBALANCE = 1;

    AvlNode *findMin(AvlNode *t) const;

    AvlNode *findMax(AvlNode *t) const;

    AvlNode *clone(AvlNode *t) const;

    void makeEmpty(AvlNode *&t);

    bool contains(const Comparable &x, AvlNode *t) const;

    int height(AvlNode *t) const;

    int max(int lhs, int rhs) const;

    // Methods for assignment 03: Q1
    void insert(const Comparable &x, AvlNode *&t);

    void remove(const Comparable &x, AvlNode *&t);

    void balance(AvlNode *&t);

    void printTree(AvlNode *t) const;

    void rotateWithLeftChild(AvlNode *&k2);

    void rotateWithRightChild(AvlNode *&k1);

    void doubleWithLeftChild(AvlNode *&k3);

    void doubleWithRightChild(AvlNode *&k1);

    // Methods of assignment 03: Q2
    AvlNode *doubleRotateWithLeftChild(AvlNode *k3);

    AvlNode *doubleRotateWithRightChild(AvlNode *k3);

    void insertImproved(const Comparable &x, AvlNode *&t);

    void removeImproved(const Comparable &x, AvlNode *&t);

    void balanceImproved(AvlNode *&t);

    // Methods of assignment 03: Q3
    // You may add more method(s) here
    void setMax(int max);

    int getMax(int lhs, int rhs);
};

#endif
