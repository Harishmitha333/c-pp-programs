#include <iostream>
using namespace std;
int main()
{
  int length, breadth;
  cin>>length>>breadth;
  int ropeLength = 2*(length+breadth);
  int carpetArea = length*breadth;
  cout<<ropeLength<<endl;
  cout<<carpetArea<<endl;
    return 0;
}