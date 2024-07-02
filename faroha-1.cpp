#include <iostream>
#include <string>

using namespace std;

void logOut(){ 
    cout << "\n************************* Logged out successfully *************************";
    cout<<"\n**\n";
}
// //-----------------------------------------------------------------------------------------------------
void deleteAllInfo(string& Patient_name, string& Date_of_admission, string& Date_of_discharge, string& Disease, string& Dr_name,int& No_patient,int& age,string& gender){ //parameterized

    string check;
    cout<<"\nAre you sure you want to delete all information? yes or no? ";
    cin>>check;//yes/no
    if(check=="yes"||check=="YES"||check=="Yes"||check=="yEs"||check=="yeS"){
        Patient_name="";
        Date_of_admission="";
        Date_of_discharge="";
        Disease="";
        Dr_name="";
        gender="";
        No_patient=0;
        age=0;
        cout<<"\n************ Deleted successfully ************\n";
    }
    cout<<"\n**\n";
}
//----------------------------------------------------------------------------------------------------
void displayingInfo(string Patient_name,string Date_of_admission,string  Date_of_discharge,string Disease,string Dr_name,int No_patient,string Hospital_name,string Hospital_number,string Hospital_address,int age,string gender)
{
    if(No_patient==0){
        cout<<"\nThere is no information\n";
        cout<<"\n**\n";
    }else{
        cout<<
        "Hospital name : "<<Hospital_name<<'\n'<<
        "Hospital number : "<<Hospital_number<<'\n'<<
        "Hospital address : "<<Hospital_address<<'\n'<<
        "Patient Name : "<<Patient_name<<'\n'<<
        "patient age : "<<age<<'\n'<<
        "Patient gender : "<<gender<<'\n'<<
        "Date of admission : "<<Date_of_admission<<'\n'<<
        "Date of discharge : "<<Date_of_discharge<<'\n'<<
        "Disease : "<<Disease<<'\n'<<
        "Doctor name : "<<Dr_name<<'\n'<<"\n************ All information recorded ************\n";
        cout<<"\n**\n";
    }
}
//----------------------------------------------------------------------------------------------------
void registerPatient(string& Patient_name, string& Date_of_admission, string& Date_of_discharge, string& Disease, string& Dr_name,int& No_patient,int& age,string& gender) {
    cout << "\n************ Registration ************\n";
    cout << "\nEnter the patient name : ";
    cin.ignore(); // Clear newline character from buffer
    getline(cin, Patient_name);
    
    cout<< "\nEnter the patient age : ";
    cin>>age;

    cout<< "\nEnter the patient gender(male/female) : ";
    cin.ignore(); // Clear newline character from buffer
    getline(cin,gender);

    cout << "\nEnter the type of disease : ";
    getline(cin, Disease);

    cout << "\nEnter the doctor name : ";
    getline(cin, Dr_name);

    cout << "\nEnter the date of admission : ";
    getline(cin, Date_of_admission);

    cout << "\nEnter the date of discharge : ";
    getline(cin, Date_of_discharge);

    cout << "\n************ Added successfully ************\n";
    cout<<"\n**\n";
    No_patient++;
}
//---------------------------------------------------------------------------------------------------
//main method => executing code
int main() {

    string Hospital_name="EL_GALALA HOSPITAL";
    string Hospital_number="(02) 2816-6612";
    string Hospital_address="EL_SOKHNA";
    string Patient_name;
    int age;
    string gender;
    string Date_of_admission;
    string Date_of_discharge;
    string Disease;
    string Dr_name;
    int No_patient=0;

    bool check=true;
    int cases=0;
    bool t=true;
    cout<<"\n************************* Hi,this is my simple hospital management system *************************\n";

    //****************************************************
    while(t){
        cout<<"\nPress 1 , if you want to regestrate a new patient\npress 2 , if you want to display all information\npress 3 , if you want to delete all information\npress 4 , if you want to exit\n\n";
        cin>>cases;
        cout<<"\n**\n";
        if(cases!=1&&cases!=2&&cases!=3&&cases!=4){
            cout<<"\nnot found,you only have four options 1 or 2 or 3 or 4\n";
        }else{
            t=false;
        }
    }
    //******************************************************
    while(check){
        //start of switch
        switch (cases)
        {
            case 1:
                registerPatient(Patient_name, Date_of_admission, Date_of_discharge, Disease, Dr_name,No_patient,age,gender);
                break;

            case 2:
                displayingInfo(Patient_name, Date_of_admission, Date_of_discharge, Disease, Dr_name,No_patient,Hospital_name,Hospital_number,Hospital_address,age,gender);
                break;

            case 3:
                deleteAllInfo(Patient_name, Date_of_admission, Date_of_discharge, Disease, Dr_name,No_patient,age,gender);
                break;

            case 4:
                logOut();
                return 0;
        }
        // end of switch
            string s;  //check => completed loop or end the program
            cout<<"\nDo you want to do something else? yes or no? ";
            cin>>s;
            if(s=="yes"||s=="YES"||s=="Yes"||s=="yEs"||s=="yeS"){   //complete the program
                check=true;
                cout<<"\nPress 1 , if you want to regestrate a new patient\npress 2 , if you want to display all information\npress 3 , if you want to delete all information\npress 4 , if you want to exit\n\n";
                cin>>cases;
                cout<<"\n**\n";
            }else{//end the program
                check=false;
                cout<<"\n************************* logged out successfully *************************\n";
                cout<<"\n**\n";
            }
    }

    return 0;
}