#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    string input = "";
    
    cout << endl << "CIRCLE CALCULATOR - Circumference by Radius" << endl << "This will calculate the circumference of a circle based on a given radius." << endl;
    
    	short int choice = 0;

 while (true) {
   cout << "Press any key to continue: " << endl;
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Circle;
		}
	}
	
	Circle:
           
           while (true) {
                 
                 float r = 0;
                 float p = 3.141592654;
           
                 cout << endl << "Please enter the radius of the circle: ";
                 cin >> r;
                 float A = 2 * p * r;
                 cout << "The circumference of the circle is: " << A << endl;
                 }
}
