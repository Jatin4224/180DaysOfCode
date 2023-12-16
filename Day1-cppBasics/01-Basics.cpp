#include <iostream>
// Uncomment and include specific libraries as needed
// #include <string>
// #include <cmath>

// Uncomment the following line if you want to use all standard libraries
// #include <bits/stdc++.h>

using namespace std;

// 1. Printing to the console
int main() {
  // Using std::cout to print to the console
  cout << "hey jatin" << endl;

  // Alternatively, you can use the 'using namespace std;' to avoid typing 'std::'
  // cout << "hey jatin" << endl;

  return 0;
}

// 2. Taking input
int main() {
  int x, y;
  cin >> x >> y;
  cout << "value of x: " << x << " and y: " << y << endl;

  return 0;
}

// 3. Data types
int main() {
  // 1. Integer types
  int integerVar = 20;
  long longVar = 30;

  // 2. Floating-point types
  float floatVar = 3.6;
  double doubleVar = 2.0;

  // 3. Character type
  char charVar = 'g';

  return 0;
}

// 4. String handling
int main() {
  // Using string variables
  string s1, s2;
  cin >> s1 >> s2;
  cout << s1 << " " << s2 << endl;

  // Using getline for entire line input
  string str;
  getline(cin, str);
  cout << str << endl;

  return 0;
}
