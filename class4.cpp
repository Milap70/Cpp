#include<iostream>
#include<ctime>
using namespace std;
time_t now = time(0);
tm *local_time = localtime(&now);
class Time{
	private:
	int hour;
	int min;
	int sec;
	public:
	void setTime(){
		hour = local_time->tm_hour;
		min = local_time->tm_min;
		sec = local_time->tm_sec;
		
	}
	Time getTime(){
	Time temp;
	temp.setTime();
	cout << "Hour: " << temp.hour << endl;
	cout << "Minute: " << temp.min << endl;
	cout << "Second: " << temp.sec << endl;

	}
	Time sleepTime(Time t1, Time t2){
		Time t;
		t.hour = t2.hour - t1.hour;
		t.min = t2.min - t1.min;
		t.sec = t2.sec - t1.sec;
		if(t.sec < 0)
			t.min--;
			t.sec +=60;
			
		if(t.min < 0)
			t.hour--;
		cout << "Sleep Time Is" << endl;
		cout << "" << t.hour;
                cout << ":" << t.min;
                cout << ":" << t.sec <<endl;
		return t;
	
	}	
};

class Date{
	public:
	int day;
	int month;
	int year;
	Date setDate(){
		Date temp;
		temp.day = local_time->tm_mday;
		temp.month = (local_time->tm_mon)+1;
		temp.year = (local_time->tm_year)+1900;
		cout << "Day= " << temp.day << "\nMonth= " << temp.month 
		<< "\nYear= " << temp.year << endl << endl;
		return temp;
		
	}
	/* Date getDate(){
	Date d;
	d.setDate();
	cout << "Day: " << d.day << endl;
	cout << "Month: " << d.month << endl;
	cout << "Year: " << d.year << endl;

	} */
	Date setDoB(int a, int b, int c){
		Date obj;
		obj.day = a;
		obj.month = b;
		obj.year = c;
		cout<<"DOB is " << obj.day << "/" << obj.month << 			"/"<< obj.year << endl << endl;
		return obj;	

	}
	 Date findAge(Date Dob){
		Date temp,cur=setDate();
				
		cout << "Your Age is:  " << Dob.day;
			temp.day=cur.day-Dob.day;
			temp.month=cur.month-Dob.month;
			temp.year=cur.year-Dob.year;
			while(temp.day < 0){
				temp.month--;
				temp.day +=31;
			}
			while(temp.month < 0){
				temp.year--;
				temp.month +=12;
			}
			cout << endl <<"Day= " << temp.day << endl <<"Month= "  			<<temp.month << endl <<"Year =" << temp.year<< endl << endl;
			return temp;

	} 
};
 	
int main(){

	Time temp;
	Time t1, t2;
	//Time t;
	char* dt = ctime(&now);
	cout << "The local date and time is: " << dt << endl;
	Date i,obj,j,Dob;
	i.setDate();
	obj.setDoB(27,2,2001);
	Dob.day=19;
	Dob.month=11;
	Dob.year=1975;
	j.findAge(Dob);
	

return 0;
	
}
