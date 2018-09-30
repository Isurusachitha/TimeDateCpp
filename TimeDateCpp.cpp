#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string DateStr();

int main() {
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";

         std::cout << "DATE : " << DateStr() <<'\n';

}

string DateStr(){

     std::time_t t = std::time(0);   // get time now
     std::tm* now = std::localtime(&t);
     string month,day;
     //string day;

  if((now->tm_mon + 1)<10){

       month="0"+to_string(now->tm_mon + 1);

  }

  if((now->tm_mday)<10){

     day="0"+to_string(now->tm_mday);

  }

  string date= to_string(now->tm_year + 1900)+   month+day ;

  return date;
}
