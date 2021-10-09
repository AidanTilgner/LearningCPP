#include <iostream>

int main()
{
    using namespace std;

    string greeting = "What the hell?";
    greeting.find("hell");
    //  Will find the index of word

    cout << greeting.find_first_of("!") << endl;
    //  returns npos(-1) or 18446744073709551615 which is equivalent to an unigned long

    greeting.replace(greeting.find("hell"), 4, "****");
    //  Replaces string at index given length and replacement

    cout << greeting << endl;

    greeting = "What is up?";
    cout << greeting.substr(5, 2) << endl;
    //  Gets a substring at given index of given length

    if (greeting.compare("What is up?") == 0) cout << "Equals" << endl;
    //  Compare takes a string and returns 0 if it equals, don't use it though

    return 0;
}