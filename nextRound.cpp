// Solution to 158A
#include <iostream>
using namespace std;

int main()
{
  int n, k, counter = 0;
  int scores[50];
  cin >> n >> k;
  for (int i = 0; i < n; i++){
    cin >> scores[i];
  }
  for(int j = 0; j < n; j++){
    if(scores[j] >= scores[k-1] && scores[j] > 0){
      counter++;
    }
  }
  cout << counter << endl;
}
