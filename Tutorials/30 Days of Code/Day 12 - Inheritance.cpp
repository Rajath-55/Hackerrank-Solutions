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

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        this->testScores = scores;
    }

    char calculate(){
      double temp = 0.0;
      char gr;
      for(int i=0; i<this->testScores.size(); i++){
        temp += this->testScores[i];
      }
      temp /= testScores.size();
      if (temp >= 90 && temp <= 100){
        return 'O';
      }
      if (temp >= 80 && temp < 90){
        return 'E';
      }
      if (temp >= 70 && temp < 80){
        return 'A';
      }
      if (temp >= 55 && temp < 70){
        return 'P';
      }
      if (temp >= 40 && temp < 55){
        return 'D';
      }
      else{
        return 'T';
      }
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
