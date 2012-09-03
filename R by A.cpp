#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    string input = "";
    
    cout << endl << "CIRCLE CALCULATOR - Radius by Area" << endl << "This will calculate the radius of a circle based upon a given area." << endl;
    
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
                 
                 float A = 0;
                 float p = 3.141592654;
           
                 cout << endl << "Please enter the area of the circle: ";
                 cin >> A;
                 float r = sqrt (A / p);
                 cout << "The radius of the circle is: " << r << endl;
                 }
}


