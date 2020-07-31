#include"prisoner.h"
#include"staff.h"
#include"to_be_executed.h"
#include"bookkeeper.h"
#include"people.h"
#include"guards.h"
#include"Maximum_security_prisoner.h"
#include"medium_security_prisoner.h"
#include"minimum_security_prisoner.h"
#include <fstream>
#include <ios>
#include <sstream>
#include <string>
#include <cstring>
#include<iostream>

using namespace std;

int main()
{
      	Bookkeeper B1;
	while(1)
	{
		B1.Open_book();
		cout<<"More commands?(y/n)"<<endl;
		char x;
		cin>>x;
		if(x=='n')
			break;
		else
			continue;
	}
	return 0;
}
