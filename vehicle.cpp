// Project 1
// Tesla Vehicle Configurator
// Andrew Lopez UCLA UID 105322325
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaring the variables being used
    string tesla_model;
    string model_trim;
    string vehicle_color;
    int wheel_size;
    string leather;
    string autopilot;
    double TotalPrice = 0.0;

    //Asking questions here and waiting to see what the user inputs, error message for incorrect data will be later
    cout << "Which vehicle would you like to order? ";
    getline (cin, tesla_model);
    cout << "Which kind would you like? ";
    getline (cin, model_trim);
    cout << "What exterior color would you like? ";
    getline(cin, vehicle_color);
    cout << "Which wheels would you like? ";
    cin >> wheel_size;
    cin.ignore(10000, '\n');
    cout << "Want leather interior? " ;
    getline(cin, leather);
    cout << "Want Auto-Pilot? " ;
    getline(cin, autopilot);
    
    // Start of the if statements to get rid of any unwanted input by user
  if (tesla_model != "3" && tesla_model != "S" && tesla_model != "X")
  {
      cout << "Error - Incorrect model choice. ";
      return (0);
  }
  if (model_trim != "Long Range" && model_trim != "Performance")
   {
       cout << "Error - Incorrect kind choice. ";
       return (0);
   }
  if (vehicle_color != "White" && vehicle_color != "Black" && vehicle_color != "Blue" && vehicle_color != "Grey" && vehicle_color != "Red")
  {
      cout << "Error - Incorrect color choice. ";
      return (0);
  }
  if (tesla_model == "3")
  {
        if ( wheel_size != 18 && wheel_size != 19)
      {
          cout << "Error - Incorrect wheel value. ";
          return (0);
      }
  }
    if ( tesla_model == "S")
    {
        if (wheel_size != 19 && wheel_size != 21)
        {
        cout << "Error - Incorrect wheel value. ";
        return (0);
        }
    }
    if ( tesla_model == "X")
    {
        if(wheel_size != 20 && wheel_size != 22)
        {
        cout << "Error - Incorrect wheel value. ";
        return (0);
            
        }
    }
    if (leather != "Yes" && leather != "No")
    {
        { cout << "Error - Incorrect leather choice. ";
        return (0);
        }
    }
    if (autopilot != "Yes" && autopilot != "No")
    {
        { cout << "Error - Incorrect autopilot choice. ";
        return (0);
        }
    }

    //Computing the cost whether the user decides they want any of the upgrades
    if (tesla_model == "3")
    {
        if (model_trim == "Long Range")
        {TotalPrice = TotalPrice + 47990;}
        else if (model_trim == "Performance")
        {TotalPrice = TotalPrice + 55990;}
        if (vehicle_color == "Black")
        {TotalPrice = TotalPrice + 500;}
        else if (vehicle_color == "Blue")
        {TotalPrice = TotalPrice + 1000;}
        else if (vehicle_color == "Grey")
        {TotalPrice = TotalPrice + 1000;}
        else if (vehicle_color == "Red")
        {TotalPrice = TotalPrice + 1500;}
        if (wheel_size == 19)
        {TotalPrice = TotalPrice + 1500;}
        if (leather == "Yes")
        {TotalPrice = TotalPrice + 1000;}
        if (autopilot == "Yes")
        {TotalPrice = TotalPrice + 6000;}
    }
    
         if (tesla_model == "S")
    {
         if (model_trim == "Long Range")
         {TotalPrice = TotalPrice + 79990;}
         else if ((model_trim == "Performance"))
         {TotalPrice = TotalPrice + 99990;}
         if (vehicle_color == "Black")
         {TotalPrice = TotalPrice + 1000;}
         else if (vehicle_color == "Blue")
         {TotalPrice = TotalPrice + 1500;}
         else if (vehicle_color == "Grey")
         {TotalPrice = TotalPrice + 1500;}
         else if (vehicle_color == "Red")
         {TotalPrice = TotalPrice + 2500;}
         if (wheel_size == 21)
         {TotalPrice = TotalPrice + 4500;}
         if (leather == "Yes")
         {TotalPrice = TotalPrice + 1000;}
         if (autopilot == "Yes")
         {TotalPrice = TotalPrice + 6000;}
    }
    
         if (tesla_model == "X")
   {
         if (model_trim == "Long Range")
         {TotalPrice = TotalPrice + 84990;}
         else if ((model_trim == "Performance"))
         {TotalPrice = TotalPrice + 104990;}
         if (vehicle_color == "Black")
         {TotalPrice = TotalPrice + 1000;}
         else if (vehicle_color == "Blue")
         {TotalPrice = TotalPrice + 1500;}
         else if (vehicle_color == "Grey")
         {TotalPrice = TotalPrice + 1500;}
         else if (vehicle_color == "Red")
         {TotalPrice = TotalPrice + 2500;}
         if (wheel_size == 22)
         {TotalPrice = TotalPrice + 5500;}
         if (leather == "Yes")
         {TotalPrice = TotalPrice + 1000;}
         if (autopilot == "Yes")
         {TotalPrice = TotalPrice + 6000;}
       
   }
                  
    // This is so the final vehicle amount is in dollar format with cents
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision (2);
    
    // Here is where the program ends and we get the output of total price including color and model
    cout << "Enjoy your new $" << TotalPrice << " " <<vehicle_color <<  " Model " << tesla_model << "!" << endl;
    
return 0;
    }
        
