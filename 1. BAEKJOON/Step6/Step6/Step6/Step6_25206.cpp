#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int const MAX = 20;
    char const IGNORE_GRADE_P = 'P';
    double totalScore = 0.0, totalGradeScore = 0.0;
    
    for(int i=0; i<MAX; i++)
    {
        double gradeScore = 0.0;
        string input, courseName, gradeStr, grade;
        getline(cin, input);
        istringstream ss(input);
        ss >> courseName >> gradeStr >> grade;

        if(grade[0] == IGNORE_GRADE_P)
        {
            continue;
        }

        switch (grade[0])
        {
             case 'A' : gradeScore += 4.0; break;
             case 'B' : gradeScore += 3.0; break;
             case 'C' : gradeScore += 2.0; break;
             case 'D' : gradeScore += 1.0; break;
             case 'F' : gradeScore += 0.0; break;
        }
        if(grade[0] != 'F' && grade[1] == '+') gradeScore += 0.5;
        totalScore += stod(gradeStr) * gradeScore; 
        totalGradeScore += stod(gradeStr);
    }

    cout << totalScore / totalGradeScore;

    return 0;
}