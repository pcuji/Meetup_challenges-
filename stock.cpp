#include <iostream>
#include <utility>
using std::cout;

int main (int argc, const char * argv []){

  int days_prices[6] = { 7,1,5,3,6,4};

  int cheap_buy = days_prices[0];
  int pricey_sell = 0;
/*
signature:
digital signature
sig = Fsig (Fhash (m ), dA )
dA = is the signing private key
m = is the transactio or parts of the transactio. this is the transaction data
Fhash = is the hashing function
Fsig = is the signing algorithim
*/

  std:: string  sig, dA, m;
  int Fhash, Fsig;


sig = "sig digital signature";
dA = "dA is the signing private key";
m = "m this is the transactio data";
Fhash = 1112223334445566777;
Fsig = 33337777999;

  for (int i = 0 ; i<6 ; i++){
    cout << "**************************"<< '\n';
    cout << "this is cheap_buy"<< cheap_buy << '\n';
    cout << "this is pricey_sell"<< pricey_sell << '\n';
    cout << "this is days_prices"<< days_prices[i]<< '\n';
    cout << "**************************"<< '\n';

    // if (cheap_buy < days_prices[i]){
    if (cheap_buy > days_prices[i]){
      cheap_buy = days_prices[i];         //buy it now
      cout<< "Its perfect to buy my stock now is: " << cheap_buy<<  '\n';
    }
    if ((pricey_sell < days_prices[i]) || (pricey_sell == 7)){
      pricey_sell = days_prices[i];
      cout<< "perfect to sell"<< '\n';
    }
    else{
      cout<< "keep playing" << '\n';
    }
    cout<< days_prices[i] << '\n';
  }

  cout << "**************************"<< '\n';
  cout << "cheap_buy price: "<< cheap_buy << '\n';
  cout << "pricey_sell: "<< pricey_sell << '\n';
  cout << "**************************"<< '\n';

  cout<< sig << '\n';
  cout << dA << '\n';
  cout << m << '\n';
  cout << Fhash <<'\n';
  cout << Fsig << '\n';




}
