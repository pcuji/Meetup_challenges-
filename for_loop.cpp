
#include <iostream>

/*
problem from meetup april 8 2018 
Given a m x n matrix, return the spiral representation of it.
*/

int main (int argc ,const char * argv [] ){

  int ** my_2D = new int * [5];

  for (int i =0; i<5 ; ++i){
    my_2D[i] = new int  [5];
    *my_2D[i] = i;
    std::cout << *my_2D [i];

  }
  std:: cout << " hi this my predro's projects for the World\n";


  int my_array [3][3]= {
    {2,3,4},
    {5,6,7},
    {8,9,10}
  };
  int flag = 0;
  int t =0;
  for ( int i=0; i<3 ; ++i){
    std:: cout << "im here:  " << t << "\n";
    for (int j=0;j<3; ++j){

      if (j==2 and i != 0 and flag ==0 ){
        std:: cout << "first curve" << "\n";
        std:: cout << my_array[1][j] << " " << "\n";
        std:: cout << my_array[2][j] << "" << "\n";
      }
      if (i==2 and flag == 0){
        std:: cout << "second curve"<< "\n";
        std:: cout << my_array[2][1] << ""<< "\n";
        std:: cout << my_array[2][0] << ""<< "\n";
        flag = 1;
      }
      if (i==2 and j==1 and i!=0 and flag ==1 ){
        std::cout << "final curve" << "\n";
        std::cout << my_array[1][0] << "\n";
        std::cout << my_array[1][1] << "\n";
      }
      if (i!= 1 and flag ==0 ){
        std:: cout << "reg looping"<< "\n";
        std:: cout << my_array[i][j] << " " << "\n";
      }
    }
    t= t+1;
  }

  return 0 ;
}
