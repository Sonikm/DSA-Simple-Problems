#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Find the difference between the sum of elements at even indices to the sum of elements at odd indies

int main()
{
    vector<int> arr = {1,2,3,2,1,3, 5, 7, 1, 1};
    int even = 0; // 11
    int odd = 0;//15

   int n = 1;

     for(int i=0; i< arr.size();i++) {
        if(i%2 == 0)  {
            even += arr[i];
        }
        else {
            odd += arr[i];
        }
     }

     cout << "Difference the sum of even and odd is: " << even - odd << endl;

     
   return 0;
}