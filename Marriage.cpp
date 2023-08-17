#include<iostream>
using namespace std ;
int main(){
int	Age;
char Status;
bool Job;
cout<<" Enter Your age"<<endl;
cin>>Age;
if (Age>=25){
 cout<<"Enter Your Marriage Status by pressing Y and N  ";
 cin>>Status;
 if(Status=='y'|| Status=='Y'){
 	cout<<"If you are Currently Doing a job Write'True'\n if not then write'False' ";
 	cin>>Job;
 	if(Job==true){
 		cout<<"CONGRATULATION";
 		cout<<"You have passes All the Tests";
 		cout<<"You Got the Job here";
	 }
 	else if(Job==false){
 		cout<<"Best of Luck for the Next Time";
	 }
	 else{
	 	cout<<" invalid input";
	 }
 }
		
} else {
	cout<<"You are  Not Eligible for the job";
}
	
	
}