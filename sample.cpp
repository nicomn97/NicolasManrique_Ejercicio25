#include <iostream>
#include <cmath>
#include <string>
#include <random>

void sGaus(int N, double mu, double sigma);


int main(int argc, char* argv[]) {

   if (argc != 4) return -1;

   int N = atof(argv[1]);
   double mu = atof(argv[2]);
   double sigma = atof(argv[3]);

   //int N=200; double mu=100.0; double sigma=0.03;
   sGaus(N, mu, sigma);
   return 0;
}


void sGaus(int N, double mu, double sigma) {
   double distr[N];
   std::default_random_engine generator;
   std::normal_distribution <double> distribution(mu,sigma);
   for( int i = 0; i < N; i++ ) {
      distr[i]= distribution(generator);
      std::cout << distr[i] << std::endl;
   }

}
