#include <iostream>

using namespace std;

class Solution
{
    string stack = "";
    string queue = "";
    //Write your code here
    public:
        void pushCharacter(char ch)
        {
            stack = stack + ch;
        }
        void enqueueCharacter(char ch)
        {
            queue = ch + queue;
        }
        char popCharacter()
        {
            int top = stack.size();
            char poppedChar = stack[top-1];
            top--;
            for(int i=0; i<top; i++)
                stack[i] = stack[i];
            return poppedChar;
        }
        char dequeueCharacter()
        {
            int size = queue.size();
            int top = queue.size();
            char dequeueChar = queue[0];
            // for(int i=1; i<queue.size(); i++)
            //     top++;
            return dequeueChar;
        }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}