#include <iostream>
#include <string.h>


using namespace std;

struct capability
{
	unsigned short level = 0;
	unsigned short life = 100;
	unsigned short strength = 0;
	unsigned short agility = 0;
	unsigned short speed = 0;
};

// functions ///////////////////////////////

//name
void setName(char*);
char* getName(char*);
void printName(char*);
//disciples
void setDisciples(unsigned short*);
unsigned short getDisciples(unsigned short);
void printDisciples(unsigned short);
//clan name
void setClanName(char*);
char* getClanName(char*);
void printClanName(char*);
//weapons
unsigned short getNumWeapons(unsigned short);
void setWeapon(char*,unsigned short*);
void hasWeapon(char*,unsigned short);
void printAvailableWeapons(unsigned short);
//animals
unsigned short getNumAnimals(unsigned short);
void setAnimal(char*, unsigned short*);
void hasAnimal(char*, unsigned short);
void printAvailableAnimals(unsigned short);
//tournament
void registerNextTournament(bool*);
bool isRegisteredNextTournament(bool);
void printRegisterStatus(bool);
//capabilities
void setLevel(capability*);
void incLevel(capability*);
void decLevel(capability*);

void setStrength(capability*);
void incStrength(capability*);
void decStrength(capability*);

void setAgility(capability*);
void incAgility(capability*);
void decAgility(capability*);

void setSpeed(capability*);
void incSpeed(capability*);
void decSpeed(capability*);

void setAll(capability*);
void incAll(capability*);
void decAll(capability*);


