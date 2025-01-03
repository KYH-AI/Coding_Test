#include <iostream>
using namespace std;

int main()
{
    int N;
    int const MAX_SCORE = 100;
    cin >> N;
    double* grade = new double[N]{0};
    double max, avg = 0.0;
    
    max = grade[0];
    for(int i=0; i<N; i++)
    {
        cin >> grade[i];
        if(max < grade[i]) max = grade[i];
    }

    for(int i=0; i<N; i++)
    {
        grade[i] = grade[i] / max * MAX_SCORE;
        avg += grade[i];
    }

    avg /= N;
    cout << avg;

    delete[] grade;
    return 0;
}