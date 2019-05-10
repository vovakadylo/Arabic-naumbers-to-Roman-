#include <iostream>

using namespace std;

string ArabicToRoman(int input){
    int temp = input;
    string result = "";
    while(temp > 0){
        if (temp == 1000000){
            result += "M";
            temp -= 1000000;
        } else if (temp >= 500000) {
            temp -=500000;
            result += "D";
        } else if (temp >= 100000) {
            temp -= 100000;
            result += "C";
        } else if (temp >= 50000) {
            temp -= 50000;
            result += "L";
        } else if (temp >= 10000) {
            temp -= 10000;
            result += "X";
        } else if (temp >= 5000) {
            temp -= 5000;
            result += "V";
        } else if (temp >= 1000) {
            temp -= 1000;
            result += "m";
        } else if (temp >= 500) {
            temp -= 500;
            result += "d";
        } else if (temp >= 100) {
            temp -= 100;
            result += "c";
        } else if (temp >= 50) {
            temp -= 50;
            result += "l";
        } else if (temp >= 10) {
            temp -= 10;
            result += "x";
        } else if (temp >= 5) {
            temp -= 5;
            result += "v";
        } else if (temp >= 1) {
            temp -= 1;
            result += "i";
        }
    }
    return result;
}

int main()
{
    int input;
    cout << "Input \"Arabic\" number between <1 ... 1 000 000>: ";
    cin >> input;
    while( cin.fail() || input < 1 || input > 1000000){
        cout << "n\Error. \nTry again:" ;
    }
    string result = ArabicToRoman(input);

    cout << "Result: \"" << result << "\"" << endl;

    return 0;
}
