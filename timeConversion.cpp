#include<iostream>
#include<sstream>

using namespace std;

string timeConversion(string s) {
    int hour;
    string time;
    
    stringstream convertToInt(s.substr(0,2));
    convertToInt>>hour;
    // cout<<s[8];
    
    if (s[8]=='A')
    {
        time = s.substr(0,6);
    }

    if(s[8]=='P')
    {
        if(hour<12)
        {
            hour = hour+12;
            time = to_string(hour) + s.substr(2,6);
        }
    }
    return time;
}

int main()
{
    string s = "07:05:45AM";
    string time = timeConversion(s);
    cout<<time;
}