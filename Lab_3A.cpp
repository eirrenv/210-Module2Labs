#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Restaurant struct
struct Restaurant {
    string name;
    string address;
    string bestMeal;
    double price;
    double avgCost;
    int rating;
};

// struct function to create new restaurant and add user input
Restaurant createNewRestaurant() {
    Restaurant tmpRestaurant;
    cout << "Please provide your restaurant's name: ";
    getline(cin, tmpRestaurant.name);
    cout << "Please provide the address: ";
    getline(cin, tmpRestaurant.address);
    cout << "What is the best item on the menu: ";
    getline(cin, tmpRestaurant.bestMeal);
    cout << "How much is the best meal: ";
    cin >> tmpRestaurant.price;
    cout << "Please provide the average cost of a meal: ";
    cin >> tmpRestaurant.avgCost;
    cout << "Please provide a rating from 1 to 5: ";
    cin >> tmpRestaurant.rating;
    cin.ignore();
    cout << endl;
    return tmpRestaurant;
}

// print function for Restaurant structs, printing name, rating, address, best menu meal, meal price, average cost of orders
void printRestaurant(Restaurant newRestaurant) {
    cout << "Restaurant Name: " << newRestaurant.name << endl;
    cout << "Restaurant Rating: " << newRestaurant.rating << " Stars" << endl;
    cout << "Restaurant Address: " << newRestaurant.address << endl;
    cout << "Restaurant Recommended Meal: " << newRestaurant.bestMeal << endl;
    cout << fixed << setprecision(2) << "Recommended Meal Price: $" << newRestaurant.price << endl;
    cout << "Restaurant Average Cost: $" << newRestaurant.avgCost << endl;
}

int main() {
    Restaurant firstRestaurant;
    firstRestaurant = createNewRestaurant();
    printRestaurant(firstRestaurant);
    return 0;
}