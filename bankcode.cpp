#include<iostream>
#include<string>
using namespace std;

class bankaccount{
    private:
    string owner;
    double balance;
public:
void openaccount (string, name, double initial);{
    owner = name;
    if(initial>0){
        balance = initial;
    }else{
        balance =0;
    }
}
void deposit (double amount){
    if (amount>0){
      balance= balance+amount;
    }
    

}
void withdrawal(double amount){
    if(amount>0 && amount<=balance){
        balance = balance - amount
        return true;
    }
    return false;
}  
  string get owner(){
    return owner;
  }
};
intmain(){
    bankaccount acount;
    sring name;
    double initialdeposit;
    double depositamount
}