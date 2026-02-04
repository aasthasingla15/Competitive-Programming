#include <iostream>
using namespace std;

bool isPalindrome(string &str, int l, int r) {
    
    // base case
    if (l>=r) return true;

    if (str[l]!=str[r]) return false;
        
    // recursive case
    return isPalindrome(str, l+1, r-1);
}

int main() {
    string str;
    cin >> str;

    if (isPalindrome(str, 0, str.length()-1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
