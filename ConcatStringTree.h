#ifndef __CONCAT_STRING_TREE_H__
#define __CONCAT_STRING_TREE_H__

#include "main.h"

class Node{
public:
    string data;
    Node *left,*right;
    int leftLength;
    int length;
    friend class ConcatStringTree;
public:
    Node(): left(nullptr), right(nullptr){}
    Node(Node *left,Node *right) : left(left) ,right(right){}
    ~Node(){}
};


class ConcatStringTree {
private:
    Node *root = new Node();
public:
//    ConcatStringTree *insert(ConcatStringTree*root,const char *s); // helper function for concat
//    ConcatStringTree *concatHelpFunction(const ConcatStringTree *root,const ConcatStringTree *others) const; // helper function for concat
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
    ~ConcatStringTree();
};

class ReducedConcatStringTree; // forward declaration
class LitStringHash; // forward declaration

class HashConfig {
private:
    int p;
    double c1, c2;
    double lambda;
    double alpha;
    int initSize;

    friend class ReducedConcatStringTree;
    friend class LitStringHash;
};

class LitStringHash {
public:
    LitStringHash(const HashConfig & hashConfig);
    int getLastInsertedIndex() const;
    string toString() const;
};

class ReducedConcatStringTree /* */ {
public:
    ReducedConcatStringTree(const char * s, LitStringHash * litStringHash);
    LitStringHash * litStringHash;
};

#endif // __CONCAT_STRING_TREE_H__