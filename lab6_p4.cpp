#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i,j,rows;
    
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=rows;i>=1;i--)
   {
	for(j=1;j<=i;j++)
	   cout<<'*';
	cout<<endl;
   }	
}