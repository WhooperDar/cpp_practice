#include <iostream>

// This is a C++ OOP Practice 
// Written on August 2022 

using namespace std; 

class Car{
	public: 
	Car (string x, int y); // constructor declaration 
		string color; 
		string brand; 
		string model; 
		int year; 
		int size; 
		
		void carInfo(){
			
		}
			
		void drive(int counts){
			cout << brand << " is now driving" << " number of counts: " << counts << endl;  
		}
		
		void openWindow(){
			cout << brand << " is opened the window" << endl; 
		}
};

// outside constructor implementation
Car::Car(string x, int y){
	color = x; 
	size = y; 
}

int main(void){
	Car car_1("Blue", 50), car_2("Red", 30), car_3("Orange", 20); 
	int i, j_count; 
	
	car_1.brand = "Lamborgini"; 
	car_1.model =  "Labrador"; 
	car_1.year = 2020; 

	car_2.brand = "Honda"; 
	car_2.model = "Model-1235"; 
	car_2.year = 2022; 
	
	car_3.brand = "Mitsuke"; 
	car_3.model = "Naruto"; 
	car_2.year = 2018;
	
	Car cars[3] = {car_1, car_2, car_3}; 
	
	for (i = 0, j_count = 0; i < 3; i++, j_count++){
		cout << cars[i].brand << " " << cars[i].model << " " << cars[i].year <<"\n"; 
		cars[i].drive(j_count); 
		cars[i].openWindow(); 
	}
	
	return 0; 
}
