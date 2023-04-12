#include <iostream>
#include <string>
using namespace std;

int getDigit9(string npm) {     
    return npm[8] - '0';
}
int getDigit10(string npm) {    
    return npm[9] - '0';
}
int multiplyDigit10(int x, int digit10) {     
    if (x == 1) {
        return digit10;
    } else {
        return digit10 * multiplyDigit10(x-1, digit10);
    }
}
int main() {
    string npm;
    int digit9, digit10, result;

    cout << "Masukkan NPM Anda: ";   
    cin >> npm;
    digit9 = getDigit9(npm);
    digit10 = getDigit10(npm);

    result = multiplyDigit10(digit9, digit10);    
    cout << "Hasil perkalian digit ke-10 sebanyak " << digit9 << " kali adalah: " << result << endl;
    return 0;
}
