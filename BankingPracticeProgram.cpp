#include<iostream>
void ShowBalance(double balance);
double deposite();
double withdraw(double balance);

int main()
{   
    double balance = 0;
    int choice=0;
    do{   
    std::cout<<"****************************************************************************************\n";
    std::cout<<" Enter your choice :\n";
    std::cout<<"****************************************************************************************\n";
    std::cout<<"1. SHOW BALANCE\n";
    std::cout<<"2. DEPOSITE MONEY\n";
    std::cout<<"3. WITHDRAW MONEY\n";
    std::cout<<"4. EXIT\n";
    std::cin>>choice;
    std::cin.clear();
    fflush(stdin);
    switch(choice)
    {
        case 1:ShowBalance(balance);
               break;
        case 2:balance += deposite();
               ShowBalance(balance);
               break;
        case 3:balance -= withdraw(balance);
               ShowBalance(balance);
               break;
        case 4:std::cout<<"THANKS FOR VISITING!\n";
               break;
        default:std::cout<<"INVALID CHOICE\n";
    }

    }
    while(choice != 4);
    
    return 0;
}
void ShowBalance(double balance){
    std::cout << "YOUR BALANCE IS : $"<<std::fixed << balance<<'\n';

}
double deposite(){
    double amount =0;
    std::cout<<"ENTER THE AMOUNT TO BE DEPOSITED: ";
    std::cin>>amount;
    if (amount>0){ 
        return amount;
    }
    else{
        std::cout<<"THAT'S NOT A VALID AMOUNT: \n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    std::cout<<"ENTER THE AMOUNT TO WITHDRAW: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"INSUFFICIENT FUNDS\n";
        return 0;
    }
    else if(amount<0){
        std::cout<<"THAT'S NOT A VALID AMOUNT:\n";
        return 0;
    }
    else{
    return amount;
    }
}