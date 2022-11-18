#include "ConcatStringTree.h"

// helper function
int getLeftLength(Node * root){
    if(root->left!=NULL)
            return 0;
    else{
        return root->left->data.length();
    }
}

int getLength(Node *root){
     if(!root)   
        return 0;
    return root->data.length();
}
//// 


ConcatStringTree::ConcatStringTree(const char *s) {
    root->data=s;
    root->right = root->left = nullptr;
    root->length = getLength(root);
    root->leftlength = getLeftLength(root);
}

int ConcatStringTree::length() const {
    return root->length;
}

char ConcatStringTree::get(int index) {
    if (index<0 || index> length()) {
        throw std::out_of_range("Index of string is invalid!");
    }
    return root->data[index];
}

int ConcatStringTree::indexOf(char c) {
    for (int i = 0; i < length(); i++)
    {
        if (c == root->data[i]) return i;
    }
    return -1;
}

string ConcatStringTree::toStringPreOrder() const {
//    string out="";
//    int LL  = root->getleftlength(); // left length
//    int L =  root->getLength(); // return length
//    int LR = root->right->data.length();
//    if(root!=NULL){
//        return "ConcatStringTree[(LL=0,L=0,<NULL>);(LL=0,L=0,<NULL>);(LL=0,L=0,<NULL>)]\"";
//    }
//    else{
//    }
//    return out;
}

string ConcatStringTree::toString() const {
    string out1="ConcatStringTree[\"";
    string out2="\"]\"";
    if(root->left == NULL && root->right==NULL){
        return out1 + "NULL" + out2;
    }
    else if(root->left != NULL && root->right==NULL)
    {
        return out1 + root->left->data + out2;
    }
    else if(root->left == NULL && root->right!=NULL)
    {
        return out1 + root->right->data + out2;
    }
    else{
        return out1 + root->left->data + root->right->data + out2;
    }
}

ConcatStringTree ConcatStringTree::concat(const ConcatStringTree &otherS) const {
    string out = "";

}

ConcatStringTree ConcatStringTree::subString(int from, int to) const {}

ConcatStringTree ConcatStringTree::reverse() const {}

int ConcatStringTree::getParTreeSize(const std::string &query) const {}

string ConcatStringTree::getParTreeStringPreOrder(const std::string &query) const {}

ConcatStringTree::~ConcatStringTree() {};