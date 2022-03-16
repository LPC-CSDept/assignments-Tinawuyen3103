#include <iostream>
using namespace std;

int main() 
{
 int choices;
 double radius, length, width, base, height;
  cout<<"1. Calculate the Area of a Circle\n";
  cout<<"2. Calculate the Area of a Rectangle\n";
  cout<<"3. Calculate the Area of a Triangle\n";
  cout<<"4. Quit\n\n";
  cout<<"Enter your choice (1-4)\n";
  cin >> choices;
  
  double area1 = 3.14159*(radius*radius);
  double area2 = length*width;
  double area3 = base*height*0.5;
  
 switch(choices)
    {
    case 1:
    cout << "Enter the radius: " << endl;
    cin >> radius;
      cout<<"The area of the circle is: " << area1 << "\n";
      break;
    case 2:
    cout << "Enter the length and width of the rectangle: " << endl;
    cin >> length >> width;
      cout<<"The area of the rectangle is: " << area2 << "\n";
      break;
    case 3:
    cout << "Enter the base and height of the triangle: " << endl;
    cin >> base >> height;
      cout<<"The area of the triangle is: " << area3 << "\n";
      break;
    case 4:
      cout<<"Quit\n";
      break;
    default:
      cout<<"error\n";
      return 0;
    
      
      }  
  }