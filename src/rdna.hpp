#include <random>
#include <string>
using namespace std;


string randDNA(int seed, string bases, int n)
{
  mt19937 ran(seed); //engine producing different output
  string DNA; //string being returned by function
 
  uniform_int_distribution<> thing(0, bases.length);
  
  
  for(int i=0; i<n; i++)
  {
	  DNA= DNA + bases[thing(ran)];
  }
  
  return DNA;
 }

  
  
  
  
