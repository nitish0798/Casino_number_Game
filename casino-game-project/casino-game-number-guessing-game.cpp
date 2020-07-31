#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <cstdlib> 
#include <ctime>
using namespace std;

void drawLine(int n,char symbol){
    for(int i=0;i<n;i++) {
        cout<<symbol;
	}cout << "\n" ;
}
void rules(){
    system("cls");
    cout<<endl<<endl;
    drawLine(80,'*');
    cout<<"\t\tRULES OF THE GAME"<<endl;
    drawLine(80,'*');
    cout<<"\t1. Choose any number between 1 to 10\n";
    cout<<"\t2. If you win you will get 10 times of money you bet\n";
    cout<<"\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'*');
}

int main(){
    string playerName;
    int amount; // hold player's balance amount
    int bettingAmount; 
    int guess;
    int dice; // hold computer generated number
    char choice;
    srand(time(0)); // "Seed" the random generator
    
    cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<" *****    ****    *****   *****    ****    *****   *****    ****    *****   *****    ****    ***** "<<endl;
	cout<<"  ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***  "<<endl;
	cout<<"  ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***  "<<endl;
	cout<<"  ***      **      ***     ***      CASINO GAME     ***      **      ***     ***      **      ***  "<<endl;
	cout<<"  ***      **      ***     ***      **      ***     ***      **      ***     ***      **      ***  "<<endl;
	cout<<"   ******************       ******************       ******************       ******************   "<<endl;
	cout<<"    *****************************************         *****************************************    "<<endl;
    cout<<"*******  ******  ******* *******  ******  *******  *******  ******  ******* *******  ******  ******* "<<endl;
	cout<<"\n\nEnter Your Name : ";
    getline(cin, playerName);
    drawLine(60,'*');
    cout << "Enter Deposit amount to play game : $";
    cin >> amount;
    drawLine(60,'*');
    do{
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";
	  do{
            cout <<playerName<<"\nEnter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);
		do{
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1; // Will hold the randomly generated integer between 1 and 10  
        if(dice == guess){
            cout << "\n\nGood Luck!! You won $" << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else{
            cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have $ " << amount << "\n";
        if(amount == 0){
            cout << "\nYou have no money to play\n";
            break;
        }cout<<"\n-->Do you want to play again (y/n)? ";		
        cin>>choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    drawLine(70,'=');
    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(70,'=');
    return 0;
}
 
 
 
