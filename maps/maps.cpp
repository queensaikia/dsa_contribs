// thanks to mygreatlearning.com for the code
#include<iostream>
#include<map> // for map
#include<string>   //For string operations

using namespace std;

int main(){

    map<string, int>student_map;   // Declaration of Map

    student_map [“Mahiraj”] = 87;  // Inserting elements

    student_map [“Vipul”] = 35;

    student_map [“Dushyant”] = 69;

    student_map.insert({{“Jaydeep”,77},{“Rajesh”,52}}); //

    map<string,int>::iterator itr;

    for(itr=student_map.begin(); itr!=student_map.end(); itr++)

        {

            cout<<(*itr).first<<” : “<<(*itr).second <<endl;

        }

}
