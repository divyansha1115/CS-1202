#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand = "Audi";
    void Brand(){
        cout<<"Heyey!!!";
    }
};

class Car: public Vehicle{
    public:
    string Model = "Lamborghini";
};

int main() {
    Car myObj;
    myObj.Brand();
    cout<<myObj.brand + " "+ myObj.Model;
	return 0;
}