// В процес на завършване 6/10
// Да се довърши:
// 1. Проверка на валута
// 2. Смяна на стойност на валута с нова

#include <iostream>
#include <vector>

#define START_MENU 0
#define CREATE_CURRENCY_MENU 1
#define MAX_MENUS 4
#define MAX_PARAMETERS 2
#define PARAMETER_NAME 0
#define PARAMETER_PRICE 1

using namespace std;

class Currency
{
private:
	double cost;

public:
	Currency(string, string);
	string currencyName;
	char getCurrencyName();
	double getCost();
	void changeCurrencyName(char name);
	void changeCost(double cost);
};
vector<Currency> currency;

class UserInterface
{
private:
	bool firstCommand = true;
	int currentMenu;
	string lastCommand;
	string parameters[MAX_PARAMETERS];
	string const menuName[MAX_MENUS] = {"Обратно към началното меню", "Създаване на нова валута", "Проверка на стойност на валута", "Смяна стойността на валута"};
	void sendMessage();
	void processCommand();
	void acceptComand(string);
	void selectNewMenu(int);
	void clearParameters();
	bool existsCurrency(string);

public:
	void startListen();
	void showStartMenu();

} userInterface;

bool isNumber(const string& s)
{
    for (char const &ch : s) {
        if (isdigit(ch) == 0) 
            return false;
    }
    return true;
 }

Currency :: Currency(string name, string value)
{
	this->currencyName = name;
	this->cost = stoi(value);
	cout << "Успешно беше създадена нова валута с име: " << name << " и стойност: " << value << endl;
}

bool UserInterface :: existsCurrency(string name)
{
	for(auto obj : currency)
	{
		if(obj.currencyName == name)
		{
			return true;
		}
	}
	return false;
}

void UserInterface :: sendMessage()
{
	switch(this->currentMenu)
	{
		case CREATE_CURRENCY_MENU:
		{
			cout << "Въведете два параметъра: име на валута(1) и стойност(2) " << endl;
		}
	}
}

void UserInterface :: clearParameters()
{
	for(int i=0; i<MAX_PARAMETERS; i++)
	{
		this->parameters[i] = "\0";
	}
}

void UserInterface :: selectNewMenu(int menu)
{
	this->currentMenu = menu;
	cout << "Вие избрахте ново меню: " << this->menuName[menu] << endl;
	userInterface.sendMessage();
}

void UserInterface :: processCommand()
{
	string command = this->lastCommand;
	switch(currentMenu)
	{
		case START_MENU:
		{
			int cmdInt = stoi(command);
			userInterface.selectNewMenu(cmdInt);
			break;
		}
		case CREATE_CURRENCY_MENU:
		{
			if(existsCurrency(this->parameters[PARAMETER_PRICE])) 
			{
				cout << "Вече съществува такава валута! Можеш само да й смениш името!" << endl;
				return;
			}
			cout << "Ти създаде нова валута с име: " << this->parameters[PARAMETER_NAME] << " и стойност: " << this->parameters[PARAMETER_PRICE] << endl;
			string price = this->parameters[PARAMETER_PRICE];
			if(!isNumber(price))
			{
				cout << "Трябва да въведеш число, вместо текст с букви за цена на валутата";
				return;
			}
			currency.push_back(Currency(this->parameters[PARAMETER_NAME], price));
		}
	}
}

void UserInterface :: acceptComand(string const command)
{
	this->clearParameters();
	if(this->firstCommand)
	{
		cout << "За да се върнеш обратно към началното меню, винаги можеш да напишеш 'BACK'" << endl;
		this->firstCommand = false;
	}
	switch(currentMenu)
	{
		case START_MENU:
		{
			if(!isdigit(command[0]))
			{
				cout << "Задължително трябва да изберете цифра, а не текст от букви!" << endl;
				return;
			}
			break;
		}
		case CREATE_CURRENCY_MENU:
		{
			cout << "Въведете два параметъра: име на валута(1) и стойност(2) " << endl;
			cin >> this->parameters[0];
			cin >> this->parameters[1];
			if(!isNumber(this->parameters[1]))
			{
				cout << "Задължително трябва да изберете число, а не текст от букви за параметър 2!" << endl;
				return;
			}
		}
	}

	if(command == "BACK") return this->showStartMenu();
	this->lastCommand = command;
	userInterface.processCommand();
}

void UserInterface :: startListen()
{
	string input;
	while(true)
	{
		getline(cin, input);
		acceptComand(input);
	}
}

void UserInterface :: showStartMenu()
{
	this->currentMenu = START_MENU;
	cout << endl << "______________ Здравей, използвай интерфейса, чрез написването на цифрите долу ______________\n";
	cout << "1: Създай нова валута\n";
	cout << "2: Провери стойността на валута\n";
	cout << "3: Смени стойността на валута\n";
	userInterface.startListen();
}

int main()
{
	setlocale(LC_ALL, "Bulgarian");	
	userInterface.showStartMenu();
	return 0;
}
