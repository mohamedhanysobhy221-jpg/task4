

#include <iostream>
using namespace std;
class Car{
private:
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
    //getters
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
    //setters
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
    
}
int main()
{
    

    return 0;
}