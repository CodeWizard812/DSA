#include <iostream>
using namespace std;

class hero {

    //properties
    private://can be accessed inside the scope only
    int health;//4 byte
    char level;//1 byte
    public:
    static int timeToComplete;
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

    //constructor(not need to declare it is by default)
    //if parameterized constructor is there then this default doesn't work you have to declare a constructor
    //behind the scenes by default object is created as thor.hero()
    hero()
    {
        cout<<"Default Constructor called"<<endl;
    }

    //parameterized constructor
    hero (int health)
    {
        cout<<"Parameterized constructor called"<<endl;
        this->health= health;
    }

    hero (int health, char level)
    {
        cout<<"Parameterized constructor called"<<endl;
        this->health= health;
        this->level=level;
    }

    void printh()
    {
        cout<<"Health: "<<this->health<<endl;
    }

    void printl()
    {
        cout<<"Level: "<<this->level<<endl;
    }

    //copy constructor(it is by default in system until one is created)
    hero (hero& temp)//pass by reference is necessary or the funtion will call itself in infinite loop.
    {
        cout<<"Copy Constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Destructor(present by default)
    //not called for dynamic as it gets deallocation is done by delete function
    ~hero ()
    {
        cout<<endl<<"Destructor called"<<endl;
    }

    //static function 
    static int static_function()
    {
        return timeToComplete;//can access only static member
    }
};

//initialising static keyword arguments below :-
//data_type class_name scope_resolution_operator(::) field_name = value;
int hero:: timeToComplete = 5;

int main()
{
    cout<<hero::timeToComplete<<endl;//no need to create object to use it

    hero a;
    cout<<a.timeToComplete<<endl;//not recommended as it belongs to class not object

    //calls static function
    cout<<"Static Function Output: "<<hero::static_function()<<endl;

    cout<<endl<<"Odin"<<endl;
    //using parameterized constructor
    hero odin(10);
    odin.printh();

    cout<<endl<<"Hulk"<<endl;
    //using parameterized constructor
    hero hulk(40, 'V');
    hulk.printh();
    hulk.printl();

    cout<<endl<<"Scar"<<endl;
    hero scar(hulk);//copy constructor(by default in system until declared one)
    //OR hero scar = hulk; // copy assignment operator(=) is used.
    scar.printh();
    scar.printl();

    cout<<endl<<"Abomination"<<endl;
    //optional way to use copy constructor
    hero abomination(hulk);
    abomination.printh();
    abomination.printl();

    cout<<endl<<"Thor & Loki"<<endl;
    //object created.
    //static alloaction
    hero thor;//thor.hero()

    //object created dynamically 
    hero* loki = new hero;

    (*loki).sethealth(100);//brackets are necessary with pointers
    loki->setlevel('X');//alternative

    cout<<"Loki's health: "<<(*loki).gethealth()<<endl;
    cout<<"Loki's level: "<< loki->getlevel()<<endl;

    thor.sethealth(70);
    thor.setlevel('Z');

    // cout<<"Size of: "<<sizeof(thor)<<endl;
    
    cout<<"Thor's health: "<<thor.gethealth()<<endl;
    cout<<"Thor's level: "<<thor.getlevel()<<endl;
    
    //manually call destructor for dynamic allocation
    delete loki;
    return 0;
}