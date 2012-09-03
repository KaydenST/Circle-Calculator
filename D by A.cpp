#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    string input = "";
    
    cout << endl << "CIRCLE CALCULATOR - Diameter by Area" << endl << "This will calculate the diameter of a circle based upon a given area." << endl;
    
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
                 
                 float a = 0;
                 float p = 3.141592654;
           
                 cout << endl << "Please enter the area of the circle: ";
                 cin >> a;
                 float b = a / p;
                 float z = sqrt (b);
                 float x = z * 2;
                 cout << "The diameter of the circle is: " << x << endl;
                 }
}


