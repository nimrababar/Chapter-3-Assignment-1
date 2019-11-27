#include <string>

#include <iostream>

class GradeBook {

 private:
	 std::string courseName;

 public:
	 explicit GradeBook(const std::string &);
	void setCourseName(const std::string &);
	std::string getCourseName();
	void displayMessage();

};
GradeBook::GradeBook(const std::string &name) { setCourseName(name); }
void GradeBook::setCourseName(const std::string &name) {

    if (name.length() <= 25) { courseName = name; }

    if (name.length() > 25) {

        courseName = name.substr(0, 25);

        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n";

        std::cout << "Limiting courseName to first 25 characters.\n"

                  << std::endl;
		}

}
std::string GradeBook::getCourseName() { return courseName; }

void GradeBook::displayMessage() {

    std::cout << "Welcome to the grade book for\n"

              << getCourseName() << "!" << std::endl;

}
int main(int argc, const char *argv[]) {

    GradeBook gradeBook1("CS101 Introduction to Programming in C++");

    GradeBook gradeBook2("CS102 C++ Data Structures");

    std::cout << "gradeBook1 initial course name: "

              << gradeBook1.getCourseName();

    std::cout << "\ngradeBook2 initial course name: "

              << gradeBook2.getCourseName() << std::endl;

    gradeBook1.setCourseName("CS101 C++ Programming");
	std::cout << "\ngradeBook1 course name: " << gradeBook1.getCourseName();

    std::cout << "\ngradeBook2 course name: " << gradeBook2.getCourseName()

              << std::endl;

    return 0;

}
