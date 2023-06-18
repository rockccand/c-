#include <iostream>
#include <algorithm>

using namespace std;

void permute(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
    }
    else {
        for (int i = l; i <= r; i++) {
            bool is_duplicate = false;
            for (int j = l; j < i; j++) {
                if (str[j] == str[i]) {
                    is_duplicate = true;
                    break;
                }
            }
            if (!is_duplicate) {
                swap(str[l], str[i]);
                permute(str, l + 1, r);
                swap(str[l], str[i]);
            }
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.size();
    sort(str.begin(), str.end());
    permute(str, 0, n - 1);
    return 0;
}