#include <iostream>

// This is a C++ OOP Practice 
// Written on August 2022 

using namespace std; 

void RestoProgram(); 
void CarProgram(); 
void MicroProgram(); 

// Class 
class Car{
	// public members 
	public: 
	Car (string x, int y); // constructor declaration 
		
		// variable objects
		string color; 
		string brand; 
		string model; 
		int year; 
		int size; 
		
		
		// Methods
		void carInfo(){
			
			cout << "\n ====== Car Info ======= \n";  
			cout << "Brand: " << brand << endl; 
			cout << "Color: " << color << endl; 
			cout << "Model: " << model << endl; 
			cout << "Manufactured year: " << year << endl; 
			cout << "Size: " << size << endl; 
 		}
		
		
		void drive(int counts){
			cout << brand << " is now driving" << " number of counts: " << counts << endl;  
		}
		
		void openWindow(){
			cout << brand << " is opened the window" << endl; 
		}
		
		void coreDataInfo(int fuel, string microType){
			fuelAmount = fuel; 
			microcontrollerType = microType; 
			
			cout << "\n ===========-------============= \n"; 
			cout << "Core Data Information: " << endl; 
			cout << "Amount of Gas " << "[" << fuelAmount << "]" << endl; 
			cout << "Microcontroller Type: " << "[" << microcontrollerType << "]" << endl;  		
		}
		
	// private members
	private: 
		int fuelAmount; 
		string microcontrollerType; 	
};

// outside constructor implementation
Car::Car(string x, int y){
	color = x; 
	size = y; 
}

// inheritance 

// Base Classs
class Restaurant{ 
	public: 
	
		// Restaurant Constructor 
		Restaurant(string name, string type, string mainFood){
			restoName = name; 
			restoType = type; 
			restoMainDish = mainFood; 
		}; 
		
		void restoInfo(){
			cout << "\n ===========Restaurant Information=========== \n"; 
			cout << "Name of the Restaurant: " << restoName << endl; 
			cout << "Type of restaurant: " << restoType << endl; 
			cout << "Main Course: " << restoMainDish << endl; 
		}
		
	private: 
		string restoName; 
		string restoType; 
		string restoMainDish; 
};


// Derived class
class Jolibee: public Restaurant{ 
	public: 
		void serveFood(){ 
			cout << "Chicken Joy" << " is served" << endl; 
		}
		
		Jolibee(string name, string type, string mainFood) : Restaurant(name, type, mainFood){}
}; 

//  Multilevel class  
class Chowking: public Jolibee { 
	public: 
		void restoName(){
			cout << "\nThis is Chowking!\n"; 
		}
		
		Chowking(string name, string type, string mainFood) : Jolibee(name, type, mainFood){ }
};

		

class EmbeddedSys {
	public: 
		void micro(){
			cout << "Microprocessor" << endl; 
		}
};

class Micro {
	public: 
		void microsystems(){
			cout << "Micro-system-services" << endl; 
		}
};

class EmbeddedSystem2 : public EmbeddedSys, public Micro{
	public: 
		void microcontroller (){
			cout << "Microcontroller" << endl; 
		}
};

// With protected 
class Employee {
	protected: 
		int salary; 
};

class Programmer: public Employee {
	public: 
		int bonus; 
		void setSalary(int s){
			salary = s; 
		}
		
		int getSalary(){
			return salary;
		}
};
// Main Function 
int main(void){

	Programmer ako; 
	ako.setSalary(1000000);
	cout << ako.getSalary();   
	return 0; 
}




void MicroProgram(){
	
	EmbeddedSystem2 systemsMicro; 
	
	systemsMicro.micro(); 
	systemsMicro.microcontroller(); 
	systemsMicro.microsystems();
}

void RestoProgram(){
	Restaurant resto("Jolibee", "Fast food chain", "Chicken Joy");
	resto.restoInfo(); 
	
	cout << "\nFrom Jolibee instance" << endl; 
	Jolibee jolly("Jolibee", "Fast food chain", "Chicken Joy"); 
	jolly.restoInfo(); 
	jolly.serveFood(); 
	
	cout << "\nChowking resto" << endl; 
	
	Chowking chow ("Chowking", "Fast food chain", "Siomai Rice"); 
	chow.restoInfo(); 
	chow.serveFood(); 
	chow.restoName(); 
}

void CarProgram(){
	// Object instanstiation
	Car car_1("Blue", 50), car_2("Red", 30), car_3("Orange", 20); 
	int i, j_count; 
	int fuelAmt[3] = {500, 233, 644}; 
	string micro[3] = {"Arduino Uno", "Arduino Leonardo", "Arduino Namo"}; 
	
	// Object Assigning
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
		cars[i].carInfo(); 
		
		
		// printing car private members 
		cars[i].coreDataInfo(fuelAmt[i], micro[i]); 
	}
	
}
