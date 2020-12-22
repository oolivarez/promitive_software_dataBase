#include <iostream>
#include <vector>

// primitive data base for software ...12/22/2020

using namespace std;
 bool chestLoopT=false;
 string chestInputs{};
 vector<string>chestStorage{};//vectors for input storage
 vector<int>ageStorage{};
 string inputName;
 int age{};
 char exitInput{};
 char PrintIN{};
 
 
void chestloop(){
   
    while(  bool chestLoopT=false){  //software running loop
       
    }
}

void exitLogic(){
   
      cin>>exitInput;
    
        switch(exitInput){  //this is the exit as well as the yes /no input options 
          case 'e':
          case 'E': (chestLoopT=true);
             break;
          case 'd':
          case 'D':(chestLoopT=false);
             break;
          case 'y':
          case 'Y':(chestLoopT=false);
                   system("cls");
             break;
          case 'n':
          case 'N':cout<<"Press V to view"<<endl;
                   cin>>PrintIN;
             break;
           default:cout<<"invalid";
             break;
        }
    
}
void chestVectorPrint(){   //the draw function for primitive table 
      cout<<"_____________________________NAMES________________________________\n";
    for(int i{0};i<chestStorage.size();i++){
       
        cout<<chestStorage[i]<<"\t\t";
        
    }
    cout<<endl;
     cout<<"_____________________________AGE__________________________________\n";
    for(int j{0};j<ageStorage.size();j++){
         
    cout<<ageStorage[j]<<"\t\t";
    }
       cout<<"\nPress D to continue\t\t\t\tPress E to exit"<<endl;
        
}
int main(){

  while (chestLoopT!=true){
      chestloop();
    cout<<"data storage software V.0.1.0\n"; 
     cout<<"Press D to continue\t\t\t\tPress E to exit"<<endl;
       cout<<"input name:";
        cin>>inputName;
         chestStorage.push_back((string)inputName);
         
          cout<<"input age:";
           cin>>age;
            ageStorage.push_back((int)age);
             cout<<"do you wish to continue?(Y/N)";
               exitLogic();
      if (PrintIN=='V'){    //when you decide to print table 
           chestVectorPrint();
           exitLogic();
            system("cls");
      }
            else if(PrintIN!='V'){
            cout<<"Press D to continue\t\t\t\tPress E to exit"<<endl;
             exitLogic();
              system("cls");
    }
            
      
    
     
       
  }
 return 0;

}



