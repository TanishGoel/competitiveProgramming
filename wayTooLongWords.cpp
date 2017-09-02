// solution to 71A
#include <iostream>
#include <string>

using namespace std;
int main()
{
  string arr[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++){
    if ( arr[i].size() > 10){
      cout << arr[i][0] << arr[i].size() - 2 << arr[i].back() << endl;
    }
    else{
      cout << arr[i] << endl;
    }
  }
}
