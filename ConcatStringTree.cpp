#include "ConcatStringTree.h"


ConcatStringTree *ConcatStringTree::concatHelpFunction(Node *left, Node *right) {
    root->left=left;
    root->right=right;
    root->leftLength=left->length;
    root->length=left->length+right->length;
    root->data.clear(); /// clear data do ham nay nay chi noi thoi
}

ConcatStringTree::ConcatStringTree(const char*s) {
    string str(s);
    root->data=str;
    root->left=root->right= nullptr;
    root->length=str.length();
    root->leftLength=0;
}
int ConcatStringTree::length() const {
    return root->length;
}

char ConcatStringTree::get(int index) {
    if (index<0 || index> length()) {
        throw std::out_of_range("Index of string is invalid!");
    }
//    string
}

int ConcatStringTree::indexOf(char c) {
//    for (int i = 0; i < length(); i++)
//    {
//        if (c == this->data[i]) return i;
//    }
//    return -1;
}

string ConcatStringTree::toStringPreOrder() const {

}


string HelpToString(Node *root){
    if(root)
    {
        if(root->data !=""){
            return root->data;
        }
        return HelpToString(root->left) + HelpToString(root->right);
    }
    return "";
}
string ConcatStringTree::toString() const {
    string s1 = "ConcatStringTree";
    return s1 + "[\"" + HelpToString(root) + "\"]";
}

ConcatStringTree ConcatStringTree::concat(const ConcatStringTree &otherS) const{
//    return concatHelpFunction(root,otherS);
}
ConcatStringTree ConcatStringTree::subString(int from, int to) const {}

ConcatStringTree ConcatStringTree::reverse() const {}

int ConcatStringTree::getParTreeSize(const std::string &query) const {}

string ConcatStringTree::getParTreeStringPreOrder(const std::string &query) const {}

ConcatStringTree::~ConcatStringTree() {};