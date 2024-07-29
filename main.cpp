#include <iostream>
using namespace std;
class Bank_menu
{
public:
    void update_info()
    {
        cout<<"---UPDATE INFO---"<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"1. AccountType "<<endl;
        cout<<"2. UserName "<<endl;
        cout<<"3. Password "<<endl;
        cout<<"4. First Name "<<endl;
        cout<<"5. Last Name "<<endl;
        cout<<"6. Mother Name "<<endl;
        cout<<"7. Address "<<endl;
    }
    void Balance_related_menu()
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1. CHECK BALANCE"<<endl;
        cout<<"2. DEPOSIT CASH"<<endl;
        cout<<"3. WITHDRAWAL"<<endl;
        cout<<"4. TRANSFER MONEY"<<endl;
        cout<<"5. ACCOUNT INFO"<<endl;
        cout<<"6. UPDATE "<<endl;
    }
     void Accout_type_menu()
    {
        cout<<"Select Account Type: "<<endl;
        cout<<"0. Back to main menu "<<endl;
        cout<<"1. Saving Account "<<endl;
        cout<<"2. Current Account "<<endl;
    }
    void menu()
    {
        cout<<"1. CREATE NEW ACOUNT"<<endl;
        cout<<"2. LOGIN"<<endl;
        cout<<"0. EXIT"<<endl;
    }
};
class Bank_Account : public Bank_menu
{
private:
   string user_name;
    int password=0;
        float CBalance=0,Dcash=0,Wcash=0,Tmoney=0;
    string fname,lname,mother_name,Address,Account_typ,tranfer_user_name;

public:
    void setUserName(string user_name_1)
    {
        user_name=user_name_1;
    }
     string getUserName()
    {
        cout<<user_name<<endl;
        return user_name;
    }
    void setpasssword(int password_1)
    {
        password=password_1;
    }
   int getpasssword()
    {
        cout<<password<<endl;
        return password;
    }
    void setfname(string fname_1)
    {
        fname=fname_1;
    }
    string getfname()
    {
        cout<<fname<<endl;
        return fname;
    }
    string getlname()
    {
        cout<<lname<<endl;
        return lname;
    }
    void setlname(string lname_1)
    {
        lname=lname_1;
    }
    void setmother_name(string mother_name_1)
    {
        mother_name=mother_name_1;
    }
     string getmother_name()
    {
        cout<<mother_name<<endl;
        return mother_name;
    }
    void setAddress(string Address_1)
    {
        Address=Address_1;
    }
    string getAddress()
    {
        cout<<Address<<endl;
        return Address;
    }
    void setaccount_type(int choice)
    {
        string s,c;
        if(choice==1)
        {
            s=saving_accout();
           Account_typ=s;
        }
        else if(choice==2)
        {
            c=current_account();
             Account_typ=c;
        }
    }
    string saving_accout()
        {
            Account_typ="SAVING ACCOUNT";
            return Account_typ;
        }
    string current_account()
    {
           Account_typ="CURRENT ACCOUNT";
           return Account_typ;
    }
       void first_name()
    {
        cout<<"WELOCOME "<<fname<<endl;
    }
    void deposite()
    {
        cout<<"---DEPOSIT CASH---"<<endl<<endl;
        cout<<"CURRENT BALANCE: "<<CBalance<<endl;
        cout<<"ENTER DEPOSIT AMOUNT: ";
            cin>>Dcash;
        cout<<"CASH DEPOSITE SUCCESSFUL..."<<endl;
        CBalance+=Dcash;
        cout<<"OK..."<<endl;
    }
    void Withdrawal()
    {
        cout<<"---WITHDRAWAL CASH---"<<endl;
        cout<<"CURRENT BALANCE: "<<CBalance;
         cout<<endl<<"ENTER WITHDRAWAL AMOUNT: ";
        cin>>Wcash;
        if(CBalance==0&&Wcash>=CBalance)
        {
            cout<<"THERE IS NO MONEY IN YOUR ACCOUNT SO, "<<endl;
            cout<<"AMOUNT NOT TO BE WITHDRAWAL..."<<endl;
        }
        else{
        cout<<"CASH WITHDRAWAL SUCCESSFUL..."<<endl;
        CBalance-=Wcash;
        cout<<"OK..."<<endl;

        }
    }
    void Account_info()
    {
        string s,c;
        cout<<"---ACCOUNT INFO---"<<endl;
        cout<<"Account Type : "<<Account_typ<<endl;
        cout<<"UserName : "<<user_name<<endl;
        cout<<"Password : "<<password<<endl;
        cout<<"First Name : "<<fname<<endl;
        cout<<"Last Name : "<<lname<<endl;
        cout<<"Mother Name : "<<mother_name<<endl;
        cout<<"Address : "<<Address<<endl;
        cout<<"OK..."<<endl;
    }
    void tranfer()
    {
        cout<<"---TRANSFER MONEY---"<<endl;
        cout<<"CURRENT BALANCE: "<<CBalance<<endl;
        cout<<"ENTER THE AMOUNT TO BE TRANSFERRED ";
        cin>>Tmoney;
        if(CBalance==0&&CBalance<=Tmoney)
        {
            cout<<"THERE IS NO MONEY IN YOUR ACCOUNT SO, "<<endl;
            cout<<"AMOUNT NOT TO BE TRANSFERRED..."<<endl;
        }
        else{
        cout<<"TRANFERRED TO(Username of person) ";
         cin>>tranfer_user_name;
        CBalance-=Tmoney;
        cout<<"AMOUNT SUCCESSFULLY TRANSFERRED..."<<endl;
        cout<<"OK..."<<endl;
        }
    }
    void Balance()
    {
        cout<<"---BALANCE DASHBOARD---"<<endl;
        cout<<"Sr.NO.\t\t TRANSACTION \t\t AMOUNT "<<endl;
        cout<<"1.\t\t "<<"DEPOSIT \t\t "<<Dcash<<endl;
        cout<<"2.\t\t "<<"WITHDRAWAL \t\t "<<"-"<<Wcash<<endl;
        cout<<"3.\t\t "<<"TRANSFER TO "<<tranfer_user_name<<" \t\t "<<"-"<<Tmoney<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"ACCOUNT BALANCE: "<<CBalance<<endl;
        cout<<"OK..."<<endl;

    }
    void create_new_account()
    {
        cout<<"---CREATE ACCOUNT---"<<endl;
        cout<<"First Name :  ";
        cin>>fname;
        cout<<"OK.."<<endl;
        cout<<"Last Name :  ";
        cin>>lname;
        cout<<"OK.."<<endl;
        cout<<"Mother Name :  ";
        cin>>mother_name;
        cout<<"OK.."<<endl;
        cout<<"Address :  ";
        cin>>Address;
        cout<<"OK.."<<endl;

    }
    string User_name()
    {
        return  user_name;
    }
    int pass()
    {
       return password;
    }
   /*   void foget_Username()
    {

    string name;

       cout<<"Forget User Name: ";
       cin>>name;
    }
    void forget_password()
    {
        int passwo;
        cout<<"Forget Password: ";
        cin>>passwo;
    }*/
};

