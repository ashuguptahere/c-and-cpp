#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person
{
	private:
		vector<int> testScores;  
	public:
        int size;
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector <int> testScores):Person(firstName, lastName, id)
        {
            // this->firstName = firstName;
            // this->lastName = lastName;
            // this->id = id;
            this->testScores = testScores;
            size = testScores.size();
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            double s = 0.0;
            for(int i=0; i<size; ++i)
                s = s + testScores[i];
            s = s / size;
            char g;
            if(s>=90 && s<=100)
                g = 'O';
            else if(s>=80 && s<90)
                g = 'E';
            else if(s>=70 && s<80)
                g = 'A';
            else if(s>=55 && s<70)
                g = 'P';
            else if(s>=40 && s<55)
                g = 'D';
            else if(s<40)
                g = 'T';
            return g;
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}