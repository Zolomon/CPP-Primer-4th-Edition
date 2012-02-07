class PhoneNumber
{
public:
	PhoneNumber(string &areaCode, string &number);
	~PhoneNumber();

	string ac;
	string nbr;
};

class Address
{
public:
	Address(string areaCode, string streetAddress, string zipCode, string municipality, string country);
	~Address();

	string ac;
	string addr;
	string zip;
	string muni;
	string ctry;
};

class Employee
{
public:
	Employee(string name, string occupation, string pid, int salary);
	~Employee();

	string name;
	string occupation;
	string pid;
	int salary;
};

class Student
{
public:
	Student(string name, string pid, vector<string> courses, vector<string> completedCourses);
	~Student();

	string name;
	string pid;
	vector<string> c;
	vector<string> cc
};