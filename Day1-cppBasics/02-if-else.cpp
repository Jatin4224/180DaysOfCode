// if/else
//   Q1)wrtie a program that takes an input of age and prints if you are adult or not
// 

#include <iostream>
using namespace std;



int main() {
  int age;
  cin >> age;
  if (age >= 18) {
    cout << "adult" << endl;
  } else {
    cout << "not adult " << endl;
  }
  return 0;
}


Q2)Q2)
A school has folllowing rules for grading system:
  a. Below 25 - f
  b. 25 to 44 - e
  c. 45 to 49 - d
  d. 50 to 59 - c
  e. 60 to 79 - b
  f. 80 to 100 - a
  Ask user to enter marks and print the corresponding grade.template
*/
// #include <iostream>
// using namespace std;
// int main() {
//   int marks;
//   cin >> marks;
//   if (marks < 25) {
//     cout << "f" << endl;

//   } else if (marks >= 25 && marks <= 44) {
//     cout << "e" << endl;

//   } else if ()
//     return 0;
// }

/*Q3- Take the age from the user and then decide acoordingly
1. if age < 18 ,
print - not eligible for job
2.if age >= 18,
print - eligible for job
3. if age >= 55 and age <= 57,
print- eligible for job, but retirement soon
4. if age > 57
print - retirement time

int main() {
  int age;
  cin >> age;
  if (age < 18) {
    cout << "not elgible for job";

  } else if (age <= 54) {
    cout << "eligible for job";
  } else if (age <= 57) {
    cout << "eligible for job, but retirement soon";
  } else {
    cout << "retirement time ";
  }

  return 0;
}*/
// nested loops
int main() {
  int age;
  cin >> age;
  if (age < 18) {
    cout << "not elgible for job";

  } else if (age <= 57) {
    cout << "eligible for job";
    if (age >= 55) {
      cout << ", retiremnt soon";
    }
  } else {
    cout << "retirement time ";
  }

  return 0;
}
