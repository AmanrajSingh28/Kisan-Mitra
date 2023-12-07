#include <bits/stdc++.h>
using namespace std;

class BankAccount{
   private:
    int AccountNo;
    double balance;

    public:
     BankAccount(int a,double b){
        AccountNo=a;
        balance=b;
     }

     double deposit(double balance,double amt){
        return balance+amt;
     }

     double withdraw(double balance,double amt){
        if(balance<amt) return -1;
        else return balance-amt;
     }
   

};


int main(){
   
   int acn;
   double bal,amt;
   cin>>acn>>bal>>amt;
   BankAccount pnb(acn,bal);
   cout<<pnb.deposit(bal,amt)<<endl;
   cout<<pnb.withdraw(bal,amt)<<endl;

    return 0;
}