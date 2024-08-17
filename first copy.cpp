#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){

string mystr;
float price=0;
int quantity=0;

cout<<"Enter the price: ";
getline(cin,mystr);
stringstream(mystr)>>price;


cout<<"Enter the quantity: ";
getline(cin,mystr);
stringstream(mystr)>>quantity;

cout<<price<<quantity;
return 0;

}