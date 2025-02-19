#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  bool isPrime = true;

  if (n == 2)
  {
    cout << "YES" << endl;
    return 0;
  }

  if (n % 2 == 0)
  {
    cout << "NO";
    return 0;
  }

  for (int i = 3; i < n; i += 2)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  cout << (isPrime ? "YES" : "NO") << endl;

  return 0;
}