#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

    class Bank{

    private:
        string name;
        int accnumber;
        char type[10];
        int total=0;
        int amount=0;
    public:
        void setvalue()
        {
            cout<<"Enter name: \n";
            cin.ignore();

            getline(cin,name);

            cout<<"Account Number: \n";
            cin>>accnumber;
            cout<<"Account type: \n";
            cin>>type;
            cout<<"Enter balance:  \n";
            cin>>total;
        }

        void showdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"Accoount No: "<<accnumber<<endl;
            cout<<"Account type: "<<type<<endl;
            cout<<"Balance: "<<total<<endl;

        }

        void deposit(){
            cout<<"\n Enter amount do you want to deposite:\n";
            cin>>amount;
            cout<<"Available balance is: "<<total + amount<<endl;
        }

        void showbalance(){
            total=total+amount;
            cout<<"\nTotal available balance is: "<<total<<endl;
        }

        void withdrawl(){
            int a,availablebalance;
            cout<<"\n Write amount to withdrawl:\n";
            cin>>a;
            availablebalance = total - a;
            if(a<=total){
                cout<<"\nYour available balance is: "<<availablebalance<<endl;
            }
            else
                cout<<"Not enough money.."<<endl;

            //cout<<"\nYour available balance is: "<<availablebalance<<endl;
        }

        

    };

    int main(){

        Bank b;   // object of class..
        int choice;

        while(1){
            
            cout<<"\n ~~~~~~~~~~~ Welcome ~~~~~~~~~~~\n";
            cout<<"Enter your choice\n";
            cout<<"\t1. Enter name, Account number, Account type\n";
            cout<<"\t2. Person Enquiry\n";
            cout<<"\t3. Deposite Money\n";
            cout<<"\t4. Show Total Balance\n";
            cout<<"\t5. Withdrawl Money\n";
            cout<<"\t6. Cancel\n";
            cin>>choice;
            system("cls");

            switch(choice){  
            case 1: 
                b.setvalue();
                break;
            case 2:
                b.showdata();
                break;
            case 3:
                b.deposit();
                break;
            case 4:
                b.showbalance();
                break;
            case 5:
                b.withdrawl();
                break;
            case 6:
                exit(1);
                break;
            default:
                cout<<"Invalid choice.."<<endl<<"Sorry\n";
            
            }
        }
    }