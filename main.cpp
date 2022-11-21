#include "ConcatStringTree.h"
void tc1()
{
    ConcatStringTree s1("Hello");
    ConcatStringTree s2(",_world");
    cout << "s1's length: " << s1.length() << endl;
    cout << "s2's length: " << s2.length() << endl;
    cout << "s1 get char at index 2: " << s1.get(2) << endl;
    cout << "s2 get char at index 2: " << s2.get(2) << endl;
    cout << "char at index 2: " << s1.get(2) << endl;
    try {
        cout << "char at index 22: " << s1.get(22) << endl;
    }
    catch (out_of_range& ofr) {
        cout << "Exception out_of_range: " << ofr.what() << endl;
    }
    ConcatStringTree s3 = s1.concat(s2);
    cout << "s3's length: " << s3.length() << endl;
    cout << "s3 get char at index 2: " << s3.get(2) << endl;
    cout << "s3 get char at index 8: " << s3.get(8) << endl;
    cout << "s3 toString: " << s3.toString() << endl;
    cout << "s3 toStringPreOrder: " << s3.toStringPreOrder() << endl;

    ConcatStringTree s4(",_thi");
    ConcatStringTree s5("s_is");
    ConcatStringTree s6 = s4.concat(s5);
    cout << "s6 toString: " << s6.toString() << endl;
    cout << "s6 toStringPreOrder: " << s6.toStringPreOrder() << endl;

    ConcatStringTree s7 = s3.concat(s6);
    cout << "s7 toString: " << s7.toString() << endl;
    cout << "s7 toStringPreOrder: " << s7.toStringPreOrder() << endl;

    ConcatStringTree s8 = s1.concat(s2).concat(s4).concat(s5);
    cout << "s8 toString: " << s8.toString() << endl;
    cout << "s8 toStringPreOrder: " << s8.toStringPreOrder() << endl;

    try {
        cout << "char at index 15: " << s8.get(15) << endl;
    }
    catch (out_of_range& ofr) {
        cout << "Exception out_of_range: " << ofr.what() << endl;
    }
    cout << s2.reverse().toString();
}

void tc2(){
    ConcatStringTree s1("Hello");
    ConcatStringTree s2(",_world");
    cout << "s1's length: " << s1.length() << endl;
    cout << "s2's length: " << s2.length() << endl;

}
int main() {
    tc2();
}