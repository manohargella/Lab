#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;

int number;
void generateNumber() {
    while (true) {
        number = rand() % 100;
        cout << "Generated: " << number << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}
void squareNumber() {
    while (true) {
        int square = number * number;
        cout << "Squared: " << square << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}
void cubeNumber() {
    while (true) {
        int cube = number * number * number;
        cout << "Cubed: " << cube << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() {
    srand(time(0));
    thread t1(generateNumber);
    thread t2(squareNumber);
    thread t3(cubeNumber);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}