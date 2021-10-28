#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
 int N;
 cin >> N;
 
 int * results = new int[N];
 for (int i=0; i<N; i++)
 {
  int days, nParties, screwedDays=0;
  cin >> days >> nParties;
  int * hartals = new int[nParties];
  for (int j=0; j<nParties; j++) cin >> hartals[j];
  for (int j=0,daysPassed=1; daysPassed<=days; j++, j%= 7,daysPassed++) 
   if ((j != 5) && (j != 6)) 
    for (int k=0; k<nParties; k++) 
     if (!(daysPassed % hartals[k]))
     { screwedDays++; break;}
  results[i] = screwedDays;
 }
 
 for (int i=0; i<N; i++) cout << results[i] << endl;
 return 0;
}
