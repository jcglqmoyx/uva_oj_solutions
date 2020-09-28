#include <iostream>

using namespace std;
/*
int main() {
    int n;
    cin >> n;
    while (n--) {
        string word;
        cin >> word;
        for (int len = 1; len <= word.length(); len++) {
            if (word.length() % len == 0) {
                int flag = true;
                for (int i = 0; i < word.length() - len; i += len) {
                    if (word.substr(i, len) != word.substr(i + len, len)) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cout << len << endl;
                    if (n) {
                        cout << endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
*/