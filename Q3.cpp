#include <iostream>
using namespace std;
struct Point {
    float x;
    float y;
};

int main() {
    const int SIZE = 7;
    Point points[SIZE];

    
    cout << "Enter coordinates (x y) for 7 points:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    
    int countFirstQuadrant = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            ++countFirstQuadrant;
        }
    }

    
    cout << "\nNumber of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}

