#include <iostream>
#include <random>
#include "NumberGenerator.h"
#include "ReverseNumber.h"

using namespace std;


int reverseNumber(int x) {
    if (x < 0) return -1;
    long long reversed = 0;
    long long temp = x;
    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return reversed;
}




int main() {
    std::cout << "Hello World" << std::endl;

    auto randInt = NumberGenerator::GenerateRandomInts(1, 100, 10000)[0];
    int reversed = reverseNumber(randInt);

    cout << "Original: " << randInt << ". Reversed: " << reversed << endl;

    return 0;
}