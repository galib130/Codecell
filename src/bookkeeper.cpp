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
void Bookkeeper::Open_book()
{
	std::cout<<"\nDo you want to Read(1) or Write(2)"<<std::endl;
	int x;
	std::cin>>x;
	if(x==1)
	{
		std::cout<<"\nPrisoner(1), Guard(2) or Staff(3)"<<std::endl;
		std::cin>>x;
		if(x==1)
		{
			std::cout<<"\nMaximum security(1), Medium security(2), Minimum security(3) or Executee(4)"<<std::endl;
			cin>>x;
			if(x==1)
			{
				read_maximum_security_prisoner();
			}
			else if(x==2)
			{
				read_medium_security_prisoner();
			}
			else if(x==3)
			{
				read_minimum_security_prisoner();
			}
			else if(x==4)
			{
				read_To_be_Executed_from_file();
			}
		}
		else if(x==3)
		{
			read_Staff_in_file();
		}
		else if(x==2)
		{
			read_Guard_in_file();
		}
	}
	else if(x==2)
	{
		std::cout<<"\nPrisoner(1), Guard(2) or Staff(3)"<<std::endl;
		cin>>x;
		if(x==1)
		{
			input_Prisoner();
		}
		else if(x==2)
		{
			input_Guard();
		}
		else if(x==3)
		{
			input_Staff();
		}
	}
}



//Inputters

void Bookkeeper::input_Guard()
{
	std::cout<<"\nEnter First Name: ";
	char fname[10];
	cin>>fname;
	std::cout<<"\nEnter Last Name: ";
	char lname[10];
	cin>>lname;
	std::cout<<"\nAge: ";
	int A;
	cin>>A;
	std::cout<<"\nGender: ";
	char g[10];
	cin>>g;
	std::cout<<"\nEnter Address: ";
	char ad[50];
	getchar();
	gets(ad);
	//getchar();
	std::cout<<"\nEnter Phone number: ";
	char p[14];
	cin>>p;
	std::cout<<"\nOccupation: ";
	char o[15];
	getchar();
	gets(o);
	//getchar();
	std::cout<<"\nHealth Status: ";
	char hs[100];
	gets(hs);
	//getchar();
	std::cout<<"\nReligion: ";
	char r[25];
	gets(r);

	std::cout<<"\nEnter ID: ";
	char id[11];
	gets(id);
	std::cout<<"\nEnter Unit: ";
	char unit[20];
	gets(unit);
	std::cout<<"\nEnter Rank: ";
	char rank[20];
	gets(rank);
	std::cout<<"\nEnter Shift: ";
	char shift[10];
	gets(shift);
	std::cout<<"\nEnter Position: ";
	char post[30];
	gets(post);
	std::cout<<"\nEnter Ammunition Status: ";
	char ammunition_status[10];
	gets(ammunition_status);
	std::cout<<"\nEnter psyche evaluation: ";
	char psyche_evaluation[30];
	gets(psyche_evaluation);
	std::cout<<"\nEnter Salary: ";
	double salary;
	getchar();
	cin>>salary;
	std::cout<<"\nEnter Number of days of experience: ";
	int experience;
	cin>>experience;

	Guards P1(fname,lname,A,g,ad,p, o,hs,r,	id, unit, rank,shift,post,ammunition_status,psyche_evaluation, salary, experience);
	write_Guard_in_file(P1);
}

void Bookkeeper::input_Staff()
{
	std::cout<<"\nEnter First Name: ";
	char fname[10];
	cin>>fname;
	std::cout<<"\nEnter Last Name: ";
	char lname[10];
	cin>>lname;
	std::cout<<"\nAge: ";
	int A;
	cin>>A;
	std::cout<<"\nGender: ";
	char g[10];
	cin>>g;
	std::cout<<"\nEnter Address: ";
	char ad[50];
	getchar();
	gets(ad);
	//getchar();
	std::cout<<"\nEnter Phone number: ";
	char p[14];
	cin>>p;
	std::cout<<"\nOccupation: ";
	char o[15];
	getchar();
	gets(o);
	//getchar();
	std::cout<<"\nHealth Status: ";
	char hs[100];
	gets(hs);
	//getchar();
	std::cout<<"\nReligion: ";
	char r[25];
	gets(r);


	std::cout<<"\nEnter ID: ";
	char id[11];
	gets(id);
	std::cout<<"\nEnter Profession: ";
	char Profession[20];
	gets(Profession);
	std::cout<<"\nEnter Rank: ";
	char rank[20];
	gets(rank);
	std::cout<<"\nEnter Shift: ";
	char shift[10];
	gets(shift);

	std::cout<<"\nEnter requests(If any): ";
	char requests[100];
	gets(requests);
	std::cout<<"\nEnter psyche evaluation: ";
	char psyche[30];
	gets(psyche);
	std::cout<<"\nEnter Salary: ";
	double salary;
	getchar();
	cin>>salary;
	std::cout<<"\nEnter Number of days of experience: ";
	int experience;
	cin>>experience;


	Staff P1(fname,lname,A, g,ad,p,o,hs,r,id,rank,Profession, shift,  psyche,requests, experience,salary);
	write_Staff_in_file(P1);
	return;
}


