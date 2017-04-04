#include <iostream>

using namespace std;

class Building
{
public:
	Building() {};
	Building(char* namer)
	{
		sprintf(name, namer);
	}

	const char* GetName()const
	{
		return name;
	}

protected:
	char name[100];
};

class House : public Building
{
public:
	House(const char* pname, int floor, int inhabitants, int servants): floor(floor), inhabitants(inhabitants), servants(servants)
	{
		sprintf(name, pname);
	}

	void printHouse()
	{
		cout << name << endl;
		cout << floor << endl;
		cout << inhabitants << endl;
		cout << servants << endl;
	}
private:
	int floor;
	int inhabitants;
	int servants;
};

void main()
{
	House h("Yo momma's house", 2, 4, 6);
	cout << "House no namae wa " << h.GetName() << " desu" << endl;
	h.printHouse();
	system("pause");
}