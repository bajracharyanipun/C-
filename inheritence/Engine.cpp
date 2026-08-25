#include<iostream>
using namespace std;
class Engine{
    int cubiccapacity;
    bool status;

    public:
    Engine(int cc, bool sc):cubiccapacity(cc),status(sc){}
    int getcc();
    bool getstatus();
    void updatestatus();
    void getbikeinfo();
    };

int Engine::getcc(){
    return cubiccapacity;
}
bool Engine::getstatus(){
    return status;
}
void Engine::updatestatus(){
    if (status==true){
        status=false;
    }
    else{
        status=true;
    }
}
void bike::Start(){
    if (eng->getstatus()==true){
        cout<<"Bike is already started"<<endl;
    }
    else{
        eng->updatestatus();
        speed=0;
            cout<<"Bike is started"<<endl;
        }
    
}
void bike::Stop(){
    if (eng->getstatus()==false){
        cout<<"Bike is already stopped"<<endl;
    }
    else{
        eng->updatestatus();
        speed=-1;
            cout<<"Bike is stopped"<<endl;
        }
    
}   
void bike::acceletor (){
    if (eng->getstatus()==true){
        speed+=10;
        cout<<"Bike is acceletor and speed is "<<speed<<endl;
    }
    else{
        cout<<"Bike is not started"<<endl;
    }
}
class bike{
    string brand;
    Engine *eng;
    int speed;
    public:
    bike(string brand, Engine *eng):brand(brand),eng(eng),speed(0){}
    void Start();
    void Stop();
};
int main(){
    Engine e(150, true);
    bike b("Harley-Davidson", &e);  
}