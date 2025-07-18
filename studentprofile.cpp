#include<iostream>
using namespace std;
class student
{
private:
int rollno;
int marks;
public:
string name;
string branch;
student( string studentname,string student_branch,int student_rollno,int student_marks)
{
name=studentname;
branch=student_branch;
rollno=student_rollno;
marks=student_marks;

}
void setmarks(int m)
{
marks=m;
}
int getmarks()
{
return marks;
}
void studentdetails()
{
cout<<"name:"<<	name<< endl;
cout<<"branch:"<<branch<< endl;
cout<<"rollno:"<<rollno<< endl;
cout<<"marks:"<<getmarks()<<endl;
}
};
int main()
{
student s1("sowjanya","information technology",92,90);
s1.studentdetails();
return 0;
}

