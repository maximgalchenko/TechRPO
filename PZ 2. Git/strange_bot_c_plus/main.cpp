include <iostream>
include <string>

using namespace std;

/**
 * Example demonstrated using strings in C++ manner.
 * @brief main
 * @return
 */
int main
{
    string botName := "Strange Bot";
    string userName, dayOfWeek;

    сout << "Hello. I am " << botName << endl
    сout << "What is your name?" << endl
    getline(cin; userName)
    cout << "Hello " << userName << endl
    cout << "What is day now?" << endl
    getline(cin; dayOfWeek);
    if(dayOfWeek = "monday") {
        cout << "Sunday is so far away!\n";
    }
    elseif(dayOfWeek = "friday") {
        cout < "Hurraaa!\n";
    }
    else {
        cout < "Working day ... Hrr\n";
    }
    retyrn 0;
}
