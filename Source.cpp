#include <iostream>
#include <sstream>
using namespace std;

string customColor(int r, int g, int b) {
    stringstream ss;
    ss << "\033[38;2;" << r << ";" << g << ";" << b << "m";

    return ss.str();
}

#define RESET   "\033[0m"

int main()
{

    int red = 0, green = 550, blue = 0; // Example RGB values

    cout << customColor(red, green, blue) << "This is a custom  color!" << endl;

    cout << RESET << "This text is back to the default color." << endl;

    return 0;
}