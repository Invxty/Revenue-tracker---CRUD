#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


const int MaxInput = 50;

string ProdName[MaxInput] = {};
string ProdID[MaxInput] = {};
int ProdQt[MaxInput] = {};
int ProdPrice[MaxInput] = {};

double ProdRev;



void AddProduct(){
    char productname[40];
    char productID[5];
    int productPrice;
    int productQt;

    cin.ignore();

    cout << "Input product ID: ";
    cin.getline(productID, 5);
    cout << "Input product name: ";
    cin.getline(productname, 40);
    cout << "Input the product's price: ";
    cin >> productPrice;
    cout << "Input quantity: ";
    cin >> productQt;

    for(int i = 0; i < MaxInput; ++i)
    {
        if (ProdID[i] == "\0")
        {
            ProdID[i] = productID;
            ProdName[i] = productname;
            ProdPrice[i] = productPrice;
            ProdQt[i] = productQt;


            break;
        }

    }
}

void ViewProduct(string find){

    system("CLS");
    cout << "-----------------------------Current records------------------------------------\n";
    cout << "================================================================================\n";
    int listnum = 0;

    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] == find){
            ProdRev = ProdPrice[i] * ProdQt[i];
            listnum++;
        cout << left << setw(15) << "Product ID"
         << left << setw(20) << "Product Name"
         << left << setw(10) << "Price"
         << left << setw(10) << "Quantity"
         << "Revenue" << endl;

          cout << left << setw(15) << ProdID[i]
         << left << setw(20) << ProdName[i]
         << left << setw(10) << ProdPrice[i]
         << left << setw(10) << ProdQt[i] <<
          ProdRev <<endl;

    break;
    }
}
if (listnum == 0){
    cout << "No records found!\n";
}
cout << "================================================================================\n";
}

void ViewList(){
    system("CLS");

    cout << "------------------Current records---------------\n";
    cout << "================================================================================\n";
            cout << left << setw(10) << "List"
         << left << setw(15) << "Product ID"
         << left << setw(20) << "Product Name"
         << left << setw(10) << "Price"
         << left << setw(10) << "Quantity"
         << "Revenue" << endl;
    int listnum = 0;
    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] != "\0"){
            ProdRev = ProdPrice[i] * ProdQt[i];
            listnum++;

          cout << left << setw(10) << listnum
         << left << setw(15) << ProdID[i]
         << left << setw(20) << ProdName[i]
         << left << setw(10) << ProdPrice[i]
         << left << setw(10) << ProdQt[i] <<
          ProdRev <<endl;

    }
}
if (listnum == 0){
    cout << "No records found!\n";
}
cout << "================================================================================\n";
}

void UpdateProduct(string find){
    int listnum = 0;

    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] == find){
            ProdRev = ProdPrice[i] * ProdQt[i];
            listnum++;
            cout << left << setw(15) << "Product ID"
         << left << setw(20) << "Product Name"
         << left << setw(10) << "Price"
         << left << setw(10) << "Quantity"
         << "Revenue" << endl;

          cout << left << setw(15) << ProdID[i]
         << left << setw(20) << ProdName[i]
         << left << setw(10) << ProdPrice[i]
         << left << setw(10) << ProdQt[i] <<
          ProdRev <<endl;
         if (listnum == 0){
    cout << "No records found!\n";
        }

    const int menu2 = 3;
    string DisplayMenu2[menu2] = {"Name","Price", "Exit"};
    int choice2 = 0;
    char newname[40];
    int newPrice;

        cout << "What would you like to update?" << endl;
            do{for(int i = 0; menu2 > i; ++i){

        cout << i +1 << ". " << DisplayMenu2[i] << "\n";
        }
        cout << "\n Input your designated action: ";
    cin >> choice2;
    if(choice2 == 1 || choice2 == 2){

      switch(choice2)
      {
      case 1:
        cout << "Input new name: ";
        cin.ignore();
        cin.getline(newname, 40);
        ProdName[i] = newname;
        cout << "The name has been updated succesfully";
        system("CLS");
        break;

        case 2:
        cout << "Input new price: ";
        cin.ignore();
        cin >> newPrice;
        ProdPrice[i] = newPrice;
        cout << "The price has been updated succesfully";
        system("CLS");
        break;
      }
    }
    else if(choice2 == 3)
        system("CLS");
        break;



                }
    while(true);
        }
    }
}

