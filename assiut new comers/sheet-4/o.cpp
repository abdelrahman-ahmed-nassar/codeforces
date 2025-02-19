// Sort String
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int freq[26] = {0};

    for (int i = 0; i < n; ++i)
    {
        char c = cin.get();
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < freq[i]; ++j)
        {
            cout << (char)('a' + i);
        }
    }

    return 0;
}