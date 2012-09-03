#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    string input = "";
    
    cout << endl << "CIRCLE CALCULATOR - Radius by Circumference" << endl << "This will calculate the radius of a circle based upon a given circumference." << endl;
    
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
                 
                 float c = 0;
                 float p = 3.141592654;
           
                 cout << endl << "Please enter the circumference of the circle: ";
                 cin >> c;
                 float A = c / (2 * p);
                 cout << "The radius of the circle is: " << A << endl;
                 }
}


