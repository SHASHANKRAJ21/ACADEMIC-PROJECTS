#include <iostream>
using namespace std;
class hospital
{
protected:
    string pateint_n;
    string pateint_age;
    string mobilenumber;
    string date;

public:
    void pateint()
    {
        cout << "ENTER THE NAME OF PATEINT;-";
        cin >> pateint_n;
        cout << "ENTER THE AGE OF PATIENT;-";
        cin >> pateint_age;
        cout << "ENTER THE MOBILE NUMBER OF THE PATIENT;-";
        cin >> mobilenumber;
        cout << "ENTER THE DATE;-";
        cin >> date;
        cout<<"\n\n";
    }
};
class disease : public hospital
{
protected:
    int a;
    int dfees;

public:
    void diseaseinf()
    {
        cout << "LIST OF DISEASE THAT PATIENT CAN HAVE"<<endl<<"\n";
        cout << "1.FEVER,COUGH,THROAT INFECTION,STOMACH ISSUE" << endl
             << "2.CANCER" << endl
             << "3.BRAIN" << endl
             << "4.EMERGENCY" << endl;
        cout << "PLEASE ENTER THE NUMBER OF THAT  DISEASE THAT PATIENT HAVE";
        cin >> a;
        if (a == 1)
        {
            cout << "FOR THE FEVER,COUGH,THROAT INFECTION,STOMACH ISSUE" << endl
                 << "WE HAVE --> DR.BHATTACAHRYA(MBBS)(MD)(MEDICINE)" << endl;
            cout << "VISITING FEES-->400" << endl;
            cout << "TREATMENT FEES-->500" << endl;
            dfees = 400 + 500;
            cout << "TOTAL FEES -->" << dfees;
        }
        if (a == 2)
        {
            cout << "FOR THE TREATMENT OF CANCER" << endl
                 << "WE HAVE --> DR.VISHNU(MBBS)(SURGEON)" << endl;
            cout << "VISITING FEES-->500" << endl;
            cout << "TREATMENT FEES-->1000" << endl;
            dfees = 1000 + 500;
            cout << "TOTAL FEES -->" << dfees;
        }
        if (a == 3)
        {
            cout << "FOR THE TREATMENT OF BRAIN PROBLEM" << endl
                 << "WE HAVE --> DR.RISHANK(MBBS)(BRAIN SPECIALIST)" << endl;
            cout << "VISITING FEES-->500" << endl;
            cout << "TREATMENT FEES-->1000" << endl;
            dfees = 1000 + 500;
            cout << "TOTAL FEES -->" << dfees;
        }
        if (a == 4)
        {
            cout << "EMERGENCY CASE" << endl
                 << "WE HAVE --> DR.MAMTA(MBBS)(SURGEON)" << endl;
            cout << "VISITING FEES-->0" << endl;
            cout << "TREATMENT FEES-->1000" << endl;
            dfees = 1000 + 0;
            cout << "TOTAL FEES THAT DOCTOR CHARGED IS-->" << dfees;
        }
        if (a < 1 || a > 4)
        {
            cout << "ENTER NUMBER IS NOT CORRECT";
        }
        cout<<"\n\n";
    }
};
class hroom : public disease
{
protected:
    int b;
    int normalr;
    int deluxer;
    int superdeluxe;
    int roomfee;
    int totalbill;

public:
    void charge()
    {
        cout << "THE LIST OF ROOMS AVALBLE IN HOSPITAL" << endl;
        cout << "1.normalr" << endl
             << "2.deluxer" << endl
             << "3.superdelux" << endl;
        cout << "please enter the number of room you want";
        cin >> b;
        if (b == 1)
        {
            cout << "THE CHARGE FOR NORMAL ROOM IS 400";
            roomfee = 400;
        }
        if (b == 2)
        {
            cout << "THE CHARGE FOR DELUXE ROOM IS 8000";
            roomfee = 8000;
        }
        if (b == 3)
        {
            cout << "THE CHARGE FOR SUPER DEKUXE IS 14000";
            roomfee = 1400;
        }
        if (b < 1 || b > 3)
        {
            cout << "PLEASE GIVE THE RIGHT NUMBER";
        }
        cout<<"\n\n";
    }
};
class test : public hroom
{
protected:
    int c;
    int testfee;

public:
    void ptest()
    {
        cout << "--------------------TEST PRESENT IN RB HOSPITAL ARE-------------------------" << endl
             << "\n";
        cout << "1.BLOOD TEST -->(500Rs)" << endl
             << "2.MRI -->(2500Rs)" << endl
             << "3.CT-SCAN -->(3000Rs)"<<endl
             << "4.ULTRASOUND -->(800Rs)"<<endl
             << "5.XRAY -->(1000Rs)" << endl
             <<"6.ENDOSCOPY -->(4000Rs)"<<endl
             <<"7.BIOPSY -->(3000Rs)"<<endl;
             cout<<"\n\n";
        cout<<"PLEASE ENTER YOUR CHOICE OF TEST THAT YOU WANT FOR PATIENT ";
        cin>>c;
        if(c==1){
            cout<<"YOU HAVE CHOOSE BLOOD TEST";
            testfee=500;
        }
        if(c==2){
            cout<<"YOU HAVE CHOOSE MRI";
            testfee=2500;
        }
        if(c==3){
            cout<<"YOU HAVE CHOOSE CT-SCAN";
            testfee=3000;
        }
        if(c==4){
            cout<<"YOU HAVE CHOOSE ULTRASOUND";
            testfee=800;
        }
        if(c==5){
            cout<<"YOU HAVE CHOOSE XRAY";
            testfee=1000;
        }
        if(c==6){
            cout<<"YOU HAVE CHOOSE ENDOSCOPY";
            testfee=4000;
        }
        if(c==7){
            cout<<"YOU HAVE CHOOSE BIOPSY";
            testfee=3000;
        }
         if (b < 1 || b > 7)
        {
            cout << "PLEASE GIVE THE RIGHT NUMBER";
        }
        cout<<"\n\n";
    }
};
class donation:public test
{
    protected:
    int t;
    public:
    void pmedicenes(){
        cout<<"IF YOU HAVE TO GIVE SOME KIND OF DONATION THEN PLEASE -->"<<endl;
        cin>>t;
        if(t>1){
            cout<<"You are the fuel to our fire, and I could not be more grateful than I am for you now in this moment. Truly, thank you.";

        }
        else{
            cout<<"THANK YOU";
        }
    }
};
class output:public donation{
    public:
    int TOTAL_BILL;
    void display(){
        cout<<"|----------------------------WELCOME TO R.B HOSPITAL--------------------------------------|"<<endl<<"\n\n";
        cout<<"|                                                                    MODINAGAR(GHAZIABAAD)|"<<endl;
        cout<<"|                                                                      (2012004)          |"<<endl;
        cout<<"|                                                                      DATE-"<<date<<"    |"<<endl;
        cout<<"|\n|\n|\n";
        cout<<"|         PATIENT NAME -->"<<pateint_n<<"                                                        |"<<endl;
        cout<<"|         PATIENT AGE -->"<<pateint_age<<"                                                       |"<<endl;
        cout<<"|         PATIEN CONTACT -->"<<mobilenumber<<"                                                   |"<<endl;
        cout<<"|\n|\n";
        cout<<"|         THE TOTAL DOCTOR FEES IS-->"<<dfees<<"                                                 |"<<endl;;
        cout<<"|         THE ROOM FEES ID-->"<<roomfee<<"                                                       |"<<endl;
        cout<<"|         THE TEST FEES IS-->"<<testfee<<"                                                       |"<<endl;
        cout<<"|-----------------------------------------------------------------------------------------|"<<endl<<"\n";
        TOTAL_BILL=dfees+roomfee+testfee;
        cout<<"TOTAL AMOUNT TO BE PAID -->"<<TOTAL_BILL<<"\n";
    }
};
int main(){
    output o;
    o.pateint();
    o.diseaseinf();
    o.charge();
    o.ptest();
    o.display();
    o.pmedicenes();
}