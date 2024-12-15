#include <iostream>
#include <string>
using namespace std;

int problemsSolved(int n, string contestLog) {
    int timeRequired[26];
    for (int i = 0; i < 26; ++i) {
        timeRequired[i] = i + 1;
    }

    int totalTime = 0;
    int solvedProblems = 0;
    

    for (int i = 0; i < contestLog.length(); ++i) {
        if (contestLog[i]==contestLog[i+1]){
             totalTime=totalTime+(i+1); 
             continue;}
        totalTime += timeRequired[contestLog[i] - 'A'];
        if (totalTime <= n) {
            solvedProblems++;
        }
    }

    return solvedProblems;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string contestLog;
        cin >> contestLog;

        int result = problemsSolved(n, contestLog);
        cout << result << endl;
    }

    return 0;
}
