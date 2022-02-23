#include<iostream>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    int freq[26] = {0};
    int n = str.size();

    for(int i=0; i < n; i++)
    {
        freq[str[i]-'a']++;
    }
    
    for (int i = 0; i < n; i++) {
 
        // if frequency of character str[i] is not
        // equal to 0
        if (freq[str[i] - 'a'] != 0) {
 
            // print the character along with its
            // frequency
            cout << str[i] << freq[str[i] - 'a'] << " ";
 
            // update frequency of str[i] to 0 so
            // that the same character is not printed
            // again
            freq[str[i] - 'a'] = 0;
        }
        
    }
    return 0;
}