void DeleteProduct (string find){

    int listnum = 0;
    char choice3;
    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] == find){
            ProdRev = ProdPrice[i] * ProdQt[i];
            listnum++;
        cout << left << setw(15) << "Product ID"
         << left << setw(20) << "Product Name"
         << left << setw(10) << "Price"
         << left << setw(10) << "Quantity"
         << "Revenue" << endl;

          cout << left << setw(15) << ProdID[i]
         << left << setw(20) << ProdName[i]
         << left << setw(10) << ProdPrice[i]
         << left << setw(10) << ProdQt[i] <<
          ProdRev <<endl;;


         cout << "Proceed to delete Item? (y/n)" << endl;
         cin >> choice3;
         if(choice3 == 'y' || choice3 == 'Y'){
            ProdName[i] = "";
            ProdID[i] = "";
            ProdQt[i] = {};
            ProdPrice[i] = {};
        system("CLS");
        break;
         }
        else if(choice3 == 'n' || choice3 == 'N'){
        system("CLS");
        break;
        }


        }
    }
}

void UpdtQtProduct (string find){

      int listnum = 0;
    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] == find){
            ProdRev = ProdPrice[i] * ProdQt[i];
            listnum++;
           cout << left << setw(15) << "Product ID"
         << left << setw(20) << "Product Name"
         << left << setw(10) << "Price"
         << left << setw(10) << "Quantity"
         << "Revenue" << endl;

          cout << left << setw(15) << ProdID[i]
         << left << setw(20) << ProdName[i]
         << left << setw(10) << ProdPrice[i]
         << left << setw(10) << ProdQt[i] <<
          ProdRev <<endl;;
         if (listnum == 0){
    cout << "No records found!\n";
        }

    int num1;
    const int menu3 = 3;
    string DisplayMenu3[menu3] = {"Increase","Decrease", "Exit"};
    int choice4 = 0;

        cout << "Would you like to increase or decrease?" << endl;
            do{for(int i = 0; menu3 > i; ++i){

        cout << i +1 << ". " << DisplayMenu3[i] << "\n";
        }
        cout << "\n Input your designated action: ";
    cin >> choice4;
    if(choice4 == 1 || choice4 == 2){

      switch(choice4)
      {
      case 1:
        cout << "By how much?: ";
        cin.ignore();
        cin >> num1;
        ProdQt[i] = ProdQt[i] + num1;
        system("CLS");
        break;

        case 2:
        cout << "By how much?:" ;
        cin.ignore();
        cin >> num1;
        ProdQt[i] = ProdQt[i] - num1;
        system("CLS");
        break;
      }
    }
    else if(choice4 == 3)
        system("CLS");
        break;



                }
    while(true);
        }
    }
}

void TotalRev(){
    double TotRevenue = 0;
    for (int i = 0; i < MaxInput; i++){
    if(ProdID[i] != "\0"){
        TotRevenue += ProdPrice[i] * ProdQt[i];
        }
    }

       cout << "----------------Total Revenue: " <<  TotRevenue << " Pesos---------------------------------\n";


}

void SaveFile(){

    ofstream savefile;
    savefile.open("C:\\TotalRevenue.txt");

    for(int i = 0; i < MaxInput; i++){


        if (ProdID[i] == "\0"){
            break;
        }
        else{
            savefile << "List of records" << endl << ProdID[i] << " | " << ProdName[i] << " | " << ProdPrice[i] << " | " << ProdQt[i] << " | " << endl;
        }
    }
}



int main()

{
    string prodID;
    //the display menu
    const int Menu = 7;
    string DisplayMenu[Menu] = {"Input new item", "View an item","Update name and price", "Add or Decrease the Quantity of an Item", "Remove an Item", "View all", "Exit and save"};
    int choice = 0;

    do{cout << "\n----------------Welcome to the Revenue Tracker!------------------------\n";
    TotalRev();
    cout << "Menu: \n";

        for(int i = 0; Menu > i; ++i){
        cout << i +1 << ". " << DisplayMenu[i] << "\n";
        }

    cout << "\nInput your designated action: ";
    cin >> choice;
    if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6){

      switch(choice)
      {
          case 1: AddProduct();
          cout << "Item information has been sucessfully placed." << endl;
          system("CLS");
          break;

          case 2:
          cout << "Enter the ID of the item you wish to view: ";
           cin.ignore();
          getline(cin, prodID);
          ViewProduct(prodID);
          break;

          case 3:
          cout << "Enter the ID of the item you wish to update: ";
          cin.ignore();
          getline(cin, prodID);
          UpdateProduct(prodID);
          cout << "The information has been updated!" << endl;
          break;

          case 4:
          cout << "Enter the ID of the item you wish to increase the quantity: ";
          cin.ignore();
          getline(cin, prodID);
          UpdtQtProduct(prodID);
          cout << "The Quantity has been updated!";
          break;

          case 5:
          cout << "Enter the ID of the item you wish to delete: ";
          cin.ignore();
          getline(cin, prodID);
          DeleteProduct(prodID);
          cout << "The item has been succesfully deleted.";
          break;

          case 6:
            ViewList();
            break;
      }
    }
    else if(choice == 7){
        SaveFile();
        cout << "Saving information to file!";
        break;
    }
        else{
            cout << "Invalid option, please try again.";
            }

    }
    while(choice != 7);

}

