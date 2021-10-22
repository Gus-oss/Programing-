#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 
int main(){
float x1,x2,y1,y2,m;

cout <<"introduce el valor Y1   \n";
cin >> y1;
cout <<"introduce el valor Y2   \n";
cin >> y2;
cout <<"introduce el valor X1   \n";
cin >> x1;
cout <<"introduce el valor X2   \n";
cin >> x2;

m=(y2-y1)/(x2-x1);

cout << "no seas flojo pero el resultado es"<< m << "\n";

system("PAUSE");
return 0;

}

