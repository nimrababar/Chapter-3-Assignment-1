#include <iostream>

#include <string>

class GradeBook {

 private:
	std::string courseName;
	std::string instructorName;

 public:

    GradeBook(const std::string &, const std::string &);
	void setCourseName(const std::string &);
	void setInstructorName(const std::string &);
    std::string getCourseName();
	std::string getInstructorName();
	 void displayMessage();
	 };
GradeBook::GradeBook(const std::string &name, const std::string &instructor) {
	setCourseName(name);
	setInstructorName(instructor);

}
void GradeBook::setCourseName(const std::string &name) { courseName = name; }
void GradeBook::setInstructorName(const std::string &instructor) { instructorName = instructor; }
std::string GradeBook::getCourseName() { return courseName; }

std::string GradeBook::getInstructorName() { return instructorName; }


void GradeBook::displayMessage() {

    std::cout << "Welcome to the grade book for: " << getCourseName() << "!\n"

              << "This course is presented by: " << getInstructorName()

              << std::endl;

}

int main(int argc, const char *argv[]) {

    GradeBook gradeBook1("This is a course", "The Instructor");

    gradeBook1.displayMessage();

    return 0;

}
