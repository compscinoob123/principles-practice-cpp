//read and write your first name

#include "std_lib_facilities.h"

int main()
{
  cout<<"Please enter your first name (followed by 'enter'):\n";
  string first_name; //this sets aside an area of memory for holding a string and gives it the name 'first_name'
  cin>>first_name; //this is when the user types out his first name, allowing the computer to read it.
  cout<<"Hello, "<<first_name<<"!\n";
}

/*
39                          // int: an integer
3.5                         // double: a floating-point number
'.'                           // char: an individual character enclosed in single quotes
"Annemarie"      // string: a sequence of characters delimited by double quotes
true                      // bool: either true or false
*/


// read name and age 
int main()
{
          cout << "Please enter your first name and age\n";
          string first_name = "???";      // string variable
                                                            // ("???” means “don’t know the name”)
          int age = –1;         // integer variable (–1 means “don’t know the age”)
          cin >> first_name >> age;      // read a string followed by an integer
          cout << "Hello, " << first_name << " (age " << age << ")\n";
}

// simple program to exercise operators
int main()
{
          cout << "Please enter a floating-point value: ";
          double n;
          cin >> n;
          cout << "n == " << n
                    << "\nn+1 == " << n+1
                    << "\nthree times n == " << 3*n
                    << "\ntwice n == " << n+n
                    << "\nn squared == " << n*n
                    << "\nhalf of n == " << n/2
                    << "\nsquare root of n == " << sqrt(n)
                    << '\n';  // another name for newline (“end of line”) in output
}
