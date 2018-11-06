
using namespace std;

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>

int main(int argc, char *argv[]){
	if(argc == 2){

		string c = string("okular ") + argv[1] + string(" &");
		const char * cc = c.c_str();
		system(cc);
		cout << c << endl;
	}
	else{
		cout << "try something better dude" << endl;
		return 1;
	}
	return 0;
}
