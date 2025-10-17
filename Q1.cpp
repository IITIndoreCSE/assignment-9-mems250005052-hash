// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct item {
    int id;
    float cost;
};

int main() {
    item items [6] = {
        {101, 75.50},
        {103, 120.25},
        {104, 55.00},
        {102, 40.00},
        {0, 0.0},
        {0, 0.0}
    };
    
    cout << "items with cost grater than 50.00:";
    
    for (int i=0; i<6; i++) {
        if(items[i].cost > 50.00) {
            cout << " ID: " << 
            items [i].id << ", Cost: " <<
            items [i].cost << endl;
        }
    }
    

    return 0;
}

