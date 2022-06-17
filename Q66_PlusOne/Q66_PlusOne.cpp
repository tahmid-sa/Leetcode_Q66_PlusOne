#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for (vector<int>::reverse_iterator i = digits.rbegin(); i != digits.rend(); i++) {
        if (i == digits.rbegin() && *i != 9) {
            *i += 1;
            return digits;
        }
        else if (*i == 9) {
            *i = 0;

            if (i + 1 == digits.rend()) {
                digits.insert((i + 1).base(), 1);
                return digits;
            }
        }
        else if (*i != 9) {
            *i += 1;
            return digits;
        }
    }
}

int main()
{
    vector<int> digits = { 1, 9, 9 };

    vector<int> newVec = plusOne(digits);

    for (auto& d : digits) {
        cout << d;
    }

    return 0;
}