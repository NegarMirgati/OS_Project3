#include "main.h"

using namespace std;

double fRand(double fMin, double fMax)
{
	 
    double f = (double)rand() / RAND_MAX;
    //srand (time(NULL));
    return fMin + f * (fMax - fMin);
}

void write_on_file(string addr, double data){

  ofstream myfile;
  myfile.open(addr, ios_base::app);

  if (myfile.is_open())
  	myfile << data << " ";
  else
  	exit(0);

  myfile.close();
  
}


void generate_input(string addr){

	for(int i = 0; i<50 ; i++){

		double out = fRand(0,50);
		write_on_file(addr, out);
	}


}


int main(){


	generate_input("./x.txt");
	generate_input("./y.txt");
	generate_input("./z.txt");
}