#include<iostream>
using namespace std;


int main(){

int outer=5;

while (outer>=1){
int inner=outer;
while(inner>=1){

cout<<inner<<" ";
inner--;
}

cout<<"\n";
outer--;
}

return 0;
}