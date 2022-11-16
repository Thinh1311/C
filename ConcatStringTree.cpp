#include "ConcatStringTree.h"

ConcatStringTree::ConcatStringTree(const char *s) {
    root->data=s;
    root->right = root->left = nullptr;
    root->leftlength=0;
    root->length = root->data.length();
}

int ConcatStringTree::length() const {
    if(root==NULL)  return 0;
    else if(root->left == nullptr && root->right == nullptr){
        return root->data.length();
    }
    else{
        return root->getLength();
    }
}

char ConcatStringTree::get(int index) {
    if (index<0 || index> length()) {
        throw std::out_of_range("Index of string is invalid!");
    }
    return root->data[index];
}

int ConcatStringTree::indexOf(char c) {
    for (int i = 0; i < root->data[i]; i++)
    {
        if (c == root->data[i]) return i;
    }
    return -1;
}

string ConcatStringTree::toStringPreOrder() const {}

string ConcatStringTree::toString() const {}

ConcatStringTree ConcatStringTree::concat(const ConcatStringTree &otherS) const {}

ConcatStringTree ConcatStringTree::subString(int from, int to) const {}

ConcatStringTree ConcatStringTree::reverse() const {}

int ConcatStringTree::getParTreeSize(const std::string &query) const {}

string ConcatStringTree::getParTreeStringPreOrder(const std::string &query) const {}

