// this program calculate students' average score
// add them up then take the average
// created by Po-I Wu on 01/05/2018

#include <iostream>
using namespace std;

int main()   // program main function
{
	int s1, s2, s3;  //create three integer variable
	s1 = 85;
	s2 = 86;
	s3 = 92;

	float av = (s1 + s2 + s3) / 3.0;  // create a float variable and calculate the average

	cout << "Student 1: " << s1 << endl;
	cout << "Student 2: " << s2 << endl;
	cout << "Student 3: " << s3 << endl;
	cout << "Average: " << av << endl;

	system("pause");  // pause the window

	return 0;
}
