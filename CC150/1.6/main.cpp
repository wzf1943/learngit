#include <iostream>
#include <string>

using namespace std;

string compressStr (string str) {
    if (str.length() == 0) {
        return str;
    }
    int count = 0;
    int length = str.length();
    int i = 1, j = 0;
    
    string res = "";

    for (; i < length; ) {
        if (str[j] != str[i]) {
            count = i - j;
            res.push_back(str[j]);
            res += to_string(count);
            j = i;
            i++;
            count = 0;
        } else {
            i++;
        }
    }

    if (res.length() >= str.length()) {
        return str;
    }
    return res;
}

int main() {
    string str = "";
    string out = compressStr(str);
    cout << out << endl;
    return 0;
}


