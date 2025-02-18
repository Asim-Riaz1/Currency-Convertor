#include <iostream>
using namespace std;
class currencyConvertor
{
    private:
    double USDToEURRate;
    double EURToUSDRate;
    double USDToPKRRate;
    double USDToINRRate;
    public:
    currencyConvertor(double USDToEURRate, double EURToUSDRate, double USDToPKRRate, double USDToINRRate)
    {
        this->USDToEURRate = USDToEURRate;
        this->EURToUSDRate = EURToUSDRate;
        this->USDToPKRRate = USDToPKRRate;
        this->USDToINRRate = USDToINRRate;
    }
    double USDToEUR(double USDamount)
    {
        return USDamount*USDToEURRate;
    }
    double EURToUSD(double EURamount)
    {
        return EURamount*EURToUSDRate;
    }
    double USDToPKR(double USDamount)
    {
        return USDamount*USDToPKRRate;
    }
    double USDToINR(double USDamount)
    {
        return USDamount*USDToINRRate;
    }

    void displayExchangeRate() const
    {
        cout<<"--------Current Exchange Rate--------"<<endl;
        cout<<"1 USD to EUR: "<<USDToEURRate<<endl;
        cout<<"1 EUR to USD: "<<EURToUSDRate<<endl;
        cout<<"1 USD to PKR: "<<USDToPKRRate<<endl;
        cout<<"1 USD to INR: "<<USDToINRRate<<endl;

    }
};
int main()
{
    const double initialUSDToEURRate = 0.95;
    const double initialEURToUSDRate = 1.05;
    const double initialUSDToPKRRate = 277.79;
    const double initialUSDToINRRate = 86.79;
    currencyConvertor convertor(initialUSDToEURRate, initialEURToUSDRate, initialUSDToPKRRate, initialUSDToINRRate);
    int choice;
    double USDamount;
    double EURamount;
    char ch;
    do
    {
        
        cout<<"\n\t******** Currency Convertor Main Menu ********"<<endl;
        cout<<"1. Convert USD to EUR"<<endl;
        cout<<"2. Convert EUR to USD"<<endl;
        cout<<"3. Convert USD to PKR"<<endl;
        cout<<"4. Convert USD to INR"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the amount of USD: ";
            cin>>USDamount;
            cout<<USDamount<<" USD is equivalent to: "<<convertor.USDToEUR(USDamount)<<" EUR";
            break;
        case 2:
            cout<<"Enter the amount of EUR: ";
            cin>>EURamount;
            cout<<EURamount<<" EUR is equivalent to: "<<convertor.EURToUSD(EURamount)<<" USD";
            break;
        case 3:
            cout<<"Enter the amount of USD: ";
            cin>>USDamount;
            cout<<USDamount<<" USD is equivalent to: "<<convertor.USDToPKR(USDamount)<<" PKR";
            break;
        case 4:
            cout<<"Enter the amount of USD: ";
            cin>>USDamount;
            cout<<USDamount<<" USD is equivalent to: "<<convertor.USDToINR(USDamount)<<" INR";
            break;
        case 5:
            cout<<"Thanks for using this currency convertor."<<endl;
            break;
        default:
        cout<<"Invalid choice."<<endl;
            break;
        }
    } while (choice != 5 && choice != ch);
    

}