#include<iostream>
#include<stack>
using namespace std;

// reverse a sentence using stack 

void reverseSentence( string s){

    stack <string> st;
    for(int i=0; i<s.length();i++){
        string word ="";
        while (s[i]!=' ' && i<s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
}

int main(){
    string s = "hey, how you doin?";
    reverseSentence(s);
    return 0;
}