#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

class GradeBook
{
public:
    // function that sets the course name
    void setCourseName(string name)
    {
        courseName = name; // store the course name in the object
    }

    // function that gets the course name
    string getCourseName()
    {
        return courseName; // return the object's courseName
    }

    //function that displays a welcome message
    void displayMessage()
    {
        // this statement calls getCourseName to get the
        // name of the course this GracdeBook represents
        cout << "Welcome to the grade book for\n"
             << getCourseName() << "!" << endl;
    }

private:
    string courseName; // course name for this GradeBook
};

int main()
{
    string nameofCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    //prompt for, input and set course name
    cout << "\nPlease enter the course name: " << endl;
    getline(cin, nameofCourse);
    myGradeBook.setCourseName(nameofCourse);

    cout << endl;
    myGradeBook.displayMessage();
    return 0;
}