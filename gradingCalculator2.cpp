#include <iostream>
using namespace std;

int main() {
    int assignments = 15;
    int exams = 50;
    int quizzes = 5;
    int final = 25;
    int gradedAssignments, gradedExams, gradedQuizzes, gradedFinal;

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






    return 0;
}