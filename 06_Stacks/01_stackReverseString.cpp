/*

Reverse a string using stack

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Stack type declaration 
    stack<char> st;

    string name = "Sagar"; // string variable 

    // Push the element in the stack
    for (char c: name)
    {
        st.push(c);  // Push the char element in the char type stack
    }

    int len = name.size();

    cout << "Name In reverse :" << name<< endl;
    for (int i = 0; i < len; i++)
    {
        char ele= st.top(); // extract the last element in the stack
        name[i] = ele;      // Store the ele
        st.pop();           // remove the last ele and 
    }
    
    cout << "Name In reverse :" << name<< endl;

    return 0;
}