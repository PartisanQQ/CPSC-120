// Anthony Nguyen
// CPSC 120-19
// HW 03
// BONUS: Yes
// Desc: Grading Program

#include <iostream>
using namespace std;

int main()
{
    //Variables
    int userChoice;

    //Menu options
    cout << "1: Enter in score (0-100)." << endl;
    cout << "2: Enter in letter grade." << endl;
    cout << "Choose an option: ";
    cin >> userChoice;

    switch (userChoice)
    {
        //Case for score ranges when a grade is entered in
        case 1:
            {
                //Variables
                double userScore;

                //User score from 0-100
                cout << "Enter in a grade score: ";
                cin >> userScore;

                //Score ranges for each grade
                if (userScore >= 90 && userScore <= 100)
                {
                    cout << "Congrats, you earned an A!" << endl;
                }
                else if (userScore >= 80 && userScore < 90)
                {
                    cout << "Congrats, you earned a B!" << endl;
                }
                else if (userScore >= 70 && userScore < 80)
                {
                    cout << "Congrats, you earned a C!" << endl;
                }
                else if (userScore >= 60 && userScore < 70)
                {
                    cout << "Sorry, you earned a D." << endl;
                }
                else if (userScore >= 0 && userScore < 60)
                {
                    cout << "Sorry, you earned an F." << endl;
                }
                else
                {
                    cout << "Please enter in a number between 0-100." << endl;
                }

                return 0;
            }
        // Case for when a letter grade is entered in
        case 2:
            {
                //Variables
                char userGrade;

                //Grade from A to F
                cout << "Enter in a grade: ";
                cin >> userGrade;

                //Score ranges for each grade
                if (userGrade == 'A' || userGrade == 'a')
                {
                    cout << "A: 90 - 100" << endl;
                }
                else if (userGrade == 'B' || userGrade == 'b')
                {
                    cout << "B: 80 - 89" << endl;
                }
                else if (userGrade == 'C' || userGrade == 'c')
                {
                    cout << "C: 70 - 79" << endl;
                }
                else if (userGrade == 'D' || userGrade == 'd')
                {
                    cout << "D: 60 - 69" << endl;
                }
                else if (userGrade == 'F' || userGrade == 'f')
                {
                    cout << "F: 0 - 59" << endl;
                }
                else
                {
                    cout << "Please enter in a grade." << endl;
                }

                return 0;
            }

    }

    return 0;
}
