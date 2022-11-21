#include "ConcatStringTree.h"


//ConcatStringTree *ConcatStringTree::insert(ConcatStringTree *root, const char *s) {
//    if(!root){      // neu root rong thi tao concatstringtree moi
//        return new ConcatStringTree(s);
//    }
//    if(strlen(s) > root->Length){
//        root->right = insert(root->right,s);
//    }
//    else if(strlen(s) < root->Length){
//        root->left = insert(root->left,s);
//    }
//    return root;
//}
//
//ConcatStringTree *ConcatStringTree::concatHelpFunction(const ConcatStringTree *root,const ConcatStringTree *others) const{
//    if(!root){
//        return others;
//    }
//    if(!others){
//        return root;
//    }
//    root->data+=others->data;
//    root->left = concatHelpFunction(root->left,others->left);
//    root->right = concatHelpFunction(root->right,others->right);
//}

ConcatStringTree::ConcatStringTree(const char*s) {
    string str(s);
    root->data = str;
    root->left=root->right = nullptr;
    root->length = str.length();
    root->leftLength=0;
}
int ConcatStringTree::length() const {
    return root->length;
}

char ConcatStringTree::get(int index) {
    if (index<0 || index> length()) {
        throw std::out_of_range("Index of string is invalid!");
    }
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

string ConcatStringTree::toString() const {
//    string a = "ConcatStringTree";
//    string b = this->data;
//    return a + "[\""+ b + "\"]";
}

ConcatStringTree ConcatStringTree::concat(const ConcatStringTree &otherS) const{
//    return concatHelpFunction(root,otherS);
}
ConcatStringTree ConcatStringTree::subString(int from, int to) const {}

ConcatStringTree ConcatStringTree::reverse() const {}

int ConcatStringTree::getParTreeSize(const std::string &query) const {}

string ConcatStringTree::getParTreeStringPreOrder(const std::string &query) const {}

ConcatStringTree::~ConcatStringTree() {};