int main()
{
		//player
	char* name = new char[10];	
	*name = NULL;
		//disciples
	unsigned short disciples = 0;
	unsigned short* disciplesPointer = &disciples;
		//clan
	char* clanName = new char[20];
	*clanName = NULL;
		//weapons
	char weaponName[20];	
	unsigned short weapons = 0;
	unsigned short numWeapons = 0;
		//animals
	char animalName[10];
	unsigned short animals = 0;
	unsigned short numAnimals = 0;
		//tournament
	bool registered = 0;
		//capabilities
	capability capabilites;
	capability* capabilitiesP;
	capabilitiesP = &capabilites;
		//menus
	bool menu1 = true;  //for buckles
	bool menu2 = true;
	unsigned short menu1option = 0;  //for answers
	unsigned short menu2option = 0;

	/// MENU 1/ ///////////////////////////
	while (menu1==true)
	{
		menu2 = true;
		system("CLS");
		std::cout << "\n*** WELCOME TO MyBRUTO ************************** Esteban Marin\n" << endl;

		std::cout << "1 - Set player name.\t\t" << "12 - Set weapon." << endl;
		std::cout << "2 - Get player name.\t\t" << "13 - Has weapon." << endl;
		std::cout << "3 - Print player name.\t\t" << "14 - Print weapons." << endl;
		std::cout << "4 - Set disciples.\t\t" << "15 - Get number of animals." << endl;
		std::cout << "5 - Get disciples.\t\t" << "16 - Set animal." << endl;
		std::cout << "6 - Print disciples.\t\t" << "17 - Has animal." << endl;
		std::cout << "7 - Set Clan name.\t\t" << "18 - Print animals." << endl;
		std::cout << "8 - Get Clan name.\t\t" << "19 - Resgister next tournament." << endl;
		std::cout << "9 - Print Clan name.\t\t" << "20 - Get resgister status." << endl;
		std::cout << "10- Set Capabilities.\t\t" << "21 - Print resgister status." << endl;
		std::cout << "11- Get number of weapons.\t" << "22 - Quit." << endl;
		std::cout << "\nOption: ";
		std::cin >> menu1option;

		switch (menu1option)
		{
		case 1:
			setName(name);
			break;
		case 2:
			getName(name);
			break;
		case 3:
			printName(name);
			break;
		case 4:
			setDisciples(&disciples);
			break;
		case 5:
			getDisciples(disciples);
			break;
		case 6:
			printDisciples(disciples);
			break;
		case 7:
			setClanName(clanName);		
			break;
		case 8:
			getClanName(clanName);		
			break;
		case 9:
			printClanName(clanName);
			break;
		case 10:
			while (menu2 == true)
			{
				system("CLS");
				std::cout << "\n*** WELCOME TO MyBRUTO ************************** Esteban Marin\n" << endl;

				std::cout << "1 - Set level.\t\t\t" << "9 - Decrease agility." << endl;
				std::cout << "2 - Increase level.\t\t" << "10- Set number of speed." << endl;
				std::cout << "3 - Decrease level.\t\t" << "11- Increase speed." << endl;
				std::cout << "4 - Set strength.\t\t" << "12- Decrease speed." << endl;
				std::cout << "5 - Increase strength.\t\t" << "13- Set all capabilities." << endl;
				std::cout << "6 - Decrease strength.\t\t" << "14- Increase all capabilities." << endl;
				std::cout << "7 - Set agility.\t\t" << "15- Decrease all capabilities." << endl;
				std::cout << "8 - Increase agility.\t\t" << "16- Back menu." << endl;
				
				std::cout << "\nOption: ";
				std::cin >> menu2option;

				switch (menu2option)
				{
				case 1:
					setLevel(capabilitiesP);	
					system("pause");
					break;
				case 2:
					incLevel(capabilitiesP);
					system("pause");
					break;
				case 3:
					decLevel(capabilitiesP);
					system("pause");
					break;
				case 4:
					setStrength(capabilitiesP);	
					system("pause");
					break;
				case 5:
					incStrength(capabilitiesP);
					system("pause");
					break;
				case 6:
					decStrength(capabilitiesP);
					system("pause");
					break;
				case 7:
					setAgility(capabilitiesP);
					system("pause");
					break;
				case 8:
					incAgility(capabilitiesP);
					system("pause");
					break;
				case 9:
					decAgility(capabilitiesP);
					system("pause");
					break;
				case 10:
					setSpeed(capabilitiesP);
					system("pause");
					break;
				case 11:
					incSpeed(capabilitiesP);
					system("pause");
					break;
				case 12:
					decSpeed(capabilitiesP);
					system("pause");
					break;
				case 13:
					setAll(capabilitiesP);	
					system("pause");
					break;
				case 14:
					incAll(capabilitiesP);
					system("pause");
					break;
				case 15:
					decAll(capabilitiesP);
					system("pause");
					break;
				case 16:
					menu2 = false;
					break;
				default:
					cout << "Your option must be 1-16!";
					system("pause");
				}	
			}
			break;
		case 11:
			numWeapons = getNumWeapons(weapons);
			break;
		case 12:
			cout << "Name of weapon? ";
			cin >> weaponName;
			setWeapon(weaponName, &weapons);
			break;
		case 13:
			cout << "Name of weapon? ";
			cin >> weaponName;
			hasWeapon(weaponName, weapons);
			break;
		case 14:
			printAvailableWeapons(weapons);
			break;
		case 15:
			numAnimals = getNumAnimals(animals);
			break;
		case 16:
			cout << "Name of animal? ";
			cin >> animalName;
			setAnimal(animalName, &animals);
			break;
		case 17:
			cout << "Name of animal? ";
			cin >> animalName;
			hasAnimal(animalName, animals);
			break;
		case 18:
			printAvailableAnimals(animals);
			break;
		case 19:
			registerNextTournament(&registered);
			break;
		case 20:
			isRegisteredNextTournament(registered);
			break;
		case 21:
			printRegisterStatus(registered);
			break;
		case 22:
			menu1 = false;
			break;
		default:
			cout << "Wrong input! Your option must be 1-22.";
		}
		system("pause");
	}
	
	cout << "QUIT";

	////////////////////////////////////////
	
	
	
	/*
	

	

	

	

	*/
	
	getchar();

	return 0;
}

//name
void setName(char* name)
{
	cout << "Name: ";
	cin >> name;
}
char* getName(char* name)
{
	cout << name << " returned as char*" << endl;
	return name;
}
void printName(char* name)
{
	cout << "Your name is " << name << endl;
}

