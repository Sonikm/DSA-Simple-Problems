#include<iostream>
using namespace std;

    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;
        int rem;

        while(n) {
            rem = n%10; // Taking remender
            product *= rem;
            sum += rem;

            n /= 10;
        }

        return product - sum;

    }

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    cout << " the difference between the product of its digits and the sum of its digits: " << subtractProductAndSum(n) << endl;

   return 0;
}


/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
*/