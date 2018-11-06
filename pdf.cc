using namespace std;

#include<iostream>
#include<cstdlib>
#include<cstring>

int main(int argc, char *argv[]){

	string par = argv[1];

	if(argc == 2){system("okular " + par);}
	else{cout << "try something better dude"; return 1;}
	
	return 0;
}
