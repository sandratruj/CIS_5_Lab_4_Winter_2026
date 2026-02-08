#include <iostream>
#include <iomanip>
using namespace std;
using std::cout;
using std::endl;
using std::string;

//Create function
int calculateSum(const int arr[], int size);
double getAverage(int sum, int size);
void addBonus(int arr[], int size, int bonus = 5);
int findHighest(const int* arr, int size);
int countPassed(const int arr[], int size);

int main(){
  int size = 5;
  int scores [] = {65, 82, 90, 45, 78};

  //Show original scores 
  std::cout << "Original Scores: ";
  for (int i = 0; i < size; i++){
    std::cout << scores[i] << " ";
  }
  {
  //Calculate and display sum
  int sum = calculateSum(scores, size);
  std::cout << "Sum of scores: " << sum << std::endl;
    
  //Calculate and display average
  double average = getAverage(sum, size);
  std::cout << "Average score: " << average << std::endl;
  }
  //Add bonus to scores
  addBonus(scores, size, 10);
  std::cout << "Scores after adding bonus: ";
  for (int i = 0; i < size; ++i){
    std::cout << scores[i] << " ";
  }
  std::cout << std::endl;
  //Find and display highest score
  int highest = findHighest(scores, size);
  std::cout << "Highest score: " << highest << std::endl;
  //Count and display number of passed scores
  int passed = countPassed(scores, size);
  cout << "Number of students passed: " << passed << endl;
}

int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

double getAverage(int sum, int size) {
    return (double)sum / size;
}

void addBonus(int arr[], int size, int bonus) {
    for (int i = 0; i < size; i++) arr[i] += bonus;
}

int findHighest(const int* arr, int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++) if (arr[i] > highest) highest = arr[i];
    return highest;
}

int countPassed(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) if (arr[i] >= 60) count++;
    return count;
}