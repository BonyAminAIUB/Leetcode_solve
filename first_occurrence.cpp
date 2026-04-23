#include<bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle){
    size_t sz = haystack.find(needle);
    if(sz != string::npos){
        return sz;
    }
    else{
        return -1;
    }
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int val = strStr(s1,s2);
    cout << val << endl;
    return 0;
}