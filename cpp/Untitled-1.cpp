#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    int speed;

    void show_brand(){
        cout << "brand is " << brand << endl;
    }
};

class car2 : public car{
    public:
    string model;

    void show_model(){
        cout << "Model is " << model <<endl;
    }
};

int main(){
    car my_car;
    my_car.brand = "Honda";
    
    my_car.show_brand();

    car2 my_car2;
    my_car2.brand = "suzuki";
    my_car2.model = "swift";
    my_car2.show_brand();
    my_car2.show_model();
}