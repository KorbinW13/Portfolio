#include<iostream>
#include <fstream>
using namespace std;


int main()
{
	struct Info
	{
		char name[50];
		int age;
		
	};

	Info person;	
	cout << "enter your name ";
	cin.getline(person.name, 50);//user types "Bob"
	fstream people("people.txt", ios::out | ios::binary);
	people.write(reinterpret_cast<char *>(&person), sizeof(person));
	people.close();
    //Outputs
    //Bob
}




int main2()
{
	char ch;	// To hold a character

	fstream file("letters.txt", ios::in);
	file.seekg(8L, ios::beg);
	file.get(ch);
	cout << ch << endl;

	file.seekg(-4L, ios::end);
	file.get(ch);
	cout << ch << endl;

	file.seekg(3L, ios::cur);
	file.get(ch);
	cout << ch << endl;
    //Outputs
    //i
    //w
    //w
}
