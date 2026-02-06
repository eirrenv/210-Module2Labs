#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Color struct, containing RGB hue values in integer form
struct Color {
    int red;
    int green;
    int blue;
};

// function to create new Color
Color createColor() {
    Color newColor;
    cout << "Please input Red color value: ";
    cin >> newColor.red;
    cout << "Please input Green color value: ";
    cin >> newColor.green;
    cout << "Please input Blue color value: ";
    cin >> newColor.blue;
    return newColor;
}

// basic Color print function for testing, will create table after commit
void printColor(Color color) {
    cout << "Red: " << color.red << " ";
    cout << "Green: " << color.green << " ";
    cout << "Blue: " << color.blue << endl;
}

// basic main function to create vector and first test color, append to vector and print from vector
int main() {
    vector<Color> colorVector;
    Color firstColor;

    firstColor = createColor();

    colorVector.push_back(firstColor);

    printColor(colorVector[0]);

    return 0;
}
