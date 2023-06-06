#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

void add()
{
    ofstream f("student.txt",ios::app);
    
    string rn,name,div,address;
    cout<<"Enter your roll no= ";
    cin>>rn;
    cout<<"Enter your name= ";
    cin>>name;
    cout<<"Enter your Division= ";
    cin>>div;
    cout<<"Enter your Address= ";
    cin>>address;

    f<<left<<setw(20)<<rn<<setw(20)<<name<<setw(20)<<div<<setw(20)<<address<<endl;
    f.close();
    cout<<"Student Successfully Added"<<endl;
}

void delete_()
{
    ifstream f("student.txt");
    string line;

    string rn;
    cout<<"Enter the roll no to delete= ";
    cin>>rn;

    string filedata;
    while(getline(f,line))
    {
        if(line.find(rn)==string::npos){
            filedata += line;
            filedata +="\n";
        }
    }
    f.close();

    ofstream f1("student.txt",ios::out);
    f1<<filedata;
    f1.close();


}

void search()
{
    ifstream f("student.txt");
    string rn,line;
    cout<<"Enter the roll no to search= ";
    cin>>rn;

    bool found=false;
    while(getline(f,line))
    {
        if(line.find(rn)!=string::npos)
        {
            cout<<"Student Details: "<<endl;
            cout<<line<<endl;
            found=true;        
        }
    }
    f.close();

    if(!found){
        cout<<"Student Doesn't Exist!!"<<endl;
    }
}
void print()
{
    ifstream f("student.txt");
    string line;
    while(getline(f,line)){
        cout<<line<<endl;
    }
    f.close();

}

int main()
{
    ofstream f("student.txt",ios::out);
    f<<left<<setw(20)<<"Roll No"<<setw(20)<<"Name"<<setw(20)<<"Division"<<setw(20)<<"Address"<<endl;
    f.close();

    int choice;
    while(choice!=0)
    {
        cout<<"1.Add Student\n2.Delete Student\n3.Search Student\n4.Print Data\n5.Exit"<<endl;
        cout<<"Enter your choice= ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                add();
                break;
            case 2:
                delete_();
                break;
            case 3:
                search();
                break;
            case 4:
                print();
                break;
            case 5:
                return 0;
                break;
        }
    }
    return 0;
}
