#include <iostream>
using namespace std;

struct color {
    int red;
    int green;
    int blue;
};

int main() {
    color colors[5] = {
        {100, 150, 200},
        {50, 60, 70},
        {180, 210, 220},
        {10, 20, 30},
        {250, 240, 230}
    };
    for(int i = 0; i < 3; ++i) {
        colors[i].red = 225 - colors[i].red;
        colors[i].green = 225 - colors[i].green;
        colors[i].blue = 225 - colors[i].blue;
    }
    cout << "New RGB values:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i+1 << ": "
             << colors[i].red << " "
             << colors[i].green << " "
             << colors[i].blue << endl;
             
    }

    return 0;
}
