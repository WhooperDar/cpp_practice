#include <iostream>
#include <fstream>

using namespace std; 

int main(void){
	
	
	// ======= Using ofstream ============ 	
	// Creating file 
	ofstream MyFile("file/firstfile.txt"); 
	
	MyFile << "Files can be tricky, but it is fun enough!"; 
	
	cout << "File Created" << endl; 
	
	MyFile.close(); 
	
	cout << "File Closed" << endl; 
	
	cout << "\n\n\n"; 
	
	
	// ======= Using ifstream ============ 
	// Reading my files  
	string textWord; 
	
	cout << "Reading files.\n" << endl; 
	
	ifstream MyReadFile("file/firstfile.txt"); // Reading the file in the stream. 
	
	while(getline(MyReadFile, textWord)){
		cout << textWord; 
	}
	
	cout << "\n\n\n"; 
	
	MyReadFile.close();
	
	// ====== Using fstream Creating and Writing =========== 
	
	// Creating a file
	ofstream FileSystem("file/secondfile.txt"); 
	
	cout << "fstream file is created." << endl; 
	FileSystem << "Files are complicated but I'm using fstream for this one.";  
	
	cout << "fstream file is close." << endl;
	
	FileSystem.close(); 
	
	cout << "\n\n\n"; 
	
	
	// ========== Using fstream for Reading files ============
	
	cout << "Second file is open." << endl; 
	ifstream ReadFsFile("file/secondfile.txt"); 
	
	string fsText; 
	
	while(getline(ReadFsFile, fsText)){
		cout << fsText; 
	}
	
	ReadFsFile.close(); 
	
	return 0; 
}
