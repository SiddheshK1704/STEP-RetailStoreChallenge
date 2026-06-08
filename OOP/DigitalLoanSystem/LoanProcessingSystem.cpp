#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;

class Customer{
    private:
        string name;
        string CustID;
        
    public:
    
        Customer(string n, string id){
            name = n;
            CustID = id;
        }
        
        string getName(){
            return name;
        }
        
        string getCustomerID(){
            return CustID;
        }
        
        void displayCustomer(){
            cout<<"---------Customer Details---------\n"<<"Customer: "<<name<<"\nCustomer ID: "<<CustID<<"\n";
            cout<<"\n";
        }
        
};

class Loan{
    private:
        string loantype;
        double amount;
        double interestrate;
        int tenure;
        
    public:
        Loan(string type, double amt, double ir, int t){
            loantype = type;
            amount = amt;
            interestrate = ir;
            tenure = t;
        }
        
        string getLoanType(){
            return loantype;
        }
        
        double getAmount(){
            return amount;
        }
        
        double getInterestRate(){
            return interestrate;
        }
        
        int getTenure(){
            return tenure;
        }
        
        void displayLoan(){
            cout<<"----------Loan Details------------\n";
            cout<<"Loan Type: "<<loantype<<"\nLoan Amount:"<<amount<<"\nInterest Rate: "<<interestrate<<"\nTenure: "<<tenure<<"\n";
            cout<<"\n";
        }
};

class LoanProcessor {
public:
    void processApplication(Customer c, Loan l) {
        cout << "\nLoan Application Approved\n";    
        cout << c.getName() << " has applied for "
             << l.getLoanType() << endl;
    }

    double calculateEMI(Loan l) {
        double P = l.getAmount();
        double r = l.getInterestRate() / (12 * 100);
        int n = l.getTenure();

        double emi = (P * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

        return emi;
    }
};

class LoanWorkflow {
public:
    void executeWorkflow() {

        string name, id, type;
        double amount, rate;
        int tenure;

        cout << "Enter Customer Name: ";
        cin>>name;

        cout << "Enter Customer ID: ";
        cin>>id;

        cout << "Enter Loan Type: ";
        cin>>type;

        cout << "Enter Loan Amount: ";
        cin >> amount;

        cout << "Enter Interest Rate (%): ";
        cin >> rate;

        cout << "Enter Tenure (months): ";
        cin >> tenure;

        Customer customer(name, id);
        Loan loan(type, amount, rate, tenure);
        LoanProcessor processor;

        cout << "\nLOAN APPLICATION:\n";
        cout<<"\n";

        customer.displayCustomer();
        loan.displayLoan();

        processor.processApplication(customer, loan);

        double emi = processor.calculateEMI(loan);

        cout << fixed << setprecision(2);
        cout << "\nMonthly EMI : " << emi << endl;

        cout << "\nLoan Processing Completed Successfully\n";
    }
};

int main() {
    LoanWorkflow workflow;
    workflow.executeWorkflow();
    return 0;
}