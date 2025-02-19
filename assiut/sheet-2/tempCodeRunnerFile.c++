
  int temp = 0;
  int cur = 2;
  int prev = 1;

  for (int i = 3; i < n - 1; i++)
  {
    temp = cur + prev;
    prev = cur;
    cur = temp;
  }
  cout<<temp;
