#include<iostream>
using namespace std;

int main()
{
int work[3][3]= {{0,1,2}, {3,4,5}, {6,7,8}};
string player1;
string player2;
cout<<"enter name of player 1\n";
getline(cin, player1);
cout<<"enter name of player 2\n";
getline(cin, player2);
cout<<player1<<"plays first\n";
cout<<"    |    |   \n";
cout<<" "<<work[0][0]<<"  | "<<work[0][1]<<"  | "<<work[0][2]<<" \n";
cout<<"____|____|___\n";
cout<<"    |    |   \n";
cout<<" "<<work[1][0]<<"  | "<<work[1][1]<<"  | "<<work[1][2]<<" \n";
cout<<"____|____|___\n";
cout<<"    |    |   \n";
cout<<" "<<work[2][0]<<"  | "<<work[2][1]<<"  | "<<work[2][2]<<" \n";
cout<<"    |    |   \n";

}
