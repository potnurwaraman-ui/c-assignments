#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        int rollno;
        string name;
        float marks;

        public:
        void accept()
        {
            cout<<"Enter roll number: ";
            cin>>rollno;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void calculateresult()
        {
            if(marks>=40)
            {
                cout<<"Result: Pass"<<endl;
            }
            else
            {
                cout<<"Result: Fail"<<endl;
            }
        }

        void display()
        {
            cout<<"\---Student Details---"<<endl;
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;

            calculateresult();
        }

        };

        int main()
        {
            student s;
            s.accept();
            s.display();
            return 0;
        }