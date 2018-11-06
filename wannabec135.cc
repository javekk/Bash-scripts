using namespace std;

#include<iostream>
#include<cstdlib>
#include<cstring>

int main(int argc, char *argv[]){

	string par = "xmodmap -e 'keycode 135=c'";
    
	if(argc == 1){system(par.c_str());}
	else{cout << "try something better dude"; return 1;}
	
	return 0;
}