void Bookkeeper::input_Prisoner()
{
	std::cout<<"\nEnter First Name: ";
	char fname[10];
	cin>>fname;
	std::cout<<"\nEnter Last Name: ";
	char lname[10];
	cin>>lname;
	std::cout<<"\nAge: ";
	int A;
	cin>>A;
	std::cout<<"\nGender: ";
	char g[10];
	cin>>g;
	std::cout<<"\nEnter Address: ";
	char ad[50];
	getchar();
	gets(ad);
	//getchar();
	std::cout<<"\nEnter Phone number: ";
	char p[14];
	cin>>p;
	std::cout<<"\nOccupation: ";
	char o[15];
	getchar();
	gets(o);
	//getchar();
	std::cout<<"\nHealth Status: ";
	char hs[100];
	gets(hs);
	//getchar();
	std::cout<<"\nReligion: ";
	char r[25];
	gets(r);

	//People p1(fname,lname, A,g, ad,p,o,hs,r);
	//p1.people_getInfo();

	std::cout<<"\nEnter Prisoner ID: ";
	char id[11];
	getchar();
	cin>>id;
	std::cout<<"\nEnter Crime: ";
	char Crime[25];
	getchar();
	gets(Crime);
	char Sentence[50];
	std::cout<<"\nSentence: ";
	gets(Sentence);

	char Admission_date[20];
	std::cout<<"\nAdmission Date: ";
	gets(Admission_date);
	char Release_date[20];
	std::cout<<"\nRelease date: ";
	gets(Release_date);
	char Guard_statement[100];
	std::cout<<"\nEnter Guard statement: ";
	gets(Guard_statement);
	char Staff_statement[100];
	std::cout<<"\nEnter Staff statement: ";
	gets(Staff_statement);
	int solitary_confinement_visits;
	std::cout<<"\nSolitary Confinement visits: ";
	cin>>solitary_confinement_visits;
	getchar();
	char Overall_evaluation[150];
	std::cout<<"\nEnter Overall Evaluation: ";
	gets(Overall_evaluation);
	char Visitor_Info[20];
	std::cout<<"\nVisitor Information: ";
	gets(Visitor_Info);
	char General_request[100];
	std::cout<<"\nEnter General request: ";
	gets(General_request);
	char Psychological_status[40];
	std::cout<<"\nPsychological status: ";
	gets(Psychological_status);
	char Job_status[30];
	std::cout<<"\nJob in the prison: ";
	gets(Job_status);
	char Jailmate[20];
	std::cout<<"\nEnter Jailmate(If none, enter none): ";
	gets(Jailmate);
	char Lawyer[20];
	std::cout<<"\nLawyer: ";
	gets(Lawyer);
	char Evidence_info[150];
	std::cout<<"\nEvidence Information: ";
	gets(Evidence_info);
	char Conviction_date[20];
	std::cout<<"\nEnter Conviction date: ";
	gets(Conviction_date);
	int Bail_amount;
	std::cout<<"\nBail amount: ";
	cin>>Bail_amount;
	char Appeal_for_release_status[15];
	std::cout<<"\nAppeal for release status: ";
	getchar();
	gets(Appeal_for_release_status);
	char Utility_status[10];
	std::cout<<"\nEnter Utility status: ";
	gets(Utility_status);
	char prescription[50];
	std::cout<<"\nEnter prescription: ";
	gets(prescription);
	char Visiting_status[40];
	std::cout<<"Enter visiting status: ";
	gets(Visiting_status);

	if(!strcmp(Sentence,"Death Sentence")||!strcmp(Sentence,"Death sentence"))
	{
		char last_meal[30];
		std::cout<<"\nRequested last meal: ";
		gets(last_meal);
		char execution_date[20];
		std::cout<<"\nExecution Date: ";
		gets(execution_date);

		char Location_of_cell[11] = "South Wing";

		To_be_Executed P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status,last_meal,execution_date);
		P1.To_be_Executed_getinfo();
		write_To_be_executed_in_file(P1);

		return;
	}

	else if(!strcmp(Crime,"White Collar Crimes")&&!strcmp(g,"Male"))
	{
		char Location_of_cell[11] = "North Wing";

		Minimum_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);
		P1.get_prisoner_info();
		write_minimum_security_prisoner(P1);

		return;
	}

	else if(!strcmp(Crime,"Violent Crimes")&&!strcmp(g,"Male"))
	{
		char Location_of_cell[11] = "South Wing";

		Maximum_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);
		P1.get_prisoner_info();
		write_maximum_security_prisoner(P1);

		return;
	}

	else if(!strcmp(Crime,"Lesser Violent Crimes")&&!strcmp(g,"Male"))
	{
		char Location_of_cell[11] = "East Wing";

		Medium_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);
		P1.get_prisoner_info();
		write_medium_security_prisoner(P1);

		return;
	}
}


