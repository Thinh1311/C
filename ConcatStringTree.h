#ifndef __CONCAT_STRING_TREE_H__
#define __CONCAT_STRING_TREE_H__

#include "main.h"
class BST{
public:
    string data;
    BST *left, *right;
    int leftLength() {
       return left->data.length();
    }
    BST(const char *string1) {}

};

class ConcatStringTree {
public:
    BST cur;
    BST * Left = nullptr;
    BST * Right = nullptr;
public:
    ConcatStringTree(const char *s);
    int length() const;
    char get(int index);
    int indexOf(char c);
    string toStringPreOrder() const;
    string toString() const;
    ConcatStringTree concat(const ConcatStringTree & otherS) const;
    ConcatStringTree subString(int from, int to) const;
    ConcatStringTree reverse() const;

    int getParTreeSize(const string & query) const;
    string getParTreeStringPreOrder(const string & query) const;
};

class ReducedConcatStringTree; // forward declaration

class HashConfig {
private:
    int p;
    double c1, c2;
    double lambda;
    double alpha;
    int initSize;

    friend class ReducedConcatStringTree;
};

class ReducedConcatStringTree /* */ {

public:
    class LitStringHash {
    public:
        LitStringHash(const HashConfig & hashConfig);
        int getLastInsertedIndex() const;
        string toString() const;
    };

public:
    static LitStringHash litStringHash;
};

#endif // __CONCAT_STRING_TREE_H__