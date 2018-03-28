#include <time.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;


void end(int& c);
char val[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
int c;
string mess;
string file;

ifstream  p_one;
ifstream p_two;


int main(){
srand(time(NULL));
cout<<"Enter the name of the file you wish to load: \n";
cin<<file

if (file=="onepad.txt"){
	p_one.open("onepad.txt");
	if(p_one.fail()){cout << "Unable to open file onepad.txt" << endl; exit(1);}

else if (file=="twopad.txt"){
	p_one.open("twopad.txt");
	if(p_two.fail()){cout << "Unable to open file twopad.txt" << endl; exit(1);}
	}
	
cout<<"Enter your message: \n";
cin>> mess;
//cout<<"the thing you typed is: "<< mess << endl;
for (int k =0; k<=27; k++){
	
}
/*for (int i=1;i<=10;i++){
	for(int j=1;j<=50;j++){
		end(c);
		cout<<val[c];
	}
	cout << endl;*/
}
p_one.close();
p_two.close();
return 0;
}

void end(int& c) {
c = rand() % 27 + 1;
}