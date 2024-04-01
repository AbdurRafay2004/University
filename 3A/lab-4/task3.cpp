/*
    create class Cricket_Tournament
    create class Tennis_Tournament
    for output kinda like this:
    OUTPUT: 
    Cricket Tournament Name: Default 
    Number of Teams: 0 
    Type: No type
    ----------------------- 
    Cricket Tournament Name: IPL 
    Number of Teams: 10 
    Type: t20 
    ----------------------- 
    Tennis Tournament Name: Roland Garros Number of Players: 128

*/

#include <iostream>
#include <string>

using namespace std;

class Tournament {
private:
    string name;

public:

    // Constructor with default parameter
    Tournament(string name = "Default"){
        this->name = name;
   }

    // Setter for name
    void set_name(string name) {
        this->name = name;
    }

    // Getter for name
    string get_name() const {
        return name;
    }

    // Function to display details
    virtual string detail() {
        return "Tournament Name: " + name;
    }
};

class Cricket_Tournament: public Tournament{
    int num_of_teams;
    string type;
public:
    

    Cricket_Tournament():Tournament(),num_of_teams(0), type("No Type"){}

    Cricket_Tournament(string name, int team, string type): Tournament(name),num_of_teams(team), type(type) {}

    string detail(){

        return "Cricket Tournament Name: " + get_name() + 
        "\nNumber of Teams: " + to_string(num_of_teams) + 
        "\nType: " + type;
    }

};

class Tennis_Tournament: public Tournament{
    int num_of_players;
public:
    Tennis_Tournament() : Tournament(), num_of_players(0) {}
    Tennis_Tournament(string name, int players) : Tournament(name), num_of_players(players) {}

    string detail(){
        return "Tennis Tournament Name: " + get_name() + 
        "\nNumber of Players: " + to_string(num_of_players);
    }
};



int main() {
    // Part 1
    cout << "Part 1" << endl;
    cout << "------" << endl;
    Cricket_Tournament ct1;
    cout << ct1.detail() << endl;

    // Part 2
    cout << "-----------------------" << endl;
    cout << "Part 2" << endl;
    cout << "-----------------------" << endl;
    Cricket_Tournament ct2("IPL", 10, "t20");
    cout << ct2.detail() << endl;

    // Part 3
    cout << "-----------------------" << endl;
    cout << "Part 3" << endl;
    Tennis_Tournament tt("Roland Garros", 128);
    cout << tt.detail() << endl;
 
    return 0;
}

