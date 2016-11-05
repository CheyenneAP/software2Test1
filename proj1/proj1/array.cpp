#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <cmath>
using namespace std;



class Test{
private:
	int stuNum;
	string name, sname, idNum;

public:
	Test();
	~Test();
	void Test::writeTextFile(string);
	void Test::readTextFile(string);
	void Test::rTextFile(string);
	void Test::createRec(int l, int array[], string);
	void Test::create(int l, string array[], string,string);

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



void Test::createRec(int l, int array[], string n){
	cout << n << endl;
	for (int i = 0; i < l; i++)
	{
		while (array[i]==NULL)
		{
			array[i] = stuNum;
		}
		
	}
}

void Test::create(int l, string array[], string n,string c ){
	cout << n << endl;
	for (int i = 0; i < l; i++)
	{
		while (array[i].compare(NULL)==0)
		{
			array[i] = c;

		}

	}
}




int main(){
	Test t, r;
	t.writeTextFile("Chey.txt");
	//r.readTextFile("Chey.txt");
	system("Pause");


}