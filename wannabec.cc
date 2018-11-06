using namespace std;

#include<iostream>
#include<cstdlib>
#include<cstring>

int main(int argc, char *argv[]){
    
    string one = "xmodmap -e 'keycode ";
    string key = "0";
    string three = "=c'";

	if(argc == 1){
        cout << "Type the code for the new 'C' key: ";
        try{
            cin >> key;
            one.append(key);
            one.append(three);
            system(one.c_str());
        }
        catch(const char* msg){
            cerr << msg << endl;
        }
    }
	else{
        cout << "try something better dude"; 
        return 1;
        
    }
	
	return 0;
}
