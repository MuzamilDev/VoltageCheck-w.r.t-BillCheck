#include<iostream>

using namespace std;

int main()
{
    double units, length;
    double formula1, formula2 , formula3, formula4, formula5, formula6;


    cout<<"Enter Units to be Consumed "<<endl;
    cin>>units;

    cout<<"Find Length in km "<<endl;
    cin>>length;


    formula1=units*19.5;
    formula2=units*19;
    formula3=units*18.5;
    formula4=units*18;
    formula5=units*17;
    formula6=units*15;


    if(length >= 20 && length < 30)
    cout<<"Your Bill after discount: "<<formula1<<endl;

    else if(length >= 30 && length < 40)
    cout<<"Your Bill after discount: "<<formula2<<endl;


    else if (length >=40 && length < 50)
    cout<<"Your Bill after discount: "<<formula3<<endl;

    else if( length >= 50 && length < 60)
    cout<<"Your Bill after discount: "<<formula4<<endl;

    else if(length >= 60 && length < 80)
    cout<<"Your Bill after discount: "<<formula5<<endl;

    else
    cout<<"Your Bill after discount: "<<formula6<<endl;

        return 0;
}
