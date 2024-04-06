#include<iostream>
using namespace std;
class hero{
public:
	int health;
	char level;
	void print();
};
void hero::print(){

		cout<<"Health : "<<health<<endl;
		cout<<"Level: "<<level<<endl;
			}


int main(){
hero ramesh;
ramesh.health=40;
ramesh.level='a';
ramesh.print();
}