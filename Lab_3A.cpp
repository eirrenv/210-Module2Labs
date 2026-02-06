#include <iostream>
#include <string>
using namespace std;

// Restaurant struct
struct Restaurant {
    string name;
    string address;
    string menu;
    double price;
    double avgCost;
};

// struct function to create new restaurant and add user input
Restaurant createNewRestaurant() {
    Restaurant tmpRestaurant;
    getline(cin, tmpRestaurant.name);
    getline(cin, tmpRestaurant.address);
    getline(cin, tmpRestaurant.menu);
    cin >> tmpRestaurant.price;
    cin >> tmpRestaurant.avgCost;
    cin.ignore();
    return tmpRestaurant;
}

int main() {
    
    return 0;
}