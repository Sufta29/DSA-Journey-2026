#include<bits/stdc++.h>
using namespace std;

// Student Management System

struct Student
{
    int roll;
    string name;
    float cgpa;
};

vector<Student> students;
Student s;

void Addstud(){
     int n;
     cout<<"Enter n:";
     cin>> n;
    for(int i=0;i<n;i++ ){

         cout << "Enter Roll No: ";
        cin >> s.roll;

        cin.ignore();   // Enter ko remove karega

        cout << "Enter Name: ";
        getline(cin, s.name);

        cout << "Enter CGPA: ";
        cin >> s.cgpa;

        students.push_back(s);

         cout << "\nStudent Added Successfully!\n";
    }
}
void Display(){
     
    for( size_t i = 0;i<students.size();i++){
           cout<< students[i].roll <<endl;
           cout<< students[i].name <<endl;
           cout<< students[i].cgpa <<endl;

    }

}

void Search(){
     bool found = false;
      int t;
      cout<<"Search roll no.:";
      cin>>t;
       for(size_t i = 0;i<students.size();i++){
         if(students[i].roll == t){
            found = true;
           cout<< students[i].roll <<endl;
           cout<< students[i].name <<endl;
           cout<< students[i].cgpa <<endl;
           break;
           }

        }
         if(!found){
             cout<<"Student not found"<<endl;
           }
} 

void Delete(){
    bool found = false;
      int t;
      cout<<"Delete roll no.:";
      cin>>t;
       for(size_t i = 0;i<students.size();i++){
         if(students[i].roll == t){
            found = true;
           students.erase(students.begin() + i);
           cout << "Student Deleted Successfully"<<endl;
           break;
           }

        }
         if(!found){
             cout<<"Student not found"<<endl;
           }
}

void Update(){
    bool found = false;
    cout<<"1. Update Name"<<endl;
    cout<<"2. Update Roll Number"<<endl;
    cout<<"3. Update CGPA"<<endl;
    cout<<"4. Update Everything"<<endl;
    cout<<"5. Cancel"<<endl;
      int t,f;
      cout<<"Enter roll no.:";
      cin>>t;
       for(size_t i = 0;i<students.size();i++){
         if(students[i].roll == t){
            found = true;    
     while(true){
       cout<<"Enter update choice:";
            cin >> f;
            switch(f){
               case 1: // update roll;
                   {int newroll;
                   cout<<"Enter new roll :";
                   cin>>newroll;
                   students[i].roll = newroll;
                  cout<<"student roll Update"<<endl;
                   }
                   break;
               case 2: // update name;
                   {string newname;
                   cout<<"Enter new name :";
                   cin>>newname;
                   students[i].name = newname;
                  cout<<"student name Update"<<endl;
                   }
                  break;
               case 3: // update cgpa;
                   {float newcgpa;
                   cout<<"Enter new cgpa :";
                   cin>>newcgpa;
                   students[i].cgpa = newcgpa;
                  cout<<"student cgpa Update"<<endl;
                   }
                  break;
               case 4: // update everything
                    {int newRoll;
                    string newName;
                    float newCgpa;
                     cout<<"Enter new roll :";
                     cin>>newRoll;
                     cout<<"Enter new name :";
                     cin>>newName;
                     cout<<"Enter new cgpa :";
                     cin>>newCgpa;
                     students[i].roll = newRoll;
                     students[i].name = newName;
                     students[i].cgpa = newCgpa;
                    }
                     break;
               case 5: 
                       return;
                       break;

               default : 
                    cout<<"Invalid choice"<<endl;
                    break;
            }
          }
           cout << "Student Details updated Successfully"<<endl;
           break;
           }

        }
        if(!found){
             cout<<"Student not found"<<endl;
           }
}

int main(){
    cout<<"1. Add student "<<endl;
    cout<<"2. Display student "<<endl;
    cout<<"3. Search student "<<endl;
    cout<<"4. Delete student"<<endl;
    cout<<"5. Update student"<<endl;
    cout<<"6. Cancel"<<endl;
int choice;
  while(true){
    cout<<"Enter choice:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        Addstud();
        break;
    case 2:
          Display();
          break;
    case 3:
           Search(); 
            break;
    case 4: 
           Delete();
            break;
    case 5:
           Update();
             break; 
    case 6: exit(0);               
    default:
       cout<<"Invalid choice"<<endl;
             break;
    }
  }

    return 0;
}