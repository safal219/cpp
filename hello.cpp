
#include <iostream>

using namespace std;

class physis
{
    protected:
    double ph;
    public:
    void get_physis()
    {
        cout<<"Enter marks for physis";
        cin>>ph;
    }
};
class chemistry
{
    protected:
    double cm;
    public:
    void get_chemistry()
    {
        cout<<"Enter mark for chemistry";
        cin>>cm;
    }
};
class maths
{
    protected:
    double mh;
    public:
    void get_math()
    {
        cout<<"Enter mark for maths";
        cin>>mh;
    }
};
class marks:public physis,chemistry,maths
{
    private:
    int roll,grade;
    string name;
    public:
    void get_data (int rollno)
    {
        roll=rollno;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter grade:"<<endl;
        cin>>grade;
        physis::get_physis();
        chemistry::get_chemistry();
        maths::get_math();
        roll ++;
    }
void show_data()
{
    cout<<"name<<""<<roll<<|t/t"<<(ph+cm+mh)/3 <<endl;
    cout<<"_____________________________________________________________________________"<<endl;
}
};
int main ()
{
    int n ;
    cout<<"Enter no of students "<<endl;
    cin>>n;
    marks m[n];
    for(int i=0; i<n; i++)
    {
        m[i].get_data(i);
    }
    system("cls");
    cout<<"_________________________________________recor "<<endl;
    cout<<"name rollo no chemisguuff math ugug avghrtyf"<<endl;
    cout<<"_____________________________"<<endl;
    for (int i=0; i<n; i++)
    {
        m[i].show_data();
    }
    return 0;
    
    }
