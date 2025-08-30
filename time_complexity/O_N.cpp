#include <bits/stdc++.h>
using namespace std;

void naiveStringMatch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    cout << "Pattern found at positions: ";
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);

    naiveStringMatch(text, pattern);

    return 0;
}
