
#include <iostream>
#include <utility> // Include the header for the pair class
using namespace std;

int main() {
    std::cout << "Hello World!\n";
}

// stl -
//  algorithms
//  container
//  functions
//  iterators

// 1. pairs
void explainPair() {
    // 1.1 Single pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // 1.2 Storing multiple values using nesting
    pair<int, pair<int, int>> part = {1, {3, 4}};
    cout << part.first << " " << part.second.first << " " << part.second.second << endl;

    // 1.3 Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].first << " " << arr[1].second << endl;
}

// What is a Vector?
//  Vectors in STL are basically dynamic arrays that have the ability to change
//  size whenever elements are added or deleted from them. Vector elements can
//  be easily accessed and traversed using iterators. A vector stores elements
//  in contiguous memory locations.
Syntax : vector<object_type> variable_name;

example - 
  1)creates empty container 
  vector<int> v1;
vector<char> v2;
vector<string> v3;

// 2)push_back() – it accepts a parameter and insert the element passed in the
// parameter in the vectors, the element is inserted at the end.

v1.push_back(1);
v1.push_back(2);

// 3)emplace_back()-dynamically increases size and pushes 2 in th back,
// - emplace_back is a faster than push_back
.v1.emplace_back(2);

vector < pair<int, int> vec;
// keep in mind in pair u have to use curly braces for inserting in pushback and
// normal brackets in empalce back.
v1.push_back({1, 2});
v1.emplace_back(1, 2);

vector<int> v(5, 100);
// container with size 5 is already define
//  {100,100,100,100,100} with 5 instances of 100

vector<int> v1(5, 20);
vector<int> v2(v1); // copying into the other vector

// so v2 is copy of v1
// after this u can use pushback to increase the size of v2

// how do u excess elements in a vector?
method 1 - cout << v[1] << endl;
method 2 - using iterators

               vector<int>::iterator it = v.begin();
it++;
cout << *(it) << " "; // in order to access memory u have to use *.

// begin() – it returns an iterator pointing to the first element of the
// vector.it points to the memory .

// end() – it returns an iterator pointing to the element theoretically after
// the last element of the vector.
it = it + 2;
cout << *(it) << " ";

vector<int>::iterator it = v.end();
// very imp -
//     end points ot the memory location that is right side at the last eloement
//     so
//         to exess last element u have to do it--
// reverse rend and rbegin never used
vector<int>::iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

// back() – it returns a reference to the last element of the vector.

// print vector form - {10, 20, 30}

for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
  cout << *(it) << " ";
}

// shortcut no one wants to write long syntaxes - auto -> it automatically
// defines the datatype according to data.
for (auto it = v.begin(); it != v.end(); it++)) {
  cout << *(it) << " ";
}


//erase() – it is used to delete a specific element


