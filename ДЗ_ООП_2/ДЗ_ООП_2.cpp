#include <iostream>
using namespace std;


class Contact
{
	char* Name;
	char* LastName;
	char* Surname;
	int HomePhoneNumber;
	int WorkPhoneNumber;
	int PersonalPhoneNumber;
	int Age;

public:
	Contact() {//Конструктор без параметров 

		Name = nullptr;
		LastName = nullptr;
		Surname = nullptr;
		HomePhoneNumber = 0;
		WorkPhoneNumber = 0;
		PersonalPhoneNumber = 0;
		Age = 0;
	}

	Contact(const char* name, const char* lastName, const char* surname,int homePhoneNumber, int workPhoneNumber,int personalPhoneNumber, int age) {//Конструктор с параметрами 

		Name = new char[strlen(name) + 1];
		strcpy_s(Name, strlen(name) + 1, name);

		LastName = new char[strlen(lastName) + 1];
		strcpy_s(LastName, strlen(lastName) + 1, lastName);

		Surname = new char[strlen(surname) + 1];
		strcpy_s(Surname, strlen(surname) + 1, surname);

		HomePhoneNumber = homePhoneNumber;
		WorkPhoneNumber = workPhoneNumber;
		PersonalPhoneNumber = personalPhoneNumber;
		Age = age;
	}

	void SetName(const char* name)
	{
		Name = new char[strlen(name) + 1];
		strcpy_s(Name, strlen(name) + 1, name);
	}

	void SetLastName(const char* lastName)
	{

		LastName = new char[strlen(lastName) + 1];
		strcpy_s(LastName, strlen(lastName) + 1, lastName);
	}
	
	void SetSurname(const char* surname)
	{

		Surname = new char[strlen(surname) + 1];
		strcpy_s(Surname, strlen(surname) + 1, surname);
	}

	void SetWorkPhoneNumber(int workPhoneNumber)
	{
		WorkPhoneNumber = workPhoneNumber;
	}

	void SetHomePhoneNumber(int homePhoneNumber)
	{
		HomePhoneNumber = homePhoneNumber;
	}

	void SetPersonalPhoneNumber(int personalPhoneNumber)
	{
		PersonalPhoneNumber = personalPhoneNumber;
	}
	void SetAge(int age)
	{
		Age = age;
	}


	void SetName()
	{
		if (Name != nullptr)
		{
			delete[] Name;
		}

		cout << "Enter name: ";
		char tempName[30];
		cin >> tempName;
		Name = new char[strlen(tempName) + 1];
		strcpy_s(Name, strlen(tempName) + 1, tempName);
	}

	void SetLastName()
	{

		if (LastName != nullptr)
		{
			delete[] LastName;
		}

		cout << "Enter last name: ";
		char tempLastName[30];
		cin >> tempLastName;
		LastName = new char[strlen(tempLastName) + 1];
		strcpy_s(LastName, strlen(tempLastName) + 1, tempLastName);
	}

	void SetSurname()
	{
		if (Surname != nullptr)
		{
			delete[] Surname;
		}

		cout << "Enter surname: ";
		char tempSurname[30];
		cin >> tempSurname;
		Surname = new char[strlen(tempSurname) + 1];
		strcpy_s(Surname, strlen(tempSurname) + 1, tempSurname);
	}


	void SetHomePhoneNumber() {


		cout << "Enter home phone number: ";
		cin >> HomePhoneNumber;
	
	}

	void SetWorkPhoneNumber() {

		cout << "Enter work phone number: ";
		cin >> WorkPhoneNumber;
	}

	void SetPersonalPhoneNumber() {

		cout << "Enter personal phone number: ";
		cin >> PersonalPhoneNumber;
	}

	void SetAge()
	{
		cout << "Enter age: ";
		cin >> Age;
	}

	void Output()
	{
		if (Name == nullptr || LastName == nullptr || Surname == nullptr)
		{
			cout << "Empty object!\n";
			return;
		}

		cout << "Name: " << Name << endl
			<< "Last Name: " << LastName << endl
			<< "Surname: " << Surname << endl
			<< "Home phone number: " << HomePhoneNumber << endl
			<< "Work phone number: " << WorkPhoneNumber << endl
			<< "Personal phone number: " << PersonalPhoneNumber << endl
			<< "Age: " << Age << endl
			<< endl;
	}


	~Contact() {//Диструктор 

		delete[] Name;
		delete[] LastName;
		delete[] Surname;
	}
};


int main()
{
	Contact person;

	const int size = 2;
	Contact* arr = new Contact[size];

	for (int i = 0; i < size; i++) {
		cout << "------Enter info for " << i+1 << " persone:------\n";
		arr[i].SetName();
		arr[i].SetLastName();
		arr[i].SetSurname();
		arr[i].SetHomePhoneNumber();
		arr[i].SetWorkPhoneNumber();
		arr[i].SetPersonalPhoneNumber();
		arr[i].SetAge();//в качестве другой информации ыозраст 
	}

	cout << "\n\n";

	for (int i = 0; i < size; i++)//вывод всей информации
	{
		cout<<"------Info about " << i + 1 << " persone:------\n";
		arr[i].Output();
	}

	delete[] arr;
	return 0;
}

