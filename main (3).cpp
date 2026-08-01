

#include <iostream>
using namespace std;
class Car{
protected:
    int carnumber;
    string fullname;
    int age;
    string team;
    double speed;
    double capacity;
public:
    Car(int carnumber1,string fullname1,int age1,string team1,double speed1,double capacity1){
        carnumber=carnumber1;
        fullname=fullname1;
        age=age1;
        team=team1;
        speed=speed1;
        capacity=capacity1;
    }
    //setters
    void setcarnumber(int carnumber1){
        carnumber=carnumber1;
        
    }
    void setfullname(string fullname1){
        fullname=fullname1;
    }
    void setage(int age1){
        age=age1;
    }
    void setteam(string team1){
        team=team1;
    }
    void setspeed(double speed1){
        speed=speed1;
    }
    void setcapacity(double capacity1){
        capacity=capacity1;
    }
    //getters
    int getcarnumber(){
        return carnumber;
        
    }
    string getfullname(){
        return fullname;
    }
    int getage(){
        return age;
    }
    string getteam(){
        return team;
    }
    double getspeed(){
        return speed;
    }
    double getcapacity(){
        return capacity;
    }
    virtual void displayinfo(){};
    virtual double calcperformance(){return 0;};
};
class racer : public Car{
public:
    int finishedraces;
    int finishedlaps;
    Racer(int carnumber1, string fullname1, int age1,
          string team1, double speed1, double capacity1,
          int races, int laps)
        : Car(carnumber1, fullname1, age1, team1, speed1, capacity1)
    {
        finishedraces = races;
        finishedlaps = laps;
    }
    double calcperformance(){
        return(speed*10)+(capacity*1);
    }
    void displayinfo(){
        cout<<"Racer,";
        cout<<carnumber<<","<<fullname<<","<<age<<","<<team<<","<<speed<<","<<capacity<<endl;
        cout<<"the completed races :"<<finishedraces<<endl;
        cout<<"the completed laps :"<<finishedlaps<<endl;
        cout<<"the performance score :"<<calcperformance()<<endl;
    }
};
class supportvehicle : public Car{
public:
    int crewsize;
    double reliability;
    SupportVehicle(int carnumber1, string fullname1, int age1,
                   string team1, double speed1, double capacity1,
                   int crewsize1, double reliability1)
        : Car(carnumber1, fullname1, age1, team1, speed1, capacity1)
    {
        crewsize = crewsize1;
        reliability = reliability1;
    }
    double calcperformance(){
        return(speed*5+capacity*5);
    }
    void displayinfo(){
        cout<<"support vehicle,";
        cout<<carnumber<<","<<fullname<<","<<age<<","<<team<<","<<speed<<","<<capacity<<endl;
        cout<<crewsize<<"and"<<reliability<<"performance :"<<calcperformance()<<endl;
    }
};
int main()
{
    int carnumber, age;
    string fullname, team;
    double speed, capacity;

    int choice;

    cout << "1. Racer\n";
    cout << "2. Support Vehicle\n";
    cout << "which type of cars?";
    cin >> choice;

    cout << "Car Number: ";
    cin >> carnumber;

    cin.ignore();

    cout << "Full Name: ";
    getline(cin, fullname);

    cout << "Age: ";
    cin >> age;

    cout << "Team: ";
    cin >> team;

    cout << "Speed: ";
    cin >> speed;

    cout << "Capacity: ";
    cin >> capacity;

    if(choice == 1)
    {
        int races, laps;

        cout << "Finished Races: ";
        cin >> races;

        cout << "Finished Laps: ";
        cin >> laps;

        Racer r(carnumber, fullname, age, team,
                speed, capacity, races, laps);

        cout << "\nCar Information\n";
        r.displayinfo();
    }
    else
    {
        int crew;
        double reliability;

        cout << "Crew Size: ";
        cin >> crew;

        cout << "Reliability Rating: ";
        cin >> reliability;

        SupportVehicle s(carnumber, fullname, age, team,
                         speed, capacity, crew, reliability);

        cout << "\nCar Information\n";
        s.displayinfo();
    }

    return 0;
}