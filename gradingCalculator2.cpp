#include <iostream>
using namespace std;

int main() {
    int assignments = 15;
    int exams = 50;
    int quizzes = 5;
    int final = 30;
    float gradedAssignments, gradedExams, gradedQuizzes, gradedFinal, finalGrade;

    cout<<"The weight of each section: "<<endl;
    cout<<"Assignment: "<< assignments <<"%"<<endl;
    cout<<"Exams: "<< exams <<"%"<<endl;
    cout<<"Quizzes: "<< quizzes <<"%"<<endl;
    cout<<"Final Exam: "<< final <<"%"<<endl;

    cout<<"What is the graded percentage for the Assignments section?"<<endl;
    cin>>gradedAssignments;
    cout<<"What is the graded percentage for the Exams section?"<<endl;
    cin>>gradedExams;
    cout<<"What is the graded percentage for the Quizzes section?"<<endl;
    cin>>gradedQuizzes;
    cout<<"What is the graded percentage for the Final Exam section?"<<endl;
    cin>>gradedFinal;

    float percentAssignment = assignments / 100.0 * gradedAssignments;
    float percentExams = exams / 100.0 * gradedExams;
    float percentQuizzes = quizzes / 100.0 * gradedQuizzes;
    float percentFinal = final / 100.0 * gradedFinal;

    cout<<percentAssignment<<" %"<<" in Assignments"<<endl;
    cout<<percentExams<<" %"<<" in Exams"<<endl;
    cout<<percentQuizzes<<" %"<<" in Quizzes"<<endl;
    cout<<percentFinal<<" %"<<" in Final Exam"<<endl;








    return 0;
}