//Writers
void Bookkeeper::write_Staff_in_file(Staff P1)
{
	ofstream execution_list("Staff_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.getstaff_id()<<"\n"<<
	P1.getstaff_Profession()<<"\n"<<
	P1.getstaff_rank()<<"\n"<<
	P1.getstaff_shift()<<"\n"<<
	P1.getstaff_psyche()<<"\n"<<
	P1.getstaff_requests()<<"\n"<<
	P1.getstaff_salary()<<"\n"<<
	P1.getstaff_experience()<<"\n"<<
	std::endl;
	execution_list.close();
}
void Bookkeeper::write_Guard_in_file(Guards P1)
{
	ofstream execution_list("Guards_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.guard_getid()<<"\n"<<
	P1.guard_getunit()<<"\n"<<
	P1.guard_getrank()<<"\n"<<
	P1.guard_getshift()<<"\n"<<
	P1.guard_getpsyche_evaluation()<<"\n"<<
	P1.guard_getpost()<<"\n"<<
	P1.guard_getammunition_status()<<"\n"<<
	P1.guard_getsalary()<<"\n"<<
	P1.guard_getexperience()<<"\n"<<
	std::endl;
	execution_list.close();
}

void Bookkeeper:: write_To_be_executed_in_file(To_be_Executed P1)
{
	ofstream execution_list("execution_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.get_prisoner_ID()<<"\n"<<
	P1.get_prisoner_crime()<<"\n"<<
	P1.get_prisoner_admission_date()<<"\n"<<
	P1.get_prisoner_release_date()<<"\n"<<
	P1.get_prisoner_Psychological_status()<<"\n"<<
	P1.get_prisoner_Job_status()<<"\n"<<
	P1.get_prisoner_jailmate()<<"\n"<<
	P1.get_prisoner_utility_status()<<"\n"<<
	P1.get_prisoner_visiting_status()<<"\n"<<
	P1.get_prisoner_sentence()<<"\n"<<
	P1.get_prisoner_cell_location()<<"\n"<<
	P1.get_prisoner_conduct_guard_statement()<<"\n"<<
	P1.get_prisoner_conduct_staff_statement()<<"\n"<<
	P1.get_prisoner_conduct_solitary_visits()<<"\n"<<
	P1.get_prisoner_conduct_overall()<<"\n"<<
	P1.get_prisoner_conduct_visitor_info()<</*"\nExecution Information:\n\tExecution date: "<<get_prisoner_execution_date()<<"\n\tLast Meal: "<<get_prisoner_execution_last_meal()<<*/"\n"<<
	P1.get_prisoner_greq()<<"\n"<<
	P1.get_prisoner_trial_lawyer()<<"\n"<<
	P1.get_prisoner_trial_evi_info()<<"\n"<<
	P1.get_prisoner_trial_conviction()<<"\n"<<
	P1.get_prisoner_trial_bail()<<"\n"<<
	P1.get_prisoner_trial_release_appeal()<<"\n" <<
	P1.get_prisoner_prescription()<<"\n"<<
	P1.get_to_be_executed_last_meal()<<"\n"<<
	P1.get_to_be_executed_execution_date()<<"\n"<<
	std::endl;
	execution_list.close();
}

void Bookkeeper:: write_maximum_security_prisoner(Maximum_security_prisoner P1)
{
	ofstream execution_list("Maximum_security_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.get_prisoner_ID()<<"\n"<<
	P1.get_prisoner_crime()<<"\n"<<
	P1.get_prisoner_admission_date()<<"\n"<<
	P1.get_prisoner_release_date()<<"\n"<<
	P1.get_prisoner_Psychological_status()<<"\n"<<
	P1.get_prisoner_Job_status()<<"\n"<<
	P1.get_prisoner_jailmate()<<"\n"<<
	P1.get_prisoner_utility_status()<<"\n"<<
	P1.get_prisoner_visiting_status()<<"\n"<<
	P1.get_prisoner_sentence()<<"\n"<<
	P1.get_prisoner_cell_location()<<"\n"<<
	P1.get_prisoner_conduct_guard_statement()<<"\n"<<
	P1.get_prisoner_conduct_staff_statement()<<"\n"<<
	P1.get_prisoner_conduct_solitary_visits()<<"\n"<<
	P1.get_prisoner_conduct_overall()<<"\n"<<
	P1.get_prisoner_conduct_visitor_info()<</*"\nExecution Information:\n\tExecution date: "<<get_prisoner_execution_date()<<"\n\tLast Meal: "<<get_prisoner_execution_last_meal()<<*/"\n"<<
	P1.get_prisoner_greq()<<"\n"<<
	P1.get_prisoner_trial_lawyer()<<"\n"<<
	P1.get_prisoner_trial_evi_info()<<"\n"<<
	P1.get_prisoner_trial_conviction()<<"\n"<<
	P1.get_prisoner_trial_bail()<<"\n"<<
	P1.get_prisoner_trial_release_appeal()<<"\n" <<
	P1.get_prisoner_prescription()<<"\n"<<
	/*P1.get_to_be_executed_last_meal()<<"\n"<<
	P1.get_to_be_executed_execution_date()<<"\n"<<*/
	std::endl;
	execution_list.close();
}

void Bookkeeper:: write_medium_security_prisoner(Medium_security_prisoner P1)
{
	ofstream execution_list("Medium_security_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.get_prisoner_ID()<<"\n"<<
	P1.get_prisoner_crime()<<"\n"<<
	P1.get_prisoner_admission_date()<<"\n"<<
	P1.get_prisoner_release_date()<<"\n"<<
	P1.get_prisoner_Psychological_status()<<"\n"<<
	P1.get_prisoner_Job_status()<<"\n"<<
	P1.get_prisoner_jailmate()<<"\n"<<
	P1.get_prisoner_utility_status()<<"\n"<<
	P1.get_prisoner_visiting_status()<<"\n"<<
	P1.get_prisoner_sentence()<<"\n"<<
	P1.get_prisoner_cell_location()<<"\n"<<
	P1.get_prisoner_conduct_guard_statement()<<"\n"<<
	P1.get_prisoner_conduct_staff_statement()<<"\n"<<
	P1.get_prisoner_conduct_solitary_visits()<<"\n"<<
	P1.get_prisoner_conduct_overall()<<"\n"<<
	P1.get_prisoner_conduct_visitor_info()<</*"\nExecution Information:\n\tExecution date: "<<get_prisoner_execution_date()<<"\n\tLast Meal: "<<get_prisoner_execution_last_meal()<<*/"\n"<<
	P1.get_prisoner_greq()<<"\n"<<
	P1.get_prisoner_trial_lawyer()<<"\n"<<
	P1.get_prisoner_trial_evi_info()<<"\n"<<
	P1.get_prisoner_trial_conviction()<<"\n"<<
	P1.get_prisoner_trial_bail()<<"\n"<<
	P1.get_prisoner_trial_release_appeal()<<"\n" <<
	P1.get_prisoner_prescription()<<"\n"<<
	/*P1.get_to_be_executed_last_meal()<<"\n"<<
	P1.get_to_be_executed_execution_date()<<"\n"<<*/
	std::endl;
	execution_list.close();
}

void Bookkeeper:: write_minimum_security_prisoner(Minimum_security_prisoner P1)
{
	ofstream execution_list("Minimum_security_list.txt",ios::app);
	//execution_list.open("execution_list.txt");
	execution_list<<
	P1.people_getFname()<<" "<<
	P1.people_getLname()<<"\n"<<
	P1.people_getAge()<<"\n"<<
	P1.people_getG()<<"\n"<<
	P1.people_getPh()<<"\n"<<
	P1.people_getAdd()<<"\n"<<
	P1.people_getOcc()<<"\n"<<
	P1.people_getHs()<<"\n"<<
	P1.people_getRel()<<"\n"<<
	P1.get_prisoner_ID()<<"\n"<<
	P1.get_prisoner_crime()<<"\n"<<
	P1.get_prisoner_admission_date()<<"\n"<<
	P1.get_prisoner_release_date()<<"\n"<<
	P1.get_prisoner_Psychological_status()<<"\n"<<
	P1.get_prisoner_Job_status()<<"\n"<<
	P1.get_prisoner_jailmate()<<"\n"<<
	P1.get_prisoner_utility_status()<<"\n"<<
	P1.get_prisoner_visiting_status()<<"\n"<<
	P1.get_prisoner_sentence()<<"\n"<<
	P1.get_prisoner_cell_location()<<"\n"<<
	P1.get_prisoner_conduct_guard_statement()<<"\n"<<
	P1.get_prisoner_conduct_staff_statement()<<"\n"<<
	P1.get_prisoner_conduct_solitary_visits()<<"\n"<<
	P1.get_prisoner_conduct_overall()<<"\n"<<
	P1.get_prisoner_conduct_visitor_info()<</*"\nExecution Information:\n\tExecution date: "<<get_prisoner_execution_date()<<"\n\tLast Meal: "<<get_prisoner_execution_last_meal()<<*/"\n"<<
	P1.get_prisoner_greq()<<"\n"<<
	P1.get_prisoner_trial_lawyer()<<"\n"<<
	P1.get_prisoner_trial_evi_info()<<"\n"<<
	P1.get_prisoner_trial_conviction()<<"\n"<<
	P1.get_prisoner_trial_bail()<<"\n"<<
	P1.get_prisoner_trial_release_appeal()<<"\n" <<
	P1.get_prisoner_prescription()<<"\n"<<
	/*P1.get_to_be_executed_last_meal()<<"\n"<<
	P1.get_to_be_executed_execution_date()<<"\n"<<*/
	std::endl;
	execution_list.close();
}


//Readers



void Bookkeeper::read_Staff_in_file()
{
	ifstream read_executed("Staff_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char Profession[50];
		getline (read_executed, key_string);
		strcpy(Profession,key_string.c_str());

		char rank[20];
		getline (read_executed, key_string);
		strcpy(rank,key_string.c_str());

		char shift[20];
		getline (read_executed, key_string);
		strcpy(shift,key_string.c_str());

		char psyche[50];
		getline (read_executed, key_string);
		strcpy(psyche,key_string.c_str());

		char requests[30];
		getline (read_executed, key_string);
		strcpy(requests,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek(key_string);
		double salary = 0;
		geek>>salary;

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int experience = 0;
		geek2>>experience;

		getline (read_executed, key_string);

		Staff P1(fname,lname,A, g,ad,p,o,hs,r,id,rank,Profession, shift,  psyche,requests, experience,salary);

		P1.staff_getinfo();

		std::cout<<"\n\n"<<std::endl;
	}

}

void Bookkeeper::read_Guard_in_file()
{
	ifstream read_executed("Guards_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char unit[50];
		getline (read_executed, key_string);
		strcpy(unit,key_string.c_str());

		char rank[20];
		getline (read_executed, key_string);
		strcpy(rank,key_string.c_str());

		char shift[20];
		getline (read_executed, key_string);
		strcpy(shift,key_string.c_str());


		char psyche_evaluation[40];
		getline (read_executed, key_string);
		strcpy(psyche_evaluation,key_string.c_str());

		char post[30];
		getline (read_executed, key_string);
		strcpy(post,key_string.c_str());

		char ammunition_status[30];
		getline (read_executed, key_string);
		strcpy(ammunition_status,key_string.c_str());


		getline (read_executed, key_string);
		stringstream geek(key_string);
		double salary = 0;
		geek>>salary;

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int experience = 0;
		geek2>>experience;

		getline (read_executed, key_string);

		Guards P1(fname,lname,A,g,ad,p, o,hs,r,	id, unit, rank,shift,post,ammunition_status,psyche_evaluation, salary, experience);

		P1.guard_getinfo();

		std::cout<<"\n\n"<<std::endl;
	}

}


void Bookkeeper::read_To_be_Executed_from_file()
{
	ifstream read_executed("execution_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char Crime[50];
		getline (read_executed, key_string);
		strcpy(Crime,key_string.c_str());

		char Admission_date[20];
		getline (read_executed, key_string);
		strcpy(Admission_date,key_string.c_str());

		char Release_date[20];
		getline (read_executed, key_string);
		strcpy(Release_date,key_string.c_str());

		char Psychological_status[50];
		getline (read_executed, key_string);
		strcpy(Psychological_status,key_string.c_str());

		char Job_status[30];
		getline (read_executed, key_string);
		strcpy(Job_status,key_string.c_str());

		char Jailmate[25];
		getline (read_executed, key_string);
		strcpy(Jailmate,key_string.c_str());

		char Utility_status[40];
		getline (read_executed, key_string);
		strcpy(Utility_status,key_string.c_str());

		char Visiting_status[40];
		getline (read_executed, key_string);
		strcpy(Visiting_status,key_string.c_str());

		char Sentence[40];
		getline (read_executed, key_string);
		strcpy(Sentence,key_string.c_str());

		char Location_of_cell[20];
		getline (read_executed, key_string);
		strcpy(Location_of_cell,key_string.c_str());

		char Guard_statement[150];
		getline (read_executed, key_string);
		strcpy(Guard_statement,key_string.c_str());

		char Staff_statement[150];
		getline (read_executed, key_string);
		strcpy(Staff_statement,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek(key_string);
		int solitary_confinement_visits = 0;
		geek>>solitary_confinement_visits;

		char Overall_evaluation[150];
		getline (read_executed, key_string);
		strcpy(Overall_evaluation,key_string.c_str());

		char Visitor_Info[50];
		getline (read_executed, key_string);
		strcpy(Visitor_Info,key_string.c_str());

		char General_request[150];
		getline (read_executed, key_string);
		strcpy(General_request,key_string.c_str());

		char Lawyer[25];
		getline (read_executed, key_string);
		strcpy(Lawyer,key_string.c_str());

		char Evidence_info[150];
		getline (read_executed, key_string);
		strcpy(Evidence_info,key_string.c_str());

		char Conviction_date[20];
		getline (read_executed, key_string);
		strcpy(Conviction_date,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int Bail_amount = 0;
		geek2>>Bail_amount;

		char Appeal_for_release_status[30];
		getline (read_executed, key_string);
		strcpy(Appeal_for_release_status,key_string.c_str());

		char prescription[60];
		getline (read_executed, key_string);
		strcpy(prescription,key_string.c_str());

		char last_meal[35];
		getline (read_executed, key_string);
		strcpy(last_meal,key_string.c_str());

		char execution_date[20];
		getline (read_executed, key_string);
		strcpy(execution_date,key_string.c_str());

		getline (read_executed, key_string);

		To_be_Executed P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status,last_meal,execution_date);

		P1.To_be_Executed_getinfo();

		std::cout<<"\n\n"<<std::endl;
	}

}

void Bookkeeper::read_maximum_security_prisoner()
{
	ifstream read_executed("Maximum_security_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char Crime[50];
		getline (read_executed, key_string);
		strcpy(Crime,key_string.c_str());

		char Admission_date[20];
		getline (read_executed, key_string);
		strcpy(Admission_date,key_string.c_str());

		char Release_date[20];
		getline (read_executed, key_string);
		strcpy(Release_date,key_string.c_str());

		char Psychological_status[50];
		getline (read_executed, key_string);
		strcpy(Psychological_status,key_string.c_str());

		char Job_status[30];
		getline (read_executed, key_string);
		strcpy(Job_status,key_string.c_str());

		char Jailmate[25];
		getline (read_executed, key_string);
		strcpy(Jailmate,key_string.c_str());

		char Utility_status[40];
		getline (read_executed, key_string);
		strcpy(Utility_status,key_string.c_str());

		char Visiting_status[40];
		getline (read_executed, key_string);
		strcpy(Visiting_status,key_string.c_str());

		char Sentence[40];
		getline (read_executed, key_string);
		strcpy(Sentence,key_string.c_str());

		char Location_of_cell[20];
		getline (read_executed, key_string);
		strcpy(Location_of_cell,key_string.c_str());

		char Guard_statement[150];
		getline (read_executed, key_string);
		strcpy(Guard_statement,key_string.c_str());

		char Staff_statement[150];
		getline (read_executed, key_string);
		strcpy(Staff_statement,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek(key_string);
		int solitary_confinement_visits = 0;
		geek>>solitary_confinement_visits;

		char Overall_evaluation[150];
		getline (read_executed, key_string);
		strcpy(Overall_evaluation,key_string.c_str());

		char Visitor_Info[50];
		getline (read_executed, key_string);
		strcpy(Visitor_Info,key_string.c_str());

		char General_request[150];
		getline (read_executed, key_string);
		strcpy(General_request,key_string.c_str());

		char Lawyer[25];
		getline (read_executed, key_string);
		strcpy(Lawyer,key_string.c_str());

		char Evidence_info[150];
		getline (read_executed, key_string);
		strcpy(Evidence_info,key_string.c_str());

		char Conviction_date[20];
		getline (read_executed, key_string);
		strcpy(Conviction_date,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int Bail_amount = 0;
		geek2>>Bail_amount;

		char Appeal_for_release_status[30];
		getline (read_executed, key_string);
		strcpy(Appeal_for_release_status,key_string.c_str());

		char prescription[60];
		getline (read_executed, key_string);
		strcpy(prescription,key_string.c_str());

		/*char last_meal[35];
		getline (read_executed, key_string);
		strcpy(last_meal,key_string.c_str());

		char execution_date[20];
		getline (read_executed, key_string);
		strcpy(execution_date,key_string.c_str());*/

		getline (read_executed, key_string);

		Maximum_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);

		P1.get_prisoner_info();

		std::cout<<"\n\n"<<std::endl;
	}

}

void Bookkeeper::read_medium_security_prisoner()
{
	ifstream read_executed("Medium_security_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char Crime[50];
		getline (read_executed, key_string);
		strcpy(Crime,key_string.c_str());

		char Admission_date[20];
		getline (read_executed, key_string);
		strcpy(Admission_date,key_string.c_str());

		char Release_date[20];
		getline (read_executed, key_string);
		strcpy(Release_date,key_string.c_str());

		char Psychological_status[50];
		getline (read_executed, key_string);
		strcpy(Psychological_status,key_string.c_str());

		char Job_status[30];
		getline (read_executed, key_string);
		strcpy(Job_status,key_string.c_str());

		char Jailmate[25];
		getline (read_executed, key_string);
		strcpy(Jailmate,key_string.c_str());

		char Utility_status[40];
		getline (read_executed, key_string);
		strcpy(Utility_status,key_string.c_str());

		char Visiting_status[40];
		getline (read_executed, key_string);
		strcpy(Visiting_status,key_string.c_str());

		char Sentence[40];
		getline (read_executed, key_string);
		strcpy(Sentence,key_string.c_str());

		char Location_of_cell[20];
		getline (read_executed, key_string);
		strcpy(Location_of_cell,key_string.c_str());

		char Guard_statement[150];
		getline (read_executed, key_string);
		strcpy(Guard_statement,key_string.c_str());

		char Staff_statement[150];
		getline (read_executed, key_string);
		strcpy(Staff_statement,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek(key_string);
		int solitary_confinement_visits = 0;
		geek>>solitary_confinement_visits;

		char Overall_evaluation[150];
		getline (read_executed, key_string);
		strcpy(Overall_evaluation,key_string.c_str());

		char Visitor_Info[50];
		getline (read_executed, key_string);
		strcpy(Visitor_Info,key_string.c_str());

		char General_request[150];
		getline (read_executed, key_string);
		strcpy(General_request,key_string.c_str());

		char Lawyer[25];
		getline (read_executed, key_string);
		strcpy(Lawyer,key_string.c_str());

		char Evidence_info[150];
		getline (read_executed, key_string);
		strcpy(Evidence_info,key_string.c_str());

		char Conviction_date[20];
		getline (read_executed, key_string);
		strcpy(Conviction_date,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int Bail_amount = 0;
		geek2>>Bail_amount;

		char Appeal_for_release_status[30];
		getline (read_executed, key_string);
		strcpy(Appeal_for_release_status,key_string.c_str());

		char prescription[60];
		getline (read_executed, key_string);
		strcpy(prescription,key_string.c_str());

		/*char last_meal[35];
		getline (read_executed, key_string);
		strcpy(last_meal,key_string.c_str());

		char execution_date[20];
		getline (read_executed, key_string);
		strcpy(execution_date,key_string.c_str());*/

		getline (read_executed, key_string);

		Medium_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);

		P1.get_prisoner_info();

		std::cout<<"\n\n"<<std::endl;
	}

}

void Bookkeeper::read_minimum_security_prisoner()
{
	ifstream read_executed("Minimum_security_list.txt");
	while(1)
	{
		string key_string;

		char fname[10];
		if(!getline (read_executed, key_string))
			break;
		strcpy(fname,key_string.c_str());

		char lname[10]=" ";

		char x[3];
		getline (read_executed, key_string);
		stringstream geek1(key_string);
		int A = 0;
		geek1>>A;

		char g[10];
		getline (read_executed, key_string);
		strcpy(g,key_string.c_str());

		char p[14];
		getline (read_executed, key_string);
		strcpy(p,key_string.c_str());

		char ad[40];
		getline (read_executed, key_string);
		strcpy(ad,key_string.c_str());

		char o[30];
		getline (read_executed, key_string);
		strcpy(o,key_string.c_str());

		char hs[50];
		getline (read_executed, key_string);
		strcpy(hs,key_string.c_str());

		char r[15];
		getline (read_executed, key_string);
		strcpy(r,key_string.c_str());

		char id[11];
		getline (read_executed, key_string);
		strcpy(id,key_string.c_str());

		char Crime[50];
		getline (read_executed, key_string);
		strcpy(Crime,key_string.c_str());

		char Admission_date[20];
		getline (read_executed, key_string);
		strcpy(Admission_date,key_string.c_str());

		char Release_date[20];
		getline (read_executed, key_string);
		strcpy(Release_date,key_string.c_str());

		char Psychological_status[50];
		getline (read_executed, key_string);
		strcpy(Psychological_status,key_string.c_str());

		char Job_status[30];
		getline (read_executed, key_string);
		strcpy(Job_status,key_string.c_str());

		char Jailmate[25];
		getline (read_executed, key_string);
		strcpy(Jailmate,key_string.c_str());

		char Utility_status[40];
		getline (read_executed, key_string);
		strcpy(Utility_status,key_string.c_str());

		char Visiting_status[40];
		getline (read_executed, key_string);
		strcpy(Visiting_status,key_string.c_str());

		char Sentence[40];
		getline (read_executed, key_string);
		strcpy(Sentence,key_string.c_str());

		char Location_of_cell[20];
		getline (read_executed, key_string);
		strcpy(Location_of_cell,key_string.c_str());

		char Guard_statement[150];
		getline (read_executed, key_string);
		strcpy(Guard_statement,key_string.c_str());

		char Staff_statement[150];
		getline (read_executed, key_string);
		strcpy(Staff_statement,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek(key_string);
		int solitary_confinement_visits = 0;
		geek>>solitary_confinement_visits;

		char Overall_evaluation[150];
		getline (read_executed, key_string);
		strcpy(Overall_evaluation,key_string.c_str());

		char Visitor_Info[50];
		getline (read_executed, key_string);
		strcpy(Visitor_Info,key_string.c_str());

		char General_request[150];
		getline (read_executed, key_string);
		strcpy(General_request,key_string.c_str());

		char Lawyer[25];
		getline (read_executed, key_string);
		strcpy(Lawyer,key_string.c_str());

		char Evidence_info[150];
		getline (read_executed, key_string);
		strcpy(Evidence_info,key_string.c_str());

		char Conviction_date[20];
		getline (read_executed, key_string);
		strcpy(Conviction_date,key_string.c_str());

		getline (read_executed, key_string);
		stringstream geek2(key_string);
		int Bail_amount = 0;
		geek2>>Bail_amount;

		char Appeal_for_release_status[30];
		getline (read_executed, key_string);
		strcpy(Appeal_for_release_status,key_string.c_str());

		char prescription[60];
		getline (read_executed, key_string);
		strcpy(prescription,key_string.c_str());

		/*char last_meal[35];
		getline (read_executed, key_string);
		strcpy(last_meal,key_string.c_str());

		char execution_date[20];
		getline (read_executed, key_string);
		strcpy(execution_date,key_string.c_str());*/

		getline (read_executed, key_string);

		Minimum_security_prisoner P1(fname,lname,A,g,ad,p,o,hs,r,id,Crime,Sentence,Location_of_cell,Admission_date,Release_date, Guard_statement,Staff_statement,solitary_confinement_visits,Overall_evaluation,Visitor_Info,General_request,Psychological_status,Job_status,Jailmate,Lawyer,Evidence_info,Conviction_date,Bail_amount,Appeal_for_release_status,Utility_status, prescription, Visiting_status);

		P1.get_prisoner_info();

		std::cout<<"\n\n"<<std::endl;
	}

}

