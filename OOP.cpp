#include<iostream>
using namespace std;

class AbstractEmployee{                // Abstract Class
    virtual void AskForPromotion()=0; // Abstract Function
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;

public:
    Employee(string name, string company, int age) {
        Name = name; 
        Company = company;
        Age = age;

    }
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void introduceYourself(){
        cout<< "Name - " << Name << endl;
        cout<< "Company - "<< Company << endl;
        cout<< "Age - " << Age << endl;
    }
    void AskForPromotion(){
        if(Age > 30 ){
            cout<< Name << " got promoted!" <<endl;
        }
        else{
            cout<< Name << " sorry NO protion for you!"<<endl;
        }
    }
    virtual void work(){    // Here, Virtual use for reference polymorphisum
        cout<< Name<< " is checking email, performing tasks..."<<endl;
    }
    
};
//inheritence
class Developer: public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string language): Employee(name, company, age){
        FavProgrammingLanguage = language;
    }
    void Fixbug(){
        // cout<< getName() << " fix bug using "<<FavProgrammingLanguage<<endl;
        cout<< Name << " fix bug using "<<FavProgrammingLanguage<<endl; //Here, Name, accessable because Name is protected.
    }
    void work(){
        cout<< Name<< " is writting code in "<< FavProgrammingLanguage <<endl;
    }
};
class Teacher: public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject): Employee(name, company, age){
        Subject = subject;
    }
    
    void Preparelesson(){
       cout<< Name <<" is preparing " << Subject << " lesson." <<endl; 
    }
    void work(){
        cout<< Name<< " is teaching "<< Subject <<endl;
    }
};

int main (){
    /*
    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
    employee1.introduceYourself();

    Employee employee2 = Employee("Jhon", "Amazon", 35);
    employee2.introduceYourself();

    // employee1.setName("John");
    // cout<<"Employee name is: "<< employee1.getName()<<endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion(); */

    Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
    // d.Fixbug();
    // d.AskForPromotion();
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.Preparelesson();
    t.AskForPromotion();
/*
    //polymorphisum
    d.work();
    t.work();
*/
    //polymorphisum pointer
    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->work();
    e2->work();




}