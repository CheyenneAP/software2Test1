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
	template <typename Tmp>
	void Test::createRec(int l, Tmp array[], string);
	void Test::create(int l, string array[], string,string);

	template <typename Tmpl8>
	void Test::sortArr(Tmpl8 arr[], int);
	
	template <typename T>
	void disp(T arr[], int);
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




template <typename Tmp>
void Test::createRec(int l, Tmp array[], string n){
	cout << n << endl;
	for (int i = 0; i < l; i++)
	{
		while (array[i]==NULL)
		{
			array[i] = stuNum;
		}
		
	}
}




// create a sort function  to sort an array given the array  and the array size
template <typename Tmpl8>
void Test:: sortArr(Tmpl8 arr[], int arrSize){
	int i, j;
	Tmpl8 tempArr;
	for (i = 0; i < arrSize - 1; i++){

		for (j = i + 1; j < arrSize; j++){
			// if array at position i is less than array at position i+1
			if (arr[i] < arr[j]){


				// swap the numbers to sort the array in descending order
				tempArr = arr[j];
				arr[j] = arr[i];
				arr[i] = tempArr;
			}

		}

	}

}

// new template to display
template <typename T>
void:: Test disp(T arr[], int size) {
	for (int i = 0; i < size; i++){
		cout << arr[i] << endl;

	}
}




int main(){
	Test t, r;
	//t.writeTextFile("Chey.txt");
	//r.readTextFile("Chey.txt");
	system("Pause");


}