#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    string input = "";
    
    cout << endl << "CIRCLE CALCULATOR - Circumference by Diameter" << endl << "This will calculate the circumference of a circle based on a given diameter." << endl;
    
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
                 
                 float d = 0;
                 float p = 3.141592654;
           
                 cout << endl << "Please enter the diameter of the circle: ";
                 cin >> d;
                 float r = d / 2;
                 float A = 2 * p * r;
                 cout << "The circumference of the circle is: " << A << endl;
                 }
}
