#include<iostream>
using namespace std;

string arr1[25],arr2[25],arr3[25],arr4[25],arr5[25],arr6[25];
int total=0;

void enterData()
{
    int num=0;
    cout<<"How many students do u want to enter? ";
    cin>>num;
    if(total==0)
    {
        total=num+total;
        for(int i=0; i<num; i++)
        {
            cout<<"\nEnter the Data of student: "<<i+1<<endl<<endl;
            cout<<"Enter name: ";
            cin>>arr1[i];
            cout<<"Enter Roll no: ";
            cin>>arr2[i];
            cout<<"Enter Reg: ";
            cin>>arr3[i];
            cout<<"Enter course: ";
            cin>>arr4[i];
            cout<<"Enter class: ";
            cin>>arr5[i];
            cout<<"Enter contact: ";
            cin>>arr6[i];
        }
    }
    else
    {
        for(int i=total; i<num+total; i++)
        {
            cout<<"\nEnter the Data of student: "<<i+1<<endl<<endl;
            cout<<"Enter name: ";
            cin>>arr1[i];
            cout<<"Enter Roll no: ";
            cin>>arr2[i];
            cout<<"Enter Reg no: ";
            cin>>arr3[i];
            cout<<"Enter course: ";
            cin>>arr4[i];
            cout<<"Enter class: ";
            cin>>arr5[i];
            cout<<"Enter contact: ";
            cin>>arr6[i];
        }
        total=num+total;
    }
}
void showData()
{
    if(total==0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        for(int i=0; i<total; i++)
        {
            cout<<"\n>>>>>>Data of Student<<<<<<<"<<i+1<<endl<<endl;
            cout<<"Name: "<<arr1[i]<<endl;
            cout<<"Roll no: "<<arr2[i]<<endl;
            cout<<"Reg no: "<<arr3[i]<<endl;
            cout<<"Course: "<<arr4[i]<<endl;
            cout<<"Class: "<<arr5[i]<<endl;
            cout<<"Contact no: "<<arr6[i]<<endl;
        }
    }
}
void searchData()
{
    if(total==0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter the roll no of student"<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"Name "<<arr1[i]<<endl;
                cout<<"Roll no "<<arr2[i]<<endl;
                cout<<"Reg no "<<arr3[i]<<endl;
                cout<<"Course "<<arr4[i]<<endl;
                cout<<"Class "<<arr5[i]<<endl;
                cout<<"Contact "<<arr6[i]<<endl;
            }
        }
    }
}
void updateData()
{
    if(total==0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        string rollno;
        cout<<"Enter the roll no of student which you want to update"<<endl;
        cin>>rollno;
        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"\nPrevious data"<<endl<<endl;
                cout<<"Data of Student "<<i+1<<endl;
                cout<<"Name "<<arr1[i]<<endl;
                cout<<"Roll no "<<arr2[i]<<endl;
                cout<<"Reg no "<<arr3[i]<<endl;
                cout<<"Course "<<arr4[i]<<endl;
                cout<<"Class "<<arr5[i]<<endl;
                cout<<"Contact "<<arr6[i]<<endl;
                cout<<"\nEnter new data"<<endl<<endl;
                cout<<"Enter name ";
                cin>>arr1[i];
                cout<<"Enter Roll no ";
                cin>>arr2[i];
                cout<<"Enter Reg no ";
                cin>>arr3[i];
                cout<<"Enter course ";
                cin>>arr4[i];
                cout<<"Enter class ";
                cin>>arr5[i];
                cout<<"Enter contact ";
                cin>>arr6[i];
            }
        }
    }
}

void deleterecord()
{
    if(total==0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        int a;
        cout<<"Press 1 to delete all record"<<endl;
        cout<<"Press 2 to delete specific record"<<endl;
        cin>>a;
        if(a==1)
        {
            total=0;
            cout<<"All record is deleted..!!"<<endl;
        }
        else if(a==2)
        {
            string rollno;
            cout<<"Enter the roll no of student which you wanted to delete"<<endl;
            cin>>rollno;
            for(int i=0; i<total; i++)
            {
                if(rollno==arr2[i])
                {
                    for(int j=i; j<total; j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                        arr6[j]=arr6[j+1];
                    }
                    total--;
                    cout<<"Your required record is deleted"<<endl;
                }
            }
        }
        else
        {
            cout<<"Invalid input";
        }
    }
}
int main()
{
    int value;
    while(true)
    {
        cout<<"\n**Press 1 to enter data**"<<endl;
        cout<<"**Press 2 to show data**"<<endl;
        cout<<"**Press 3 to search data**"<<endl;
        cout<<"**Press 4 to update data**"<<endl;
        cout<<"**Press 5 to delete data**"<<endl;
        cout<<"**Press 6 to exit**"<<endl;
        cin>>value;
        if(value==1)
            enterData();
        else if(value==2)
            showData();
        else if(value==3)
            searchData();
        else if(value==4)
            updateData();
        else if(value==5)
            deleterecord();
        else if(value==6)
            break;
        else
            cout<<"Invalid input"<<endl;
        }
}
