//shallow copy is done by default constructor
#include <iostream>
#include <string.h>
using namespace std;

class hero {

    //properties
    private://can be accessed inside the scope only
    int health;//4 byte
    char level;//1 byte
    char *name;
    //double power;//8 byte
    // long long int weapons;//8 byte

    public://while declaring declare getter and settter as public
    //using getter and setter (used for accessing private & protected modifiers)
    int gethealth()
    {
        return health;
    }

    void sethealth(int h)
    {
        health = h;
    }

    char getlevel()
    {
        return level;
    }

    void setlevel(char l)
    {
        level = l;
    }

    void setname(char name[])
    {
        this->name = name;
    }

    //constructor(not need to declare it is by default)
    //if parameterized constructor is there then this default doesn't work you have to declare a constructor
    //behind the scenes by default object is created as thor.hero()
    hero()
    {
        cout<<"Default Constructor"<<endl;
        name = new char[100];
    }


    void print()
    {
        cout<<"[Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", ";
        cout<<"Level: "<<this->level<<" ]"<<endl;
    }


    //copy constructor(it is by default in system until one is created)
    hero (hero& temp)//pass by reference is necessary or the funtion will call itself in infinite loop.
    {
        cout<<"Copy Constructor"<<endl;

        char *ch = new char[strlen(temp.name)];/*declaring new variable 
        stops the working of the initial address allocated to name and 
        the name of copy didn't change on changing source name*/ 
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
};


int main()
{

    cout<<endl<<"Hulk"<<endl;
    //using parameterized constructor
    hero hulk;
    char name[6] = "Bruce";
    hulk.setname(name);
    hulk.sethealth(70);
    hulk.setlevel('Y');
    hulk.print();

    cout<<endl<<"Scar"<<endl;
    hero scar(hulk);//copy constructor(by default in system until declared one)
    scar.print();

    cout<<endl;
    name[0]='c';
    hulk.print();
    
    cout<<endl;
    scar.print();

    hulk = scar;//copy assignment operator used
    hulk.print();
    return 0;
}