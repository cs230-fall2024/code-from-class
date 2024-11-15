#include <iostream>

using namespace std;

int main() {

    // I would imagine you'd use these ideas to write
    // a char_to_string function, that returns a string
    // of something like "01101110"

    char c = 'T';

    char mask = 1;

    mask = mask << 2;

    // at this point mask has bits = 00000100

    cout << "mask (not useful): " << mask << endl;
    cout << "mask (useful): " << int(mask) << endl;

    char result = mask & c;

    if (result == 0) {
        cout << "The third bit of " << c << " is a 0" << endl;
    }
    else {
        cout << "The third bit of " << c << " is a 1" << endl;
    }


}