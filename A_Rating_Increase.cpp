#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;

        int len = ab.length();
        int a = -1, b = -1;

        for (int i = 1; i < len; i++) {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);

            // Check for leading zeros
            if ((a_str[0] != '0') && (b_str[0] != '0')) {
                a = stoi(a_str);
                b = stoi(b_str);

                if (a > 0 && b > 0 && b > a) {
                    cout << a << " " << b << endl;
                    break;
                }
            }
        }

        if (a == b) {
            cout << "-1" << endl;
        }
    }

    return 0;
}
