//
//
//  Created by Tara Rao-Pandit on 2020-10-08.
//  Copyright © 2020 Tara Rao-Pandit. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
/*
 Write a program that will allow the user to enter an integer that is greater than 1. The user will keep entering values until the required number is provided.
 
 The program then computes and outputs all the prime numbers that are less than or equal to the entered value.
 
 For all prime numbers less than 10,000, if the number is also a palindromic prime, then indicate that as part of the output. You may not hardcode palindromic prime values.
 
 For all primes less than 100,000 if the sum of digits is odd, then idicate that as a part of the output.
 */

/*
 To test program logic the following values were tested:
 -1 : asked user for an integer again
 0 : asked user for an integer again
 1 : asked user for an integer again
 10000 : outputed all the primes less than 10000 (1229 in total - this was verified online) and all the palindromic primes (20 in total)
 1000000 : outputted all the primes less than 100000 (78498 in total - verified online) and didn't mention if a prime was palindromic if they were greater than 10,000
 10000000 : outputted all the primes less than 10000000 (664579 in total - verified online) and didn't mention if the sum of digits was odd if the number was greater than 100,000
 
 To test palindromic primes, the integer 10,000 was used. The program outputted 20 palindromic primes, and these primes were verified with an online website to check that these were the only palindromic primes less than 10,000.
 
 The program will work for all values less than 2^31
 
 */

void a2_q1 () {
    // declare and initialize variables: integer, sum, dig1, dig2, dig3, dig4, dig5, bool prime number
    int integer = 0;
    int /*sum,*/dig_1 = 0, dig_2 = 0, dig_3 = 0, dig_4 = 0, dig_5 = 0;
    bool is_prime = true;
  
    // ask user for integer greater than 1 and keep asking until user inputs a valid number
    while (integer <= 1) {
        cout << "Enter a number greater than 1: ";
        cin >> integer;

    }
   
    // create a loop that iterates from i=2 to i<integer (to check if numbers from 2 to integer are prime numbers)
    for (int i=2; i <= integer; i++) {
        // reset is_prime to true at the start of loop
        is_prime = true;
        
        // for each i value iterate the j values up to the square root of i until a factor is found
        // if there exists j such that j is a factor, then not a prime number
        for (int j=2; j <= sqrt(i) && is_prime == true; j++) {
            if (i % j == 0)
                    is_prime = false;
            }
        
            // for each of these i values that are prime numbers,
            // check if they are palindromic for numbers less than 10000,
            // check if the sum of the digits is odd if i is less than 100000,
            // output the prime numbers and mention those that are palindromic or have an odd sum of digits
        
            if  (i > 1 && i < 10 && is_prime == true) {
                    cout << i << " is a palindromic prime";
                
            if (i % 2 != 0)
                cout << " and the sum of the digits is odd" << endl;
            else
                cout << endl;
                
            }
        
            if (i > 10 && i < 100 && is_prime == true) {
                    dig_1 = i / 10;
                    dig_2 = i % 10;
                    if (dig_1 == dig_2)
                        cout << (dig_1 * 10 + dig_2) << " is a palindromic prime";
                    else cout << (dig_1 * 10 + dig_2) << " is a prime";
                
                if ((dig_1 + dig_2) % 2 != 0)
                    cout << " and the sum of the digits is odd" << endl;
                else
                    cout << endl;
            }
            if ( i > 100 && i < 1000 && is_prime == true) {
                    dig_1 = i / 100;
                    dig_2 = (i % 100) / 10;
                    dig_3 = (i % 100) % 10;
                        if (dig_1 == dig_3)
                            cout << (dig_1 * 100 + dig_2 * 10 + dig_3) << " is a palindromic prime";
                            else cout << (dig_1 * 100 + dig_2 * 10 + dig_3) << " is a prime";
                
                if ((dig_1 + dig_2 + dig_3) % 2 != 0)
                    cout << " and the sum of the digits is odd" << endl;
                else
                    cout << endl;
            }
            
            if ( i > 1000 && i < 10000 && is_prime == true) {
                dig_1 = (i/ 1000);
                dig_2 = (i % 1000) / 100;
                dig_3 = ((i % 1000) % 100) / 10;
                dig_4 = ((i % 1000) % 100) % 10;
                    if (dig_1 == dig_4 && dig_3 == dig_2)
                        cout << (dig_1 * 1000 + dig_2 * 100 + dig_3 * 10 + dig_4) << " is a palindromic prime";
                else cout << (dig_1 * 1000 + dig_2 * 100 + dig_3 * 10 + dig_4) << " is a prime";
                
                if ((dig_1 + dig_2 + dig_3 + dig_4) % 2 != 0)
                    cout << " and the sum of the digits is odd" << endl;
                else
                    cout << endl;
            }
        
            if ( i > 10000 && i < 100000 && is_prime == true) {
                       dig_1 = (i/ 10000);
                       dig_2 = (i % 10000) / 1000;
                       dig_3 = ((i % 10000) % 1000) / 100;
                       dig_4 = (((i % 10000) % 1000) % 100) / 10;
                       dig_5 = (((i % 10000) % 1000) % 100) % 10;
                
                if ((dig_1 + dig_2 + dig_3 + dig_4 + dig_5) % 2 != 0)
                    cout << i << " is a prime and the sum of the digits is odd" << endl;
                else
                    cout << i << " is a prime" << endl;
        }
        
            if ( i > 100000 && is_prime == true) {
                    cout << i << " is a prime" << endl;
        }
}
}

int main() {
    a2_q1 ();
}
