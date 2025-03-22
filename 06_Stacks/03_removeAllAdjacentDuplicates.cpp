/*
You have given a string s considering of lowercase English letters

A duplicates removal consists of choosing two adjacent and equal letters and removing them

We repeatedly make duplicate removals on s until we no longer can

return the final string after all such duplicate removals have been made.

example: 
input s : "abbaca"
output: "ca"

*/
#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string s) 
{
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();  // Remove duplicate
        } else {
            st.push(c);
        }
    }

    // Construct final string from stack
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main() {
    string s = "abbaca";
    cout << "Output: " << removeDuplicates(s) << endl;
    return 0;
}
