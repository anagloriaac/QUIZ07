#include <iostream>
using namespace std;

bool isPalindrome(string x){
  int s=x.length() - 1;
    for (int i=0;i<s;i++) {
        if(x[i] == x[s-i] )
            return true;

      else {
    return false;
  }
  }
}
int main(){
    string n;


    cout << "Write a word or a number you think is a Palindrome: " << endl;
    cin>>n;

    bool y= isPalindrome(n);
        if (y == true) {
          cout << "It's a Palindrome!" << endl;
        }
        else  {
          cout << "Sorry, not a palindrome" << endl;
        }

    return 0;
}