int main()
{
    Bank_Account e1[81];
    int num,i,choice,choice_1,choice_2,password;
    string user_name;
    cout << "WELCOME TO BANK ACCOUNT SYSTEM" << endl;
    for(i=0; i<=81; i++)
    {
        e1[i].menu();
        cout<<"Enter you choice: ";
        cin>>num;
        switch(num)
        {
        case 1:
            {
                e1[i].create_new_account();
                //create account
                e1[i].Accout_type_menu();
                cout<<"Enter you choice: ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                        {
                        cout<<"Saving Account Ok.."<<endl;
                        e1[i].saving_accout();
                        cout<<"--Account LOGIN--"<<endl;
                        cout<<"Create User Name: ";
                        cin>>user_name;
                        e1[i].setUserName(user_name);
                        cout<<"Create Password: ";
                        cin>>password;
                        e1[i].setpasssword(password);
                        cout<<"ACCOUNT CREATE SUCCESSFULLY...!"<<endl;
                        break;
                        }
                    case 2:
                        {
                        cout<<"Current Account Ok.."<<endl;
                        e1[i].current_account();
                        cout<<"--Account LOGIN--"<<endl;
                        cout<<"Create User Name: ";
                        cin>>user_name;
                        e1[i].setUserName(user_name);
                        cout<<"Create Password: ";
                        cin>>password;
                        e1[i].setpasssword(password);
                        cout<<"ACCOUNT CREATE SUCCESSFULLY...!"<<endl;
                        break;
                        }
                    case 0:
                        {
                        cout<<"Exit"<<endl;
                        break;
                        }
                    default:
                        {
                            cout<<"Choice write option "<<endl;
                            break;
                        }
                    }
                    break;
                }
                    case 2:
                        {
                            int k=1,password;
                            string user_name;
                            cout<<"--Account LOGIN--"<<endl;
                            cout<<"User Name: ";
                            cin>>user_name;
                            cout<<"Password: ";
                            cin>>password;
                            for(i=0; i<=81; i++)
                            {
                            if(password==e1[i].pass() && user_name==e1[i].User_name())
                            {
                            cout<<"----LOGIN SUCCESSFUL ----"<<endl;
                            //after loin----------------------------------------
                            e1[i].first_name();
                            int x=1;
                            while(x)
                            {
                            e1[i].Balance_related_menu();
                            cout<<"Enter your choice: ";
                            cin>>choice_1;
                            switch(choice_1)
                            {
                            case 0:
                                {
                                    cout<<"Exit Succesfully "<<endl;
                                    x=0;
                                }
                            case 1:
                                {
                                    e1[i].Balance();
                                    break;
                                }
                            case 2:
                                {
                                    e1[i].deposite();
                                    break;
                                }
                            case 3:
                                {
                                    e1[i].Withdrawal();
                                    break;
                                }
                            case 4:
                                {
                                    e1[i].tranfer();
                                    break;
                                }
                            case 5:
                                {
                                    e1[i].Account_info();
                                    break;
                                }
                            case 6:
                                {
                                    while(k)
                                    {
                                        e1[i].update_info();
                                        cout<<"Enter your choice : ";
                                        cin>>choice_2;
                                        switch(choice_2)
                                        {
                                        case 0:
                                            {
                                                cout<<"--EXIT---"<<endl;
                                                k=0;
                                                break;
                                            }
                                        case 1:
                                            {int choice_3;
                                         cout<<"1.SAVING ACCOUNT "<<endl<<"2.CURRENT ACCOUNT "<<endl;
                                         cout<<"Enter your choice ";
                                                 cin>>choice;
                                                e1[i].setaccount_type(choice_3);
                                                break;
                                            }
                                        case 2:
                                            {
                                                string change_name,c;
                                                string choice_3;
                                               cout<<"Current Name ";
                                               c=e1[i].getUserName();
                                                cout<<"Enter new name ";
                                                cin>>change_name;
                                                cout<<"Do you really want to change "<<c<<" to "<<change_name<<" (yes/no)"<<endl;
                                                cin>>choice_3;
                                                if(choice_3=="yes"||choice_3=="YES")
                                                {
                                                  e1[i].setUserName(change_name);
                                                  cout<<"Change Sucessfully "<<endl;
                                                }
                                                else if(choice_3=="no"||choice_3=="NO")
                                                {
                                                    cout<<"NOT TO BE CHANGE "<<endl;
                                                }
                                                break;
                                             }
                                        case 3:
                                                {
                                                    int c,passs;
                                                    string choice_3;
                                                    c=e1[i].getpasssword();
                                                    cout<<"Enter new password ";
                                                    cin>>passs;
                                                    cout<<"Do you want to change "<< c <<" to "<<passs<<" (yes/no)"<<endl;
                                                    cin>>choice_3;
                                                     if(choice_3=="yes"||choice_3=="YES")
                                                    {
                                                      e1[i].setpasssword(passs);
                                                      cout<<"Change Sucessfully "<<endl;
                                                    }
                                                    else if(choice_3=="no"||choice_3=="NO")
                                                    {
                                                        cout<<"NOT TO BE CHANGE "<<endl;
                                                    }
                                                    break;
                                                }
                                            case 4:
                                                {
                                                    string change_first_name,c;
                                                    string choice_3;
                                                    cout<<"Current first Name ";
                                                    c=e1[i].getfname();
                                                    cout<<"Enter new name ";
                                                    cin>>change_first_name;
                                                    cout<<"Do you really want to change "<<c<<" to "<<change_first_name<<" (yes/no)"<<endl;
                                                    cin>>choice_3;
                                                    if(choice_3=="yes"||choice_3=="YES")
                                                    {
                                                      e1[i].setfname(change_first_name);
                                                      cout<<"Change Sucessfully "<<endl;
                                                    }

                                                    else if(choice_3=="no"||choice_3=="NO")
                                                    {
                                                        cout<<"NOT TO BE CHANGE "<<endl;
                                                    }
                                                    break;
                                                }
                                            case 5:
                                                {
                                                    string change_last_name,c;
                                                    string choice_3;
                                                   cout<<"Current first Name ";
                                                   c=e1[i].getlname();
                                                    cout<<"Enter new name ";
                                                    cin>>change_last_name;
                                                    cout<<"Do you really want to change "<<c<<" to "<<change_last_name<<" (yes/no)"<<endl;
                                                    cin>>choice_3;
                                                    if(choice_3=="yes"||choice_3=="YES")
                                                    {
                                                      e1[i].setfname(change_last_name);
                                                      cout<<"Change Sucessfully "<<endl;
                                                    }

                                                    else if(choice_3=="no"||choice_3=="NO")
                                                    {
                                                        cout<<"NOT TO BE CHANGE "<<endl;
                                                    }
                                                    break;
                                                 }
                                            case 6:
                                                {
                                                      string change_mother_name,c;
                                                    string choice_3;
                                                   cout<<"Current first Name ";
                                                   c=e1[i].getmother_name();
                                                    cout<<"Enter new name ";
                                                    cin>>change_mother_name;
                                                    cout<<"Do you really want to change "<<c<<" to "<<change_mother_name<<" (yes/no)"<<endl;
                                                    cin>>choice_3;
                                                    if(choice_3=="yes"||choice_3=="YES")
                                                    {
                                                      e1[i].setmother_name(change_mother_name);
                                                      cout<<"Change Sucessfully "<<endl;
                                                    }
                                                    else if(choice_3=="no"||choice_3=="NO")
                                                    {
                                                        cout<<"NOT TO BE CHANGE "<<endl;
                                                    }
                                                    break;
                                                                    }
                                            case 7:
                                                {
                                                     string change_Address,c;
                                                    string choice_3;
                                                   cout<<"Current first Name ";
                                                   c=e1[i].getAddress();
                                                    cout<<"Enter new name ";
                                                    cin>>change_Address;
                                                    cout<<"Do you really want to change "<<c<<" to "<<change_Address<<" (yes/no)"<<endl;
                                                    cin>>choice_3;
                                                    if(choice_3=="yes"||choice_3=="YES")
                                                    {
                                                      e1[i].setAddress(change_Address);
                                                      cout<<"Change Sucessfully "<<endl;
                                                    }

                                                    else if(choice_3=="no"||choice_3=="NO")
                                                    {
                                                        cout<<"NOT TO BE CHANGE "<<endl;
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }

                            }
                    break;
                            }
                            if(password==e1[i].pass() || user_name==e1[i].User_name())
                            {
                                cout<<" password to be wrong : "<<endl;
                                break;
                            }
                           }
                        }
                        break;

                    case 0:
                        {
                           cout<<"T H A N K  Y O U!"<<endl;
                           cout<<"FOR USING SYSTEM "<<endl;
                           i=82;
                           break;
                        }
                    default:
                        {
                            cout<<"Choice is wrong "<<endl;
                            break;
                        }
}
}
   return 0;
}

