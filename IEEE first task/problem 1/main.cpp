#include <iostream>

using namespace std;

int main()
{
    int number_of_problem;
    bool arr[3];
    int problem_solved=0;
    cin>>number_of_problem;
    for(int i=0;i<number_of_problem;i++)
    {
      cin>>arr[0];
      cin>>arr[1];
      cin>>arr[2];
      if(arr[0]&&arr[1]==1||arr[0]&&arr[2]==1||arr[1]&&arr[2]==1)
      {
          problem_solved++;
      }
    }
    cout<<problem_solved;


    return 0;
}
