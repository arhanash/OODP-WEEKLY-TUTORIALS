#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // a. Print 45.6789 in a field of width 10, right-justified, with three decimal places
    cout << right << setw(10) << fixed << setprecision(3) << 45.6789 << endl;
    
    // b. Display 0.00034567 in scientific notation with six decimal places
    cout << scientific << setprecision(6) << 0.00034567 << endl;
    
    // c. Print 255 as a hexadecimal number in uppercase format
    cout << hex << uppercase << 255 << endl;
    
    // d. Print 987.654321 as a fixed-point number rounded to four decimal places
    cout << fixed << setprecision(4) << 987.654321 << endl;
    
    // e. Display -123.456 in exponential notation with four decimal places
    cout << scientific << setprecision(4) << -123.456 << endl;
    
    return 0;
}
