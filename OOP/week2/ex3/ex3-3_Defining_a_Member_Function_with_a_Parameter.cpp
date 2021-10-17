#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string> // program uses C++ standard string class
using std::getline;
using std::string;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for"
             << courseName << "!" << endl;
    } // end function displayMessage
};    // end class GradeBook

// function main begins program exectuion
int main()
{
    string nameOfCourse;   // string of characters to store course name
    GradeBook myGradeBook; //create a GradeBook object named myGradeBook

    // Prompt for and input course name
    cout << "Please enter the course name : " << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    cout << endl;               // output a blank line

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
    return 0; // indicate successful termination
} //end main