#include <iostream>

using namespace std;

int main() {
    int temperature;
    
    // Taking temperature input
    cout << "Enter the temperature: ";
    cin >> temperature;
    
    // Suggesting activity based on temperature
    if (temperature >= 80) {
        cout << "Suggested activity: Swimming" << endl;
    } else if (temperature >= 60) {
        cout << "Suggested activity: Tennis" << endl;
    } else if (temperature >= 40) {
        cout << "Suggested activity: Golf" << endl;
    } else {
        cout << "Suggested activity: Skiing" << endl;
    }
    
    return 0;
}