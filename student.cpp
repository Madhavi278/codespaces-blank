#include<iostream>
using namespace std;
class Student
{
public:
string fullName;
int rollNum;
double semPerentage;
string collegeName;
int collegeCode;
Student()
{
cout<<"Student class initialized!!\nIam a student\n";
}
~Student(){}
};
int main()
{
Student winni;
cout<<"Enter your name : ";
getline(cin,winni.fullName);
cout<<"Enter your roll number : ";
cin>>winni.rollNum;
cout<<"Enter your sem percentage : ";
cin>>winni.semPerentage;
cout<<"Enter your college name : ";
cin>>winni.collegeName;
cout<<"Enter your college code : ";
cin>>winni.collegeCode;
cout<<"Name : "<<winni.fullName<<endl;
cout<<"RollNum : "<<winni.rollNum<<endl;
cout<<"SemPercentage : "<<winni.semPerentage<<endl;
cout<<"CollegeName : "<<winni.collegeName<<endl;
cout<<"CollegeCode : "<<winni.collegeCode<<endl;
return 0;
}


