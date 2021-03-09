#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double GPA;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            GPA = aGpa;
        }

        bool hasHonors() {       // General function which returns different things depending on what object calls it.
            if(GPA >= 3.5)
                return true;
            else
                return false;
        }
};

int main(){
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors();
    return 0;
}
