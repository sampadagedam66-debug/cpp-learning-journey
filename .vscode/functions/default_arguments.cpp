
#include <iostream>
using namespace std;

// Function with default arguments
void studentDetails(string name, int age = 18, string course = "Computer Engineering")
{
    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
}

int main()
{
    // Using all default arguments
    studentDetails("Rahul");

    // Overriding the default age
    studentDetails("Priya", 20);

    // Overriding all default arguments
    studentDetails("Amit", 21, "Information Technology");

    return 0;
}
