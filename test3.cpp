#include<iostream>
using namespace std;

int main(){
int outer=1;

while (outer<=5){

int inner=5;
while(inner>=1){
 if (inner>outer){

cout<<"  ";
}
else{
cout<<inner<<" ";
}
 inner--;

}
outer++;
cout<<"\n";
}
return 0;
}

