#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char** argv) {
int a;
int b;
	
cin>>a;
cin>>b;
	
cout<<"a= "<<bitset<8>(a).to_string()<<"\n";
cout<<"b= "<<bitset<8>(b).to_string()<<"\n";

	cout<<"a|b= "<<bitset<8>(a|b).to_string()<<"\n";
	cout<<"a&b= "<<bitset<8>(a&b).to_string()<<"\n";
	cout<<"a^b= "<<bitset<8>(a^b).to_string()<<"\n";
	cout<<"~a= "<<bitset<8>(~a).to_string()<<"\n";
	cout<<"~b= "<<bitset<8>(~b).to_string()<<"\n";
	cout<<"a<<=4 "<<bitset<8>(a<<=4).to_string()<<"\n";
	cout<<"b>>=1 "<<bitset<8>(b>>=1).to_string()<<"\n";
return 0;
}
