#include <iostream>
#include <cmath>

//DW ABOUT THIS UWU
float Q_rsqrt( float number ){
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;
  i  = 0x5f3759df - ( i >> 1 );
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );

  #ifndef Q3_VM
  #ifdef __linux__
    assert( !isnan(y) );
  #endif
  #endif
  return y;
}
//SOME VARS
float sqrt5 = 1/Q_rsqrt(5);
float PHI = (1+sqrt5) / 2;
//FAST
int nth_fibo_fast(int n){
	return (pow(PHI,n-1) - pow(1-PHI,n-1))/sqrt5;
}
//SLOW
int nth_fibo_slow(int n){
	int grandparent = 0;
	int parent = 1;
	int child;

	for(int generation = 2; generation < n; generation ++){
		child = grandparent + parent;
		grandparent = parent;
		parent = child;
	}
	return child;
}
//DRIVER
int main(){
	std::cout<<nth_fibo_fast(10)<<std::endl;
	std::cout<< nth_fibo_slow(10);
	return 0;
}
