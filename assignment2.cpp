#include<iostream>
using namespace std;

class rectangle
{
    private:
        float length,breadth;

    public:
        void getdata()
        {
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter breadth: ";
            cin>>breadth;
        }
        float area();
        float perimeter();
        
        void display()
        {
            cout<<" area="<<area()<<endl;
            cout<<" perimeter="<<perimeter()<<endl;
        }

};
 
float rectangle::area()
{
    return length*breadth;
}

float rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    rectangle r;
    r.getdata();
    r.display();
    return 0;
}