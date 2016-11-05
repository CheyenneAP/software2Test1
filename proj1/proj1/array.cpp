#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <cmath>
using namespace std;



class Test{
private:


public:
	Test();
	~Test();
	void Test::writeTextFile(string);
	void Test::readTextFile(string);
	void Test::rTextFile(string);

};


//  default constructor 
Test::Test(){

}
// default destructor 
Test::~Test(){

}

void Test::writeTextFile(string link){
	ofstream myFile(link);

	if (myFile){
		myFile << "I love Roses and chedders.\n i love oreos.  " << endl;
		myFile.close();
	}
	else{
		cout << "File does not exist" << endl;
	}

}

void Test::readTextFile(string link){

	ifstream rFile;
	rFile.open(link);
	char output[100];
	if (rFile && rFile.is_open())
	{

		while (!rFile.eof())
		{

			rFile >> output;
			cout << output << " ";
		}
		rFile.close();
	}

}


class Rec{

private:
public:

};


int main(){
	Test t, r;
	t.writeTextFile("Chey.txt");
	//r.readTextFile("Chey.txt");
	system("Pause");


}