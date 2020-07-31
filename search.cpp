#include<iostream>
#include<fstream>
using namespace std;

int main()
{

ifstream th("Guards_list.txt");
int user_id;
string fname,lname,gender,phone,address,occupation,hs,religion,unit,rank,shift,position,ammunition_status,psyche_evaluation;
int age,id,experience;
double salary;

cout<<"User id: ";
cin>>user_id;
int flag=0;
while(th>>fname>>lname>>age>>gender>>phone>>address>>occupation>>hs>>religion>>id>>unit>>rank>>shift>>position>>ammunition_status>>psyche_evaluation>>salary>>experience)
{
    if(id==user_id)
    {
        flag=1;
        cout<<"First Name: "<<fname<<endl<<"Last Name: "<<lname<<endl<<
    "Age: "<<age<<endl<<"Gender: "<<gender<<endl<<"Phone: "<<phone<<endl<<"Address: "<<address<<endl<<
    "Occupation: "<<occupation<<endl<<"Health Status: "<<hs<<endl<<"Religion: "<<religion<<endl<<
    "ID: "<<id<<endl<<"Unit: "<<unit<<endl<<"Rank: "<<rank<<endl<<"Shift: "<<shift<<endl<<
    "Position: "<<position<<endl<<"Ammunition Status: "<<ammunition_status<<endl<<
    "Psyche Evaluation: "<<psyche_evaluation<<endl<<"Salary: "<<salary<<endl<<"Experience: "<<experience<<endl;
    Guards P1(fname,lname,A,g,ad,p, o,hs,r,	id, unit, rank,shift,post,ammunition_status,psyche_evaluation, salary, experience);

		P1.guard_getinfo();
		break;
    }

}

if(flag==0)
{
    cout<<"Not Here"<<endl;
}


}
