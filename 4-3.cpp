#include <iostream>
using namespace std;

int main() 
{
 int selections;
  cout<<"Which formula do you want to see?\n\n";
  cout<<"1. Area of a circle\n";
  cout<<"2. Area of a rectangle\n";
  cout<<"3. Area of a cylinder\n";
  cout<<"4. None of them\n";
  cin>>selections;
  switch(selections)
    {
    case 1:
      cout<<"Pi times radius squared\n";
      break;
    case 2:
      cout<<"length times width\n";
      break;
    case 3:
      cout<<"Pi time radius squared times height\n";
      break;
      case 4:
      cout<<"Well okay then, good bye\n";
      break;
      default:
      cout<<"Not good with number,eh?\n";
      return 0;
    
      
      }  
  }