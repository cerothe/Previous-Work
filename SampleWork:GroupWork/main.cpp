//This program generate all combination of 0 and 1 with length 4
// You can debug to see how it works step-by-step


#include <iostream>
#include <string>
#include <cstdlib>
#include "evilcomputer.h"
#include "hack.h"
using namespace std;



int main() {
    // Create five computers with specific passwords
    EvilComputer ec1("1234", "grrr", "haha0", "gato1");
    EvilComputer ec2("1235", "gggrrr", "haha456", "gato123");
    EvilComputer ec3("2345", "gr", "haha0abc", "123gato");
    EvilComputer ec4("6789", "grggrrrg", "hahaz123", "abc9gato");
    EvilComputer ec5("9999", "rrrrrrrr", "hahahaha", "gatogato");

    srand(2017); // Initialize random number generation
    // Test that Dave's account is always hacked
    if (ec1.is_hacked("Dave"))
        cout << "EvilComputer1 - Dave is hacked." << endl;
    else
        cout << "NOOOOOO; EvilComputer1 - Dave is NOT hacked." << endl;
    if (ec2.is_hacked("Dave"))
        cout << "EvilComputer2 - Dave is hacked." << endl;
    else
        cout << "NOOOOOO; EvilComputer2 - Dave is NOT hacked." << endl;
    if (ec3.is_hacked("Dave"))
        cout << "EvilComputer3 - Dave is hacked." << endl;
    else
        cout << "NOOOOOO; EvilComputer3 - Dave is NOT hacked." << endl;
    if (ec4.is_hacked("Dave"))
        cout << "EvilComputer4 - Dave is hacked." << endl;
    else
        cout << "NOOOOOO; EvilComputer4 - Guest is NOT hacked." << endl;
    if (ec5.is_hacked("Dave"))
        cout << "EvilComputer5 - Dave is hacked." << endl;
    else
        cout << "NOOOOOO; EvilComputer5 - Dave is NOT hacked." << endl;
    system("pause");
    return 0;
}