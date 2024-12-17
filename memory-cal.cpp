#include<iostream>
#include<vector>

using namespace std;
class MemoryCal{
    private :
        int id;
        string name;
    public:
        MemoryCal(int id,string name){
            this->id = id;
            this->name = name;
        }
        void GetStudentDetails(){
            cout << "------------------------------"<<endl;
            cout << "Student Id Is : "<<this->id<<endl;
            cout << "Student Name Is : "<<this->name<<endl;
            cout << "------------------------------"<<endl;
        }
        int GetId(){
            return this->id;
        }
};

int main(){
    vector<MemoryCal> stu;
    int choice;

    do
    {
        cout << "Enter 1 For Add Student : "<<endl;
        cout << "Enter 2 For Display Student : "<<endl;
        cout << "Enter 3 For Remove Student by id : "<<endl;
        cout << "Enter 4 For Search Student by id : "<<endl;
        cout << "Enter 5 For Exit : "<<endl;
        cout << "Enter Your Choice : "<<endl;
        cin >> choice;

        switch (choice)
        {
        case 1:{
            int id;
            string name;

            cout << "Enter Your Id : ";
            cin >> id;

            cin.ignore();

            cout << "Enter Your Name : ";
            getline(cin,name);

            stu.push_back(MemoryCal(id,name));

            cout << "Student Added Succesfully"<<endl;
            break;
        }
        case 2:{
            for(auto val : stu){
                val.GetStudentDetails();
            }
            break;
        }
        case 3:{
            int id;
            cout << "Enter Id For Delete : ";
            cin >> id;
            bool isFound=false;

            for (auto i = stu.begin(); i != stu.end(); i++)
            {
                if (i->GetId() == id)
                {
                    isFound = true;
                    stu.erase(i);
                    cout << "Student Deleted Succesfully..."<<endl;
                    break;
                }
                
            }
            if (isFound == false)
            {
                cout << "Student Is Not Found..."<<endl;
            }
            
            

            break;
        }
        case 4:{
            int id;
            cout << "Enter Id For Search : ";
            cin >> id;
            bool isFound=false;

            for (auto i = stu.begin(); i != stu.end(); i++)
            {
                if (i->GetId() == id)
                {
                    isFound = true;
                    i->GetStudentDetails();
                    cout << "Student Searched Succesfully..."<<endl;
                    break;
                }
                
            }
            if (isFound == false)
            {
                cout << "Student Is Not Found..."<<endl;
            }

            break;
        }
        case 5:{
            cout << "Thank You Visit Again !! ..";
            break;
        }
            
            
        
        default:
            cout << "Invalid Input :";
            break;
        }
    } while (choice != 5);
    

    return 0;
}