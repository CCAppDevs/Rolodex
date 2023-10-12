#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person Jesse = Person("Jesse", "Harlan", 41);
    Person Sarah = Person("Sarah", "Harlan", 38);
    Person Third = Person();

    Jesse.Phone = "555-1212";
    Sarah.Phone = "555-1313";

    Third.SetAge(175);

    cout << "The first user is: " << Jesse.ToString() << "\n";
    cout << "The second user is: " << Sarah.ToString() << "\n";
    cout << "The third user is: " << Third.ToString() << "\n";
}
