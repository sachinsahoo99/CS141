//including library
#include <iostream>
using namespace std;
int main()
{

float literature, biology, geography, astrophysics, astronomy,total,average,percentage;

//DESCRIBING VALUES
cout << "Marks in literature"<<endl;
cin >> literature;
cout << "Marks in biology"<<endl;
cin >> biology; 
cout << "Marks in geography"<<endl;
cin >> geography;
cout <<"Marks in astrophysics"<<endl;
cin >> astrophysics;
cout << "Marks in astronomy"<<endl;
cin >> astronomy;

//APLLY FORMULA
total=literature+biology+geography+astrophysics+astronomy;
average= (total)/5;
percentage=average;
cout<<"Total is = "<<total<<endl;
cout<<"Average is = "<<average<<endl;
cout<<"Percentage is = "<<percentage<<"%"<<endl;

//lets dance
}