//disciples
void setDisciples(unsigned short* disciples)
{
	unsigned short numberDisciples = 0;
	cout << "Number of disciples? ";
	cin >> numberDisciples;
	*disciples = numberDisciples;
}
unsigned short getDisciples(unsigned short disciples)
{
	cout << disciples << " returned as unsigned short" << endl;
	return disciples;
}
void printDisciples(unsigned short disciples)
{
	cout << disciples << " disciples.\n";
}

//Clan name
void setClanName(char* clanName)                                   /////// strings with espaces should be better
{
	cout << "Clan name: ";
	cin >> clanName;
}                         
char* getClanName(char* clanName)
{
	cout << clanName << " returned as char*" << endl;
	return clanName;
}
void printClanName(char* clanName)
{
	cout << "Your clan's name is " << clanName << endl;
}

//weapons
unsigned short getNumWeapons(unsigned short weapons)              /////// sum operator should be better
{
	unsigned short counter = 0;

	for (int i = 0; i < 16; i++)
	{
		if ((weapons >> i) & 0x0001)
		{
			counter++;
		}
	}
	cout << counter << " returned as unsigned short" << endl;
	return counter;
}           
void setWeapon(char* weaponName, unsigned short* weapons)          /////// strings with espaces should be better
{
	///////////StoneHammer///////////
	if (strcmp(weaponName, "StoneHammer") == 0)
	{
		if (*weapons & 0x0001)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0001;
		}
	}
	///////////Baton///////////
	else if (strcmp(weaponName, "Baton") == 0)
	{
		if ((*weapons & 0x0002) >> 1)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0002;
		}
	}
	///////////BROADSWORD///////////
	else if(strcmp(weaponName, "Broadsword") == 0)
	{
		if ((*weapons & 0x0004) >> 2)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0004;
		}
	}
	///////////Bumps///////////
	else if (strcmp(weaponName, "Bumps") == 0)
	{
		if ((*weapons & 0x0008) >> 3)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0008;
		}
	}
	///////////Keyboard///////////
	else if (strcmp(weaponName, "Keyboard") == 0)
	{
		if ((*weapons & 0x0010) >> 4)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0010;
		}
	}
	///////////Knife///////////
	else if (strcmp(weaponName, "Knife") == 0)
	{
		if ((*weapons & 0x0020) >> 5)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0020;
		}
	}
	///////////MorningStar///////////
	else if (strcmp(weaponName, "MorningStar") == 0)
	{
		if ((*weapons & 0x0040) >> 6)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0040;
		}
	}
	///////////Lance///////////
	else if (strcmp(weaponName, "Lance") == 0)
	{
		if ((*weapons & 0x0080) >> 7)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0080;
		}
	}
	///////////MammothBone///////////
	else if (strcmp(weaponName, "MammothBone") == 0)
	{
		if ((*weapons & 0x0100) >> 8)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0100;
		}
	}
	///////////Shuriken///////////
	else if (strcmp(weaponName, "Shuriken") == 0)
	{
		if ((*weapons & 0x0200) >> 9)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0200;
		}
	}
	///////////NoodleBowl///////////
	else if (strcmp(weaponName, "NoodleBowl") == 0)
	{
		if ((*weapons & 0x0400) >> 10)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0400;
		}
	}
	///////////PiouPiouz///////////
	else if (strcmp(weaponName, "PiouPiouz") == 0)
	{
		if ((*weapons & 0x0800) >> 11)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x0800;
		}
	}
	///////////SWORD///////////
	else if (strcmp(weaponName, "Sword") == 0)
	{
		if ((*weapons & 0x1000) >> 12)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x1000;
		}
	}
	///////////TennisRacket///////////
	else if (strcmp(weaponName, "TennisRacket") == 0)
	{
		if ((*weapons & 0x2000) >> 13)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x2000;
		}
	}
	///////////Trident///////////
	else if (strcmp(weaponName, "Trident") == 0)
	{
		if ((*weapons & 0x4000) >> 14)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x4000;
		}
	}


	///////////Trombone///////////
	else if (strcmp(weaponName, "Trombone") == 0)
	{
		if ((*weapons & 0x8000) >> 15)
		{
			cout << "You have " << weaponName << " already.\n";
		}
		else
		{
			*weapons = *weapons | 0x8000;
		}
	}

	/////////WRONG NAME////////////

	else
	{
		cout << "That name does not exists.\n";
	}
}
void hasWeapon(char* weaponName, unsigned short weapons)
{
	///////////StoneHammer///////////
	if (strcmp(weaponName, "StoneHammer") == 0)
	{
		if (weapons & 0x0001)
		{
			std::cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Baton///////////
	else if (strcmp(weaponName, "Baton") == 0)
	{
		if ((weapons & 0x0002) >> 1)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////BROADSWORD///////////
	else if (strcmp(weaponName, "Broadsword") == 0)
	{
		if ((weapons & 0x0004) >> 2)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Bumps///////////
	else if (strcmp(weaponName, "Bumps") == 0)
	{
		if ((weapons & 0x0008) >> 3)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Keyboard///////////
	else if (strcmp(weaponName, "Keyboard") == 0)
	{
		if ((weapons & 0x0010) >> 4)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Knife///////////
	else if (strcmp(weaponName, "Knife") == 0)
	{
		if ((weapons & 0x0020) >> 5)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////MorningStar///////////
	else if (strcmp(weaponName, "MorningStar") == 0)
	{
		if ((weapons & 0x0040) >> 6)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Lance///////////
	else if (strcmp(weaponName, "Lance") == 0)
	{
		if ((weapons & 0x0080) >> 7)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////MammothBone///////////
	else if (strcmp(weaponName, "MammothBone") == 0)
	{
		if ((weapons & 0x0100) >> 8)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Shuriken///////////
	else if (strcmp(weaponName, "Shuriken") == 0)
	{
		if ((weapons & 0x0200) >> 9)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////NoodleBowl///////////
	else if (strcmp(weaponName, "NoodleBowl") == 0)
	{
		if ((weapons & 0x0400) >> 10)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////PiouPiouz///////////
	else if (strcmp(weaponName, "PiouPiouz") == 0)
	{
		if ((weapons & 0x0800) >> 11)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////SWORD///////////
	else if (strcmp(weaponName, "Sword") == 0)
	{
		if ((weapons & 0x1000) >> 12)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////TennisRacket///////////
	else if (strcmp(weaponName, "TennisRacket") == 0)
	{
		if ((weapons & 0x2000) >> 13)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Trident///////////
	else if (strcmp(weaponName, "Trident") == 0)
	{
		if ((weapons & 0x4000) >> 14)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	///////////Trombone///////////
	else if (strcmp(weaponName, "Trombone") == 0)
	{
		if ((weapons & 0x8000) >> 15)
		{
			cout << "You have " << weaponName << "\n";
		}
		else
		{
			std::cout << "You have not " << weaponName << "\n";
		}
	}
	/////////WRONG NAME////////////
	else
	{
		cout << "That name does not exists.\n";
	}
}
void printAvailableWeapons(unsigned short weapons)
{
	if (weapons != 0)
	{
		cout << "Your weapons:\n";
		for (int i = 0; i < 16; i++)
		{
			if (weapons & 0x0001)
			{
				if (i == 0)
				{
					cout << "-Stone Hammer.\n";
				}	
				if (i == 1)
				{
					cout << "-Baton.\n";
				}
				if (i == 2)
				{
					cout << "-BroadSword.\n";
				}
				if (i == 3)
				{
					cout << "-Bumps.\n";
				}
				if (i == 4)
				{
					cout << "-Keyboard.\n";
				}
				if (i == 5)
				{
					cout << "-Knife.\n";
				}
				if (i == 6)
				{
					cout << "-Morning Star.\n";
				}
				if (i == 7)
				{
					cout << "-Lance.\n";
				}
				if (i == 8)
				{
					cout << "-Mammoth's Bone.\n";
				}
				if (i == 9)
				{
					cout << "-Shuriken.\n";
				}
				if (i == 10)
				{
					cout << "-Noodle Bowl.\n";
				}
				if (i == 11)
				{
					cout << "-Piou-Piouz.\n";
				}
				if (i == 12)
				{
					cout << "-Sword.\n";
				}
				if (i == 13)
				{
					cout << "-Tennis Racket.\n";
				}
				if (i == 14)
				{
					cout << "-Trident.\n";
				}
				if (i == 15)
				{
					cout << "-Trombone.\n";
				}
			}
			weapons = weapons >> 1;
		}
	}
	else
	{
		cout << "You have no weapons.\n";
	}
}

//animals
unsigned short getNumAnimals(unsigned short animals)
{
	unsigned short counter = 0;

	for (int i = 0; i < 3; i++)
	{
		if ((animals >> i) & 0x0001)
		{
			counter++;
		}
	}
	cout << counter << " returned as unsigned short" << endl;
	return counter;
}
void setAnimal(char* animalName, unsigned short* animals)
{
	///////////DOG///////////
	if (strcmp(animalName, "Dog") == 0)
	{
		if (*animals & 0x0001)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			*animals = *animals | 0x0001;
		}
	}

	///////////WOLF///////////
	else if (strcmp(animalName, "Wolf") == 0)
	{
		if ((*animals & 0x0002) >> 1)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			*animals = *animals | 0x0002;
		}
	}

	///////////BEAR///////////
	else if (strcmp(animalName, "Bear") == 0)
	{
		if ((*animals & 0x0004) >> 2)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			*animals = *animals | 0x0004;
		}
	}

	/////////WRONG NAME////////////
	else
	{
		cout << "That name does not exists.\n";
	}
}
void hasAnimal(char* animalName, unsigned short animals)
{
	///////////DOG///////////
	if (strcmp(animalName, "Dog") == 0)
	{
		if (animals & 0x0001)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			cout << "You don't have " << animalName << ".\n";
		}
	}

	///////////WOLF///////////
	else if (strcmp(animalName, "Wolf") == 0)
	{
		if ((animals & 0x0002) >> 1)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			cout << "You don't have " << animalName << ".\n";
		}
	}

	///////////BEAR///////////
	else if (strcmp(animalName, "Bear") == 0)
	{
		if ((animals & 0x0004) >> 2)
		{
			cout << "You have " << animalName << " already.\n";
		}
		else
		{
			cout << "You don't have " << animalName << ".\n";
		}
	}

	/////////WRONG NAME////////////
	else
	{
		cout << "That name does not exists.\n";
	}
}
void printAvailableAnimals(unsigned short animals)
{
	if (getNumAnimals != 0)
	{
		cout << "Your animals:\n";
		for (int i = 0; i < 3; i++)
		{
			if (animals & 0x0001)
			{
				if (i == 0)
				{
					cout << "-Dog.\n";
				}
				if (i == 1)
				{
					cout << "-Wolf.\n";
				}
				if (i == 2)
				{
					cout << "-Bear.\n";
				}
				
			}
			animals = animals >> 1;
		}
	}
	else
	{
		cout << "You have no animals.\n";
	}
}

//tournament
void registerNextTournament(bool* registered)
{
	if (*registered)
	{
		cout << "You are registered already.\n";
	}
	else
	{
		cout << "Registered.\n";
		*registered = true;
	}
}
bool isRegisteredNextTournament(bool registered)
{
	if (registered == true)
	{
		cout << "Bool(true) returned.\n";
	}
	else
	{
		cout << "Bool(false) returned.\n";
	}
	return registered;
}
void printRegisterStatus(bool registered)
{
	cout << "Next Tournament Status:\n";

	if (registered)
	{
		cout << "-Registered.\n";
	}
	else
	{
		cout << "-Not registered.\n";
	}
}

// capabilites /////////////////////////////////////////////

//level
void setLevel(capability* capabilitiesP)
{
	short filter;
	cout << "Set level(0-100): ";
	cin >> filter;

	if ((filter >= 0) && (filter <= 100))
	{
		capabilitiesP->level = filter;
		cout << "Your level is " << capabilitiesP->level << " now.\n";
	}
	else
	{
		cout << "You can't set this number (try 0-100).\n";
	}
}
void incLevel(capability* capabilitiesP)
{
	short filter;
	cout << "Increment by(Max total 100): ";
	cin >> filter;

	if (((filter + capabilitiesP->level) >= 0) && ((filter + capabilitiesP->level) <= 100))
	{
		capabilitiesP->level += filter;
		cout << "Your level is " << capabilitiesP->level << " now.\n";
	}
	else
	{
		cout << "You can't increment(total must be 0-100).\n";
	}
}
void decLevel(capability* capabilitiesP)
{
	short filter;
	cout << "Decrement by(Min total 0): ";
	cin >> filter;

	if (((capabilitiesP->level - filter) >= 0) && ((capabilitiesP->level - filter) <= 100))
	{
		capabilitiesP->level -= filter;
		cout << "Your level is " << capabilitiesP->level << " now.\n";
	}
	else
	{
		cout << "You can't decrement(total must be 0-100).\n";
	}
}
//strength
void setStrength(capability* capabilitiesP)
{
	short filter;
	cout << "Set strength(0-100): ";
	cin >> filter;

	if ((filter >= 0) && (filter <= 100))
	{
		capabilitiesP->strength = filter;
		cout << "Your strength is " << capabilitiesP->strength << " now.\n";
	}
	else
	{
		cout << "You can't set this number (try 0-100).\n";
	}
}
void incStrength(capability* capabilitiesP)
{
	short filter;
	cout << "Increment by(Max total 100): ";
	cin >> filter;

	if (((filter + capabilitiesP->strength) >= 0) && ((filter + capabilitiesP->strength) <= 100))
	{
		capabilitiesP->strength += filter;
		cout << "Your strength is " << capabilitiesP->strength << " now.\n";
	}
	else
	{
		cout << "You can't increment(total must be 0-100).\n";
	}
}
void decStrength(capability* capabilitiesP)
{
	short filter;
	cout << "Decrement by(Min total 0): ";
	cin >> filter;

	if (((capabilitiesP->strength - filter) >= 0) && ((capabilitiesP->strength - filter) <= 100))
	{
		capabilitiesP->strength -= filter;
		cout << "Your strength is " << capabilitiesP->strength << " now.\n";
	}
	else
	{
		cout << "You can't decrement(total must be 0-100).\n";
	}
}
//agility
void setAgility(capability* capabilitiesP)
{
	short filter;
	cout << "Set agility(0-100): ";
	cin >> filter;

	if ((filter >= 0) && (filter <= 100))
	{
		capabilitiesP->agility = filter;
		cout << "Your agility is " << capabilitiesP->agility << " now.\n";
	}
	else
	{
		cout << "You can't set this number (try 0-100).\n";
	}
}
void incAgility(capability* capabilitiesP)
{
	short filter;
	cout << "Increment by(Max total 100): ";
	cin >> filter;

	if (((filter + capabilitiesP->agility) >= 0) && ((filter + capabilitiesP->agility) <= 100))
	{
		capabilitiesP->agility += filter;
		cout << "Your agility is " << capabilitiesP->agility << " now.\n";
	}
	else
	{
		cout << "You can't increment(total must be 0-100).\n";
	}
}
void decAgility(capability* capabilitiesP)
{
	short filter;
	cout << "Decrement by(Min total 0): ";
	cin >> filter;

	if (((capabilitiesP->agility - filter) >= 0) && ((capabilitiesP->agility - filter) <= 100))
	{
		capabilitiesP->agility -= filter;
		cout << "Your agility is " << capabilitiesP->agility << " now.\n";
	}
	else
	{
		cout << "You can't decrement(total must be 0-100).\n";
	}
}
//speed
void setSpeed(capability* capabilitiesP)
{
	short filter;
	cout << "Set speed(0-100): ";
	cin >> filter;

	if ((filter >= 0) && (filter <= 100))
	{
		capabilitiesP->speed = filter;
		cout << "Your speed is " << capabilitiesP->speed << " now.\n";
	}
	else
	{
		cout << "You can't set this number (try 0-100).\n";
	}
}
void incSpeed(capability* capabilitiesP)
{
	short filter;
	cout << "Increment by(Max total 100): ";
	cin >> filter;

	if (((filter + capabilitiesP->speed) >= 0) && ((filter + capabilitiesP->speed) <= 100))
	{
		capabilitiesP->speed += filter;
		cout << "Your speed is " << capabilitiesP->speed << " now.\n";
	}
	else
	{
		cout << "You can't increment(total must be 0-100).\n";
	}
}
void decSpeed(capability* capabilitiesP)
{
	short filter;
	cout << "Decrement by(Min total 0): ";
	cin >> filter;

	if (((capabilitiesP->speed - filter) >= 0) && ((capabilitiesP->speed - filter) <= 100))
	{
		capabilitiesP->speed -= filter;
		cout << "Your speed is " << capabilitiesP->speed << " now.\n";
	}
	else
	{
		cout << "You can't decrement(total must be 0-100).\n";
	}
}
//all capabilites
void setAll(capability* capabilitiesP)
{
	short filter;
	cout << "Set all capabilities to(0-100): ";
	cin >> filter;

	if ((filter >= 0) && (filter <= 100))
	{
		capabilitiesP->level = filter;
		capabilitiesP->strength = filter;
		capabilitiesP->agility = filter;
		capabilitiesP->speed = filter;
		cout << "Your capabilities now are:\n";
		cout << "-Level\t\t" << capabilitiesP->level << " \n";
		cout << "-Strength\t" << capabilitiesP->strength << " \n";
		cout << "-Agility\t" << capabilitiesP->agility << " \n";
		cout << "-Speed\t\t" << capabilitiesP->speed << " \n";
	}
	else
	{
		cout << "You can't set this number (try 0-100).\n";
	}
}
void incAll(capability* capabilitiesP)
{
	short filter;
	cout << "Increment by(Max total 100): ";
	cin >> filter;

	if (((filter + capabilitiesP->level) >= 0) && ((filter + capabilitiesP->level) <= 100) && ((filter + capabilitiesP->strength) >= 0) && ((filter + capabilitiesP->strength) <= 100) && ((filter + capabilitiesP->agility) >= 0) && ((filter + capabilitiesP->agility) <= 100) && ((filter + capabilitiesP->speed) >= 0) && ((filter + capabilitiesP->speed) <= 100))
	{
		capabilitiesP->level += filter;
		capabilitiesP->strength += filter;
		capabilitiesP->agility += filter;
		capabilitiesP->speed += filter;
		cout << "Your capabilities now are:\n";
		cout << "-Level\t\t" << capabilitiesP->level << " \n";
		cout << "-Strength\t" << capabilitiesP->strength << " \n";
		cout << "-Agility\t" << capabilitiesP->agility << " \n";
		cout << "-Speed\t\t" << capabilitiesP->speed << " \n";
	}
	else
	{
		cout << "You can't increment(One or more capabilies are out 0-100).\n";
	}
}
void decAll(capability* capabilitiesP)
{
	short filter;
	cout << "Decrement by(Max total 100): ";
	cin >> filter;

	if (((capabilitiesP->level - filter) >= 0) && ((capabilitiesP->level - filter) <= 100) && ((capabilitiesP->strength - filter) >= 0) && ((capabilitiesP->strength - filter) <= 100) && ((capabilitiesP->agility - filter) >= 0) && ((capabilitiesP->agility - filter) <= 100) && ((capabilitiesP->speed - filter) >= 0) && ((capabilitiesP->speed - filter) <= 100))
	{
		capabilitiesP->level -= filter;
		capabilitiesP->strength -= filter;
		capabilitiesP->agility -= filter;
		capabilitiesP->speed -= filter;
		cout << "Your capabilities now are:\n";
		cout << "-Level\t\t" << capabilitiesP->level << " \n";
		cout << "-Strength\t" << capabilitiesP->strength << " \n";
		cout << "-Agility\t" << capabilitiesP->agility << " \n";
		cout << "-Speed\t\t" << capabilitiesP->speed << " \n";
	}
	else
	{
		cout << "You can't decrement(One or more capabilies are out 0-100).\n";
	}
}
