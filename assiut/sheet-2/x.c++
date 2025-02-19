// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// void binaryToDecimal(string n)
// {
  
// }

// string decimalToBinary(int n) {

//     string output; 

//     do {
//         output = to_string(n % 2) + output;
//         n /= 2;
//     } while(n > 0);
//     return output;
// }

// int main()
// {
//   string s = decimalToBinary(29);
//   cout<<s;
//   return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, times;
    cin >> times;

    for (int i = 1; i <= times; i++)
    {
        cin >> num;
        int ones = 0;
        int plus = 0;
        int dec = 0;

        while (num != 0)
        {

            if (num % 2 == 1)
            {
                ones++;
                dec += 1 * pow(2, plus);
                plus++;
            }
            num /= 2;
        }

        cout << dec << endl;
    }
}
