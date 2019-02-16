//
//  main.cpp
//  Greatest Common Divisor
//
//  Created by Anthony Zamora on 2/15/19.
//  Copyright © 2019 Anthony Zamora. All rights reserved.
//

/*
OBJECTIVE: To find the LCM and GCD of two numbers.
*/

#include <iostream>

using namespace std;

int gcd(int num1, int num2)
{
    // Check if num2 equals to 0
    // Cannot divide by 0
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        // Repeat process
        return gcd(num2, num1 % num2);
    }
}

int lcm(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}

int main(int argc, const char * argv[])
{
    // Testing numbers and size of array
    int inputNumbers[] = {2, 4, 6, 80, 10};
    int sizeArray = sizeof(inputNumbers)/sizeof(inputNumbers[0]);
    
    // Two iterators for one array.
    // Will compare two digits at a time.
    int pos1 = 0;
    int pos2 = 1;
    
    // Iterate through array
    // Reduce size of array by 2, so "pos2" won't go out of bounds.
    for (int i = 0; i <= sizeArray - 2; i++)
    {
        // Print gcd and lcm of both numbers
        cout << "GCD: " << gcd(inputNumbers[pos1], inputNumbers[pos2]);
        cout << "\tLCM: " << lcm(inputNumbers[pos1], inputNumbers[pos2]);
        
        // Update both iterators
        pos1++;
        pos2++;
    }
    return 0;
}
