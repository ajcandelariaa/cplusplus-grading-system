#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

struct Student
{
	char  lrn[30], fname[30], lname[30],  mname[30];
};

int average789(int a, int b, int c, int d);
int f_average789(int a, int b, int c, int d, int e, int f, int g, int h);
int f_average10(int a, int b, int c, int d, int e, int f, int g, int h, int i);
int valid_grade(int x);

string passing(int x);
string f_remarks789(int x);

void menu();
void year_level();
void add_student789(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt);
void add_student10(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt);
void show_student789(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt, string f_ylevel, string f_temp);
void show_student10(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt, string f_ylevel, string f_temp);

int main()
{
	Student info;
	char home_choice, year_level_choice, year_level_choice2, show_student_choice, choice3;
	home:
	menu();
	cin >> home_choice;
	while(home_choice != '1' && home_choice != '2' && home_choice != '3')
	{
		cout << "Invalid Input. Please enter only number 1-3" << endl;
		cout << "Choice: ";
		cin >> home_choice;
	}
	switch(home_choice)
	{
		case '1':
			system("cls");
			year_level(); 
			cin >> year_level_choice;
			while(year_level_choice != '1' && year_level_choice != '2' && year_level_choice != '3' && year_level_choice != '4' && year_level_choice != '5' && year_level_choice != '6')
			{
				cout << "Invalid Input. Please enter only number 1-6" << endl;
				cout << "Choice: ";
				cin >> year_level_choice;
				
			}
			switch(year_level_choice)
			{
				case '1':	
					system("cls");
					add_student789(&info, "Grade 7\\LRN7.txt", "Grade 7\\Lastname7.txt", "Grade 7\\Firstname7.txt", "Grade 7\\Middlename7.txt",
					"Grade 7\\1qt.txt",  "Grade 7\\2qt.txt", "Grade 7\\3qt.txt", "Grade 7\\4qt.txt");
				break;
				case '2':
					system("cls");
					add_student789(&info, "Grade 8\\LRN8.txt", "Grade 8\\Lastname8.txt", "Grade 8\\Firstname8.txt", "Grade 8\\Middlename8.txt",
					"Grade 8\\1qt.txt",  "Grade 8\\2qt.txt", "Grade 8\\3qt.txt", "Grade 8\\4qt.txt");
				break;
				case '3':
					system("cls");
					add_student789(&info, "Grade 9\\LRN9.txt", "Grade 9\\Lastname9.txt", "Grade 9\\Firstname9.txt", "Grade 9\\Middlename9.txt",
					"Grade 9\\1qt.txt",  "Grade 9\\2qt.txt", "Grade 9\\3qt.txt", "Grade 9\\4qt.txt");
				break;
				case '4':
					system("cls");
					add_student10(&info, "Grade 10\\LRN10.txt", "Grade 10\\Lastname10.txt", "Grade 10\\Firstname10.txt", "Grade 10\\Middlename10.txt",
					"Grade 10\\1qt.txt",  "Grade 10\\2qt.txt", "Grade 10\\3qt.txt", "Grade 10\\4qt.txt");
				break;
				case '5':
					system("cls");
					goto home;
				break;
				case '6':
					system("pause");
					exit(0);
				break;
			}
		break;
		case '2':
			system("cls");
			year_level();
			cin >> year_level_choice2;
			while(year_level_choice2 != '1' && year_level_choice2 != '2' && year_level_choice2 != '3' && year_level_choice2 != '4' && year_level_choice2 != '5' && year_level_choice2 != '6')
			{
				cout << "Invalid Input. Please enter only number 1-6" << endl;
				cout << "Choice: ";
				cin >> year_level_choice2;
				
			}
			switch(year_level_choice2)
			{
				case '1':	
					system("cls");
					show_student789(&info, "Grade 7\\LRN7.txt", "Grade 7\\Lastname7.txt", "Grade 7\\Firstname7.txt", "Grade 7\\Middlename7.txt",
					"Grade 7\\1qt.txt",  "Grade 7\\2qt.txt", "Grade 7\\3qt.txt", "Grade 7\\4qt.txt", "7", "Grade 7\\temp.txt");
				break;
				case '2':
					system("cls");
					show_student789(&info, "Grade 8\\LRN8.txt", "Grade 8\\Lastname8.txt", "Grade 8\\Firstname8.txt", "Grade 8\\Middlename8.txt",
					"Grade 8\\1qt.txt",  "Grade 8\\2qt.txt", "Grade 8\\3qt.txt", "Grade 8\\4qt.txt", "8", "Grade 8\\temp.txt");
				break;
				case '3':
					system("cls");
					show_student789(&info, "Grade 9\\LRN9.txt", "Grade 9\\Lastname9.txt", "Grade 9\\Firstname9.txt", "Grade 9\\Middlename9.txt",
					"Grade 9\\1qt.txt",  "Grade 9\\2qt.txt", "Grade 9\\3qt.txt", "Grade 9\\4qt.txt", "9", "Grade 9\\temp.txt");
				break;
				case '4':
					system("cls");
					show_student10(&info, "Grade 10\\LRN10.txt", "Grade 10\\Lastname10.txt", "Grade 10\\Firstname10.txt", "Grade 10\\Middlename10.txt",
					"Grade 10\\1qt.txt",  "Grade 10\\2qt.txt", "Grade 10\\3qt.txt", "Grade 10\\4qt.txt", "10", "Grade 10\\temp.txt");
				break;
				case '5':
					system("cls");
					goto home;
				break;
				case '6':
					system("pause");
					exit(0);
				break;
			}
		break;
		case '3': system("pause"); exit(0); break;
	}
}

void menu()
{	
	cout << "=================================" << endl;
	cout << "\tGrading System" << endl;
	cout << "=================================" << endl;
	cout << "[1] Add Student" << endl;
	cout << "[2] Show Students" << endl;
	cout << "[3] Exit" << endl;
	cout << "Choice: ";
}

void year_level()
{	
	cout << "=================================" << endl;
	cout << "\tGrading System" << endl;
	cout << "=================================" << endl;
	cout << "Year Level" << endl;
	cout << "[1] Grade 7" << endl;
	cout << "[2] Grade 8" << endl;
	cout << "[3] Grade 9" << endl;
	cout << "[4] Grade 10" << endl;
	cout << "[5] Back" << endl;
	cout << "[6] Exit" << endl;
	cout << "Choice: ";
}

void add_student789(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt)
{
	char add_grades_choice, loop_choice_adding, loop_choice_unadding;
	int latest_id = 0, add_id, add_lrn, check_id;
	string  check_lrn, temp_grades1;
	
	ifstream count_users1(f_lrn.c_str());
		while(count_users1 >> add_id >> add_lrn)
		{
			latest_id = add_id;
		}
	count_users1.close();
	
	cout << "=================================" << endl;
	cout << "\tGrading System" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "Add Student" << endl;
	cout << endl;
	cout << "LRN: ";
	cin.ignore(); //delete new line
	cin.getline(info->lrn, 30);
	ifstream check_lrn1(f_lrn.c_str());
		while(check_lrn1 >> check_id >> check_lrn)
		{
			if(info->lrn == check_lrn)
			{
				system("cls");
				cout << "Invalid input, LRN is already existed. Please try again!" << endl;
				main();
			}
		}
	check_lrn1.close();
	cout << "Lastname: ";
	cin.getline(info->lname, 30);
	cout << "Firstname: ";
	cin.getline(info->fname, 30);
	cout << "Middlename: ";
	cin.getline(info->mname, 30);

	ofstream lrn(f_lrn.c_str() , ios::out | ios::app);
	ofstream lname(f_lname.c_str() , ios::out | ios::app);
	ofstream fname(f_fname.c_str() , ios::out | ios::app);
	ofstream mname(f_mname.c_str() , ios::out | ios::app);
	lrn << latest_id+1 << " " << info->lrn << endl;
	lname << info->lname << endl;
	fname << info->fname << endl;
	mname << info->mname << endl;
	
	cout << "Do you want to Add the Grades Y/N: ";
	cin >> add_grades_choice;
	while(toupper(add_grades_choice) != 'Y' && toupper(add_grades_choice) != 'N')
	{
		cout << "Invalid Input! Please enter again the correct choice!" << endl;
		cout << "Do you want to Add Grades Y/N: ";
		cin >> add_grades_choice;
	}
		if(toupper(add_grades_choice) == 'Y')
		{
			system("cls");
			char adding_grades_choice1, adding_grades_choice2, adding_grades_choice3, adding_grades_choice4;
			string temp_grades;
			
			cout << "=================================" << endl;
			cout << "\tGrading System" << endl;
			cout << "=================================" << endl;
			cout << endl;
			cout << "LRN: " << info->lrn << endl;
			cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
			cout << "Add Grades on 1st Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice1;
			
			while(adding_grades_choice1 != '1' && adding_grades_choice1 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice1; 
			}
			
			if(adding_grades_choice1 == '1')	//1ST QUARTER CONTINUE
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				cout << "1ST QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				
				ofstream grades(f_1qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
				grades.close();
			}
			if(adding_grades_choice1 == '2')	//1ST QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				
				ofstream grades(f_1qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
				grades.close();
			}
				cout << endl;
	
			cout << "Add Grades on 2nd Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice2;
			
			while(adding_grades_choice2 != '1' && adding_grades_choice2 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice2;
			}
			
			if(adding_grades_choice2 == '1')	//2ND QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				cout << "2nd QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
					ofstream grades(f_2qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
					grades.close();
			}
			
			if(adding_grades_choice2 == '2')	//2ND QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				ofstream grades(f_2qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
				grades.close();
			}
				cout << endl;		
			
			cout << "Add Grades on 3rd Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice3;		
			
			while(adding_grades_choice3 != '1' && adding_grades_choice3 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice3;
			}
			
			if(adding_grades_choice3 == '1')	//3RD QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				cout << "3rd QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				ofstream grades(f_3qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
				grades.close();
			}
			
			if(adding_grades_choice3 == '2')	//3RD QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				ofstream grades(f_3qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
				grades.close();
			}
				cout << endl;		
			
			cout << "Add Grades on 4th Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice4;		
			
			while(adding_grades_choice4 != '1' && adding_grades_choice4 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice4;
			}
			
			if(adding_grades_choice4 == '1')	//4TH QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				cout << "4th QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
					ofstream grades(f_4qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
					grades.close();
			}
			
			if(adding_grades_choice4 == '2')	//4TH QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
				ofstream grades(f_4qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
					grades.close();
			}
				cout << endl;		
			
			cout << "Records Successfully Updated!" << endl;
			lrn.close(); lname.close(); fname.close(); mname.close(); 
			
			cout << "[1] Home" << endl;
			cout << "[2] Exit" << endl;
			cout << "Choice: ";
			cin >> loop_choice_adding;
			
			while(loop_choice_adding != '1' && loop_choice_adding != '2')
			{
				cout << "Invalid input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> loop_choice_adding;
			}
			
			switch (loop_choice_adding)
			{
				case '1': system("cls"); main(); break;
				case '2': system("pause"); exit(0); break;
			}
	}
	if(toupper(add_grades_choice) == 'N')
	{
		int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
		ofstream grades1(f_1qt.c_str() , ios::out | ios::app);
		grades1 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
		grades1.close();
		
		ofstream grades2(f_2qt.c_str() , ios::out | ios::app);
		grades2 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
		grades2.close();
		
		ofstream grades3(f_3qt.c_str() , ios::out | ios::app);
		grades3 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
		grades3.close();
		
		ofstream grades4(f_4qt.c_str() , ios::out | ios::app);
		grades4 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
		grades4.close();
		cout << "Records Successfully Updated!" << endl;
		
		cout << "[1] Home" << endl;
		cout << "[2] Exit" << endl;
		cout << "Choice: ";
		cin >> loop_choice_unadding;
		
		while(loop_choice_unadding != '1' && loop_choice_unadding != '2')
		{
			cout << "Invalid input! Please enter again the correct choice!" << endl;
			cout << "Choice: ";
			cin >> loop_choice_unadding;
		}
		
		switch (loop_choice_unadding)
		{
			case '1': system("cls"); main(); break;
			case '2': system("pause"); exit(0); break;
		}
	}
}

void add_student10(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt)
{
	char add_grades_choice, loop_choice_adding, loop_choice_unadding;
	int latest_id = 0, add_id, add_lrn, check_id;
	string  check_lrn, temp_grades1;
	
	ifstream count_users1(f_lrn.c_str());
		while(count_users1 >> add_id >> add_lrn)
		{
			latest_id = add_id;
		}
	count_users1.close();
	
	cout << "=================================" << endl;
	cout << "\tGrading System" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "Add Student" << endl;
	cout << endl;
	cout << "LRN: ";
	cin.ignore(); //delete new line
	cin.getline(info->lrn, 30);
	ifstream check_lrn1(f_lrn.c_str());
		while(check_lrn1 >> check_id >> check_lrn)
		{
			if(info->lrn == check_lrn)
			{
				system("cls");
				cout << "Invalid input, LRN is already existed. Please try again!" << endl;
				main();
			}
		}
	check_lrn1.close();
	cout << "Lastname: ";
	cin.getline(info->lname, 30);
	cout << "Firstname: ";
	cin.getline(info->fname, 30);
	cout << "Middlename: ";
	cin.getline(info->mname, 30);

	ofstream lrn(f_lrn.c_str() , ios::out | ios::app);
	ofstream lname(f_lname.c_str() , ios::out | ios::app);
	ofstream fname(f_fname.c_str() , ios::out | ios::app);
	ofstream mname(f_mname.c_str() , ios::out | ios::app);
	lrn << latest_id+1 << " " << info->lrn << endl;
	lname << info->lname << endl;
	fname << info->fname << endl;
	mname << info->mname << endl;
	
	cout << "Do you want to Add the Grades Y/N: ";
	cin >> add_grades_choice;
	while(toupper(add_grades_choice) != 'Y' && toupper(add_grades_choice) != 'N')
	{
		cout << "Invalid Input! Please enter again the correct choice!" << endl;
		cout << "Do you want to Add Grades Y/N: ";
		cin >> add_grades_choice;
	}
		if(toupper(add_grades_choice) == 'Y')
		{
			system("cls");
			char adding_grades_choice1, adding_grades_choice2, adding_grades_choice3, adding_grades_choice4;
			string temp_grades;
			
			cout << "=================================" << endl;
			cout << "\tGrading System" << endl;
			cout << "=================================" << endl;
			cout << endl;
			cout << "LRN: " << info->lrn << endl;
			cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
			cout << "Add Grades on 1st Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice1;
			
			while(adding_grades_choice1 != '1' && adding_grades_choice1 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice1;
			}
			
			if(adding_grades_choice1 == '1')	//1ST QUARTER CONTINUE
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				cout << "1ST QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
				
				ofstream grades(f_1qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
				grades.close();
			}
			if(adding_grades_choice1 == '2')	//1ST QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				
				ofstream grades(f_1qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
				grades.close();
			}
				cout << endl;
	
			cout << "Add Grades on 2nd Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice2;
			
			while(adding_grades_choice2 != '1' && adding_grades_choice2 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice2;
			}
			
			if(adding_grades_choice2 == '1')	//2ND QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				cout << "2nd QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
					ofstream grades(f_2qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
					grades.close();
			}
			
			if(adding_grades_choice2 == '2')	//2ND QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				ofstream grades(f_2qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
				grades.close();
			}
				cout << endl;		
			
			cout << "Add Grades on 3rd Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice3;		
			
			while(adding_grades_choice3 != '1' && adding_grades_choice3 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice3;
			}
			
			if(adding_grades_choice3 == '1')	//3RD QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				cout << "3rd QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
				ofstream grades(f_3qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
				grades.close();
			}
			
			if(adding_grades_choice3 == '2')	//3RD QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				ofstream grades(f_3qt.c_str() , ios::out | ios::app);
				grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
				grades.close();
			}
				cout << endl;		
			
			cout << "Add Grades on 4th Quarter?" <<endl;
			cout << "[1] Continue   [2]Skip" << endl;
			cout << "Choice: ";
			cin >> adding_grades_choice4;		
			
			while(adding_grades_choice4 != '1' && adding_grades_choice4 != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> adding_grades_choice4;
			}
			
			if(adding_grades_choice4 == '1')	//4TH QUARTER CONTINUE
			{
				system("cls");
				cout << "=================================" << endl;
				cout << "\tGrading System" << endl;
				cout << "=================================" << endl;
				cout << endl;
				cout << "LRN: " << info->lrn << endl;
				cout << "Fullname: " << info->lname << " " << info->fname << " " << info->mname << endl << endl;
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				cout << "4th QUARTER" << endl;
				cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
				cout << "Math: ";	cin >> math;				math=valid_grade(math);
				cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
				cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
				cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
				cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
				cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
				cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
				cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
					ofstream grades(f_4qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
					grades.close();
			}
			
			if(adding_grades_choice4 == '2')	//4TH QUARTER SKIP
			{
				int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
				ofstream grades(f_4qt.c_str() , ios::out | ios::app);
					grades << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
					grades.close();
			}
				cout << endl;		
			
			cout << "Records Successfully Updated!" << endl;
			lrn.close(); lname.close(); fname.close(); mname.close(); 
			
			cout << "[1] Home" << endl;
			cout << "[2] Exit" << endl;
			cout << "Choice: ";
			cin >> loop_choice_adding;
			
			while(loop_choice_adding != '1' && loop_choice_adding != '2')
			{
				cout << "Invalid input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> loop_choice_adding;
			}
			
			switch (loop_choice_adding)
			{
				case '1': system("cls"); main(); break;
				case '2': system("pause"); exit(0); break;
			}
	}
	if(toupper(add_grades_choice) == 'N')
	{
		int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
		ofstream grades1(f_1qt.c_str() , ios::out | ios::app);
		grades1 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
		grades1.close();
		
		ofstream grades2(f_2qt.c_str() , ios::out | ios::app);
		grades2 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
		grades2.close();
		
		ofstream grades3(f_3qt.c_str() , ios::out | ios::app);
		grades3 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
		grades3.close();
		
		ofstream grades4(f_4qt.c_str() , ios::out | ios::app);
		grades4 << latest_id+1 << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
		grades4.close();
		cout << "Records Successfully Updated!" << endl;
		
		cout << "[1] Home" << endl;
		cout << "[2] Exit" << endl;
		cout << "Choice: ";
		cin >> loop_choice_unadding;
		
		while(loop_choice_unadding != '1' && loop_choice_unadding != '2')
		{
			cout << "Invalid input! Please enter again the correct choice!" << endl;
			cout << "Choice: ";
			cin >> loop_choice_unadding;
		}
		
		switch (loop_choice_unadding)
		{
			case '1': system("cls"); main(); break;
			case '2': system("pause"); exit(0); break;
		}
	}
}

void show_student789(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt, string f_ylevel, string f_temp)
{
	int x=0, temp_grades;
	int id1, st1, math1, ict1, eng1, fil1, ss1, mapeh1, ve1;
	int id2, st2, math2, ict2, eng2, fil2, ss2, mapeh2, ve2;
	int id3, st3, math3, ict3, eng3, fil3, ss3, mapeh3, ve3;
	int id4, st4, math4, ict4, eng4, fil4, ss4, mapeh4, ve4;
	int temp_id; 
	char view_grades_choice;
	
	string lrns, grades, lnames, fnames, mnames;
	string store_lrn[60], store_grades[60], store_lnames[60], store_fnames[60], store_mnames[60];
	
	ifstream lrn(f_lrn.c_str()); 
	ifstream lname(f_lname.c_str());
	ifstream fname(f_fname.c_str()); 
	ifstream mname(f_mname.c_str());
	
	string lname1, fname1, mname1;
	int lrn1, temp_x = 0;
	
	cout << endl << "List of Grade " << f_ylevel << " Students: " << endl;
	cout << "\tLRN\t\t\tLastname\t\tFirstname\t\tMiddlname" << endl;
	while(lrn >> temp_id >> lrn1 && getline(lname,lname1) && getline(fname,fname1) && getline(mname,mname1))
	{
		cout << "\t" << left << setw(24) << lrn1 << setw(24) << lname1 << setw(24) << fname1 << mname1 << endl;
		temp_x++;
	}
	lrn.close(); lname.close(); fname.close(); mname.close(); cout << endl << endl;
	
	if(temp_x <= 0)
	{
		char temp_x_choice;
		cout << "No records existed!" << endl;
		cout << "[1] Home" << endl;
		cout << "[2] Exit" << endl;
		cout << "Choice: ";
		cin >> temp_x_choice;
		switch(temp_x_choice)
		{
			case '1': system("Cls"); main(); break;
			case '2': system("pause"); exit(0); break;	
	    } 
	}
	
	else
	{
		int choose_lrn;
		cout << "Do you want to view their Grades Y/N: ";
		cin >> view_grades_choice;
		
		while(toupper(view_grades_choice) != 'Y' && toupper(view_grades_choice) != 'N')
		{
			cout << "Invalid input! Please enter again the correct choice!" << endl;
			cout << "Do you want to view their Grades Y/N: ";
			cin >> view_grades_choice;
		}
		
		if(toupper(view_grades_choice) == 'Y')
		{
			lrn789_again:
			cout << "Please enter the LRN : ";
			cin >> choose_lrn;		
			
			ifstream find_lname(f_lname.c_str());
			ifstream find_fname(f_fname.c_str());		
			ifstream find_mname(f_mname.c_str());	
			while(getline(find_lname, lnames) && getline(find_fname, fnames) && getline(find_mname, mnames))
			{
				store_lnames[x] = lnames;
				store_fnames[x] = fnames;
				store_mnames[x] = mnames;
				x++;
			}
			find_fname.close(); find_lname.close(); find_mname.close();
			
			int id_lrn, temp_lrn, check=0;
			
			ifstream find_lrn1(f_lrn.c_str());
			while(find_lrn1 >> id_lrn >> temp_lrn)
			{
				if(choose_lrn == temp_lrn)
				{
					system("cls");
					cout << "=================================" << endl;
					cout << "\tGrading System" << endl;
					cout << "=================================" << endl;
					cout << endl;
					cout << "LRN: " << temp_lrn << endl;
					cout << "Fullname: " << store_lnames[id_lrn-1] << ", " << store_fnames[id_lrn-1] << " " << store_mnames[id_lrn-1] << endl << endl;
					temp_grades = id_lrn;
					check = 1;
					break;
				}
			}
			find_lrn1.close();
		
			if(check != 1)
			{
				cout << "Invalid LRN, No student record!" << endl;
				cout << "Please try again!" << endl;
				goto lrn789_again;
			}
			
			string seperate_grades;
			cout << setw(35) << "\t    Subjects" << setw(20) << "1st Quarter" << setw(20) << "2nd Quarter" << setw(20) << "3rd Quarter" << setw(20) << "4th Quarter"<< setw(20) << "Final Grade" << setw(20) << " Remarks" << endl;
			ifstream check_grades1(f_1qt.c_str());
			ifstream check_grades2(f_2qt.c_str());
			ifstream check_grades3(f_3qt.c_str());
			ifstream check_grades4(f_4qt.c_str());
				while(check_grades1 >> id1 >> st1 >> math1 >> ict1 >> eng1 >> fil1 >> ss1 >> mapeh1 >> ve1 &&
					check_grades2 >> id2 >> st2 >> math2 >> ict2 >> eng2 >> fil2 >> ss2 >> mapeh2 >> ve2 &&
					check_grades3 >> id3 >> st3 >> math3 >> ict3 >> eng3 >> fil3 >> ss3 >> mapeh3 >> ve3 &&
					check_grades4 >> id4 >> st4 >> math4 >> ict4 >> eng4 >> fil4 >> ss4 >> mapeh4 >> ve4)
				{
					if(temp_grades == id1)
					{	
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tSCIENCE & TECHNOLOGY" << setw(20) << st1 << setw(20) << st2  << setw(20) << st3  << setw(20) << st4 << setw(15) << average789(st1,st2,st3,st4) << passing(average789(st1,st2,st3,st4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tMATH" << setw(20) << math1 << setw(20) << math2  << setw(20) << math3  << setw(20) << math4 << setw(15) << average789(math1,math2,math3,math4) << passing(average789(math1,math2,math3,math4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tICT" << setw(20) << ict1 << setw(20) << ict2  << setw(20) << ict3  << setw(20) << ict4 << setw(15) << average789(ict1,ict2,ict3,ict4) << passing(average789(ict1,ict2,ict3,ict4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tENGLISH" << setw(20) << eng1 << setw(20) << eng2  << setw(20) << eng3  << setw(20) << eng4 << setw(15) << average789(eng1,eng2,eng3,eng4) << passing(average789(eng1,eng2,eng3,eng4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tFILIPINO" << setw(20) << fil1 << setw(20) << fil2 << setw(20) << fil3  << setw(20) << fil4 << setw(15) << average789(fil1,fil2,fil3,fil4) << passing(average789(fil1,fil2,fil3,fil4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tSOCIAL STUDIES" << setw(20) << ss1 << setw(20) << ss2  << setw(20) << ss3  << setw(20) << ss4 << setw(15) << average789(ss1,ss2,ss3,ss4) << passing(average789(ss1,ss2,ss3,ss4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tMAPEH" << setw(20) << mapeh1 << setw(20) << mapeh2  << setw(20) << mapeh3  << setw(20) << mapeh4 << setw(15) << average789(mapeh1,mapeh2,mapeh3,mapeh4) << passing(average789(mapeh1,mapeh2,mapeh3,mapeh4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tVALUES EDUCATION" << setw(20) << ve1 << setw(20) << ve2  << setw(20) << ve3  << setw(20) << ve4 << setw(15) << average789(ve1,ve2,ve3,ve4) << passing(average789(ve1,ve2,ve3,ve4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << endl << "Final Average: " << f_average789((average789(st1,st2,st3,st4)), average789(math1,math2,math3,math4), 
															average789(ict1,ict2,ict3,ict4), average789(eng1,eng2,eng3,eng4), average789(fil1,fil2,fil3,fil4), 
															average789(ss1,ss2,ss3,ss4), average789(mapeh1,mapeh2,mapeh3,mapeh4), average789(ve1,ve2,ve3,ve4)) << endl;
						cout << "Final Remarks: " << f_remarks789(f_average789(average789(st1,st2,st3,st4), average789(math1,math2,math3,math4), 
															average789(ict1,ict2,ict3,ict4), average789(eng1,eng2,eng3,eng4), average789(fil1,fil2,fil3,fil4), 
															average789(ss1,ss2,ss3,ss4), average789(mapeh1,mapeh2,mapeh3,mapeh4), average789(ve1,ve2,ve3,ve4)));
						cout << endl << "NO GRADE / INCOMPLETE = 0" << endl;
						break;
					}
				}
				
			check_grades1.close();
			check_grades2.close();
			check_grades3.close();
			check_grades4.close();
				//UPDATE GRADES
				char choicee;
				cout << endl << "Do you want to ADD/UPDATE Grades Y/N: ";
				cin >> choicee;
				
				while(toupper(choicee) != 'Y' && toupper(choicee) != 'N')
				{		
					cout << "Invalid input! Please enter again the correct choice!" << endl;
					cout << "Do you want to ADD/UPDATE Grades Y/N: ";
					cin >> choicee;
				}
				
				if(toupper(choicee) == 'Y')
				{
					char adding_grades_choice1, adding_grades_choice2, adding_grades_choice3, adding_grades_choice4;
					cout << "LRN: " << temp_lrn << endl;
					cout << "Fullname: " << store_lnames[id_lrn-1] << ", " << store_fnames[id_lrn-1] << " " << store_mnames[id_lrn-1] << endl << endl;
					cout << "Add Grades on 1st Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice1;
					
					while(adding_grades_choice1 != '1' && adding_grades_choice1 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice1;
					}
					
					if(adding_grades_choice1 == '1')	//1ST QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						cout << "1ST QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						
						ifstream count_users(f_1qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
						count_users.close(); update_data.close();
						
						remove(f_1qt.c_str());
						rename(f_temp.c_str(), f_1qt.c_str());
							
					}
					if(adding_grades_choice1 == '2')	//1ST QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						ifstream count_users(f_1qt.c_str());
						ifstream count_users2(f_1qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_1qt.c_str());
						rename(f_temp.c_str(), f_1qt.c_str());
						cout << endl;
					}
			
					
					cout << "Add Grades on 2nd Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice2;
					
					while(adding_grades_choice2 != '1' && adding_grades_choice2 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice2;
					}
					
					if(adding_grades_choice2 == '1')	//2ND QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						cout << "2nd QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						
						ifstream count_users(f_2qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
						count_users.close(); update_data.close();
						
						remove(f_2qt.c_str());
						rename(f_temp.c_str(), f_2qt.c_str());
					}																
					
					if(adding_grades_choice2 == '2')	//2ND QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						ifstream count_users(f_2qt.c_str());
						ifstream count_users2(f_2qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_2qt.c_str());
						rename(f_temp.c_str(), f_2qt.c_str());
						cout << endl;
					}
					
					cout << "Add Grades on 3rd Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice3;		
					
					while(adding_grades_choice3 != '1' && adding_grades_choice3 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice3;
					}
					
					if(adding_grades_choice3 == '1')	//3RD QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						cout << "3rd QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						
						ifstream count_users(f_3qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
						count_users.close(); update_data.close();
						
						remove(f_3qt.c_str());
						rename(f_temp.c_str(), f_3qt.c_str());
					}
					
					if(adding_grades_choice3 == '2')	//3RD QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						ifstream count_users(f_3qt.c_str());
						ifstream count_users2(f_3qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_3qt.c_str());
						rename(f_temp.c_str(), f_3qt.c_str());
						cout << endl;
					}
					
					cout << "Add Grades on 4th Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice4;		
					
					while(adding_grades_choice4 != '1' && adding_grades_choice4 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice4;
					}
					
					if(adding_grades_choice4 == '1')	//4TH QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						cout << "4th QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						
						ifstream count_users(f_4qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
						count_users.close(); update_data.close();
						
						remove(f_4qt.c_str());
						rename(f_temp.c_str(), f_4qt.c_str());
					}
					
					if(adding_grades_choice4 == '2')	//4TH QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve;
						ifstream count_users(f_4qt.c_str());
						ifstream count_users2(f_4qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_4qt.c_str());
						rename(f_temp.c_str(), f_4qt.c_str());
						cout << endl;
					}		
					
					cout << "Records Successfully Updated!" << endl;
					lrn.close(); lname.close(); fname.close(); mname.close();
					char choice;
					cout << "[1] Home" << endl;
					cout << "[2] Exit" << endl;
					cout << "Choice: ";
					cin >> choice;
					
					while(choice != '1' && choice != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> choice;
					}
					
					switch(choice)
					{
						case '1': system("cls"); main(); break;
						case '2': system("pause"); exit(0); break;
					}
				}
				if(toupper(choicee) == 'N')
				{
					char choice;
					cout << "[1] Home" << endl;
					cout << "[2] Exit" << endl;
					cout << "Choice: ";
					cin >> choice;
					
					while(choice != '1' && choice != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> choice;
					}
					
					switch(choice)
					{
						case '1': system("cls"); main(); break;
						case '2': system("pause"); exit(0); break;
					}
				}
		}	
		if(toupper(view_grades_choice) == 'N')
		{
			char choice;
			cout << "[1] Home" << endl;
			cout << "[2] Exit" << endl;
			cout << "Choice: ";
			cin >> choice;
			
			while(choice != '1' && choice != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> choice;
			}
			
			switch(choice)
			{
				case '1': system("cls"); main(); break;
				case '2': system("pause"); exit(0); break;
			}
		}
	}
	
}

void show_student10(struct Student* info, string f_lrn, string f_lname, string f_fname, string f_mname, string f_1qt, string f_2qt, string f_3qt, string f_4qt, string f_ylevel, string f_temp)
{
	int x=0, temp_grades;
	int id1, st1, math1, ict1, eng1, fil1, ss1, mapeh1, ve1, rs1;
	int id2, st2, math2, ict2, eng2, fil2, ss2, mapeh2, ve2, rs2;
	int id3, st3, math3, ict3, eng3, fil3, ss3, mapeh3, ve3, rs3;
	int id4, st4, math4, ict4, eng4, fil4, ss4, mapeh4, ve4, rs4;
	int temp_id; 
	char view_grades_choice;
	
	string lrns, grades, lnames, fnames, mnames;
	string store_lrn[60], store_grades[60], store_lnames[60], store_fnames[60], store_mnames[60];
	
	ifstream lrn(f_lrn.c_str()); 
	ifstream lname(f_lname.c_str());
	ifstream fname(f_fname.c_str()); 
	ifstream mname(f_mname.c_str());
	
	string lname1, fname1, mname1;
	int lrn1, temp_x = 0;
	
	cout << endl << "List of Grade " << f_ylevel << " Students: " << endl;
	cout << "\tLRN\t\t\tLastname\t\tFirstname\t\tMiddlname" << endl;
	while(lrn >> temp_id >> lrn1 && getline(lname,lname1) && getline(fname,fname1) && getline(mname,mname1))
	{
		cout << "\t" << left << setw(24) << lrn1 << setw(24) << lname1 << setw(24) << fname1 << mname1 << endl;
		temp_x++;
	}
	lrn.close(); lname.close(); fname.close(); mname.close(); cout << endl << endl;
	
	if(temp_x <= 0)
	{
		char temp_x_choice;
		cout << "No records existed!" << endl;
		cout << "[1] Home" << endl;
		cout << "[2] Exit" << endl;
		cout << "Choice: ";
		cin >> temp_x_choice;
		switch(temp_x_choice)
		{
			case '1': system("Cls"); main(); break;
			case '2': system("pause"); exit(0); break;	
	    } 
	}
	
	else
	{
		int choose_lrn;
		cout << "Do you want to view their Grades Y/N: ";
		cin >> view_grades_choice;
		
		while(toupper(view_grades_choice) != 'Y' && toupper(view_grades_choice) != 'N')
		{
			cout << "Invalid input! Please enter again the correct choice!" << endl;
			cout << "Do you want to view their Grades Y/N: ";
			cin >> view_grades_choice;
		}
		
		if(toupper(view_grades_choice) == 'Y')
		{
			lrn789_again:
			cout << "Please enter the LRN : ";
			cin >> choose_lrn;		
			
			ifstream find_lname(f_lname.c_str());
			ifstream find_fname(f_fname.c_str());		
			ifstream find_mname(f_mname.c_str());	
			while(getline(find_lname, lnames) && getline(find_fname, fnames) && getline(find_mname, mnames))
			{
				store_lnames[x] = lnames;
				store_fnames[x] = fnames;
				store_mnames[x] = mnames;
				x++;
			}
			find_fname.close(); find_lname.close(); find_mname.close();
			
			int id_lrn, temp_lrn, check=0;
			
			ifstream find_lrn1(f_lrn.c_str());
			while(find_lrn1 >> id_lrn >> temp_lrn)
			{
				if(choose_lrn == temp_lrn)
				{
					system("cls");
					cout << "=================================" << endl;
					cout << "\tGrading System" << endl;
					cout << "=================================" << endl;
					cout << endl;
					cout << "LRN: " << temp_lrn << endl;
					cout << "Fullname: " << store_lnames[id_lrn-1] << ", " << store_fnames[id_lrn-1] << " " << store_mnames[id_lrn-1] << endl << endl;
					temp_grades = id_lrn;
					check = 1;
					break;
				}
			}
			find_lrn1.close();
		
			if(check != 1)
			{
				cout << "Invalid LRN, No student record!" << endl;
				cout << "Please try again!" << endl;
				goto lrn789_again;
			}
			
			string seperate_grades;
			cout << setw(35) << "\t    Subjects" << setw(20) << "1st Quarter" << setw(20) << "2nd Quarter" << setw(20) << "3rd Quarter" << setw(20) << "4th Quarter"<< setw(20) << "Final Grade" << setw(20) << " Remarks" << endl;
			ifstream check_grades1(f_1qt.c_str());
			ifstream check_grades2(f_2qt.c_str());
			ifstream check_grades3(f_3qt.c_str());
			ifstream check_grades4(f_4qt.c_str());
				while(check_grades1 >> id1 >> st1 >> math1 >> ict1 >> eng1 >> fil1 >> ss1 >> mapeh1 >> ve1 >> rs1 &&
					check_grades2 >> id2 >> st2 >> math2 >> ict2 >> eng2 >> fil2 >> ss2 >> mapeh2 >> ve2 >> rs2 &&
					check_grades3 >> id3 >> st3 >> math3 >> ict3 >> eng3 >> fil3 >> ss3 >> mapeh3 >> ve3 >> rs3 &&
					check_grades4 >> id4 >> st4 >> math4 >> ict4 >> eng4 >> fil4 >> ss4 >> mapeh4 >> ve4 >> rs4)
				{
					if(temp_grades == id1)
					{	
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tSCIENCE & TECHNOLOGY" << setw(20) << st1 << setw(20) << st2  << setw(20) << st3  << setw(20) << st4 << setw(15) << average789(st1,st2,st3,st4) << passing(average789(st1,st2,st3,st4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tMATH" << setw(20) << math1 << setw(20) << math2  << setw(20) << math3  << setw(20) << math4 << setw(15) << average789(math1,math2,math3,math4) << passing(average789(math1,math2,math3,math4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tICT" << setw(20) << ict1 << setw(20) << ict2  << setw(20) << ict3  << setw(20) << ict4 << setw(15) << average789(ict1,ict2,ict3,ict4) << passing(average789(ict1,ict2,ict3,ict4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tENGLISH" << setw(20) << eng1 << setw(20) << eng2  << setw(20) << eng3  << setw(20) << eng4 << setw(15) << average789(eng1,eng2,eng3,eng4) << passing(average789(eng1,eng2,eng3,eng4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tFILIPINO" << setw(20) << fil1 << setw(20) << fil2 << setw(20) << fil3  << setw(20) << fil4 << setw(15) << average789(fil1,fil2,fil3,fil4) << passing(average789(fil1,fil2,fil3,fil4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tSOCIAL STUDIES" << setw(20) << ss1 << setw(20) << ss2  << setw(20) << ss3  << setw(20) << ss4 << setw(15) << average789(ss1,ss2,ss3,ss4) << passing(average789(ss1,ss2,ss3,ss4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tMAPEH" << setw(20) << mapeh1 << setw(20) << mapeh2  << setw(20) << mapeh3  << setw(20) << mapeh4 << setw(15) << average789(mapeh1,mapeh2,mapeh3,mapeh4) << passing(average789(mapeh1,mapeh2,mapeh3,mapeh4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tVALUES EDUCATION" << setw(20) << ve1 << setw(20) << ve2  << setw(20) << ve3  << setw(20) << ve4 << setw(15) << average789(ve1,ve2,ve3,ve4) << passing(average789(ve1,ve2,ve3,ve4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << setw(40) << "\tRESEARCH" << setw(20) << rs1 << setw(20) << rs2  << setw(20) << rs3  << setw(20) << rs4 << setw(15) << average789(rs1,rs2,rs3,rs4) << passing(average789(rs1,rs2,rs3,rs4)) << endl;
						cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
						cout << endl << "Final Average: " << f_average10((average789(st1,st2,st3,st4)), average789(math1,math2,math3,math4), 
															average789(ict1,ict2,ict3,ict4), average789(eng1,eng2,eng3,eng4), average789(fil1,fil2,fil3,fil4), 
															average789(ss1,ss2,ss3,ss4), average789(mapeh1,mapeh2,mapeh3,mapeh4), average789(ve1,ve2,ve3,ve4)
															, average789(rs1,rs2,rs3,rs4)) << endl;
						cout << "Final Remarks: " << f_remarks789(f_average10(average789(st1,st2,st3,st4), average789(math1,math2,math3,math4), 
															average789(ict1,ict2,ict3,ict4), average789(eng1,eng2,eng3,eng4), average789(fil1,fil2,fil3,fil4), 
															average789(ss1,ss2,ss3,ss4), average789(mapeh1,mapeh2,mapeh3,mapeh4), average789(ve1,ve2,ve3,ve4),
															average789(rs1,rs2,rs3,rs4)));
						cout << endl << "NO GRADE / INCOMPLETE = 0" << endl;
						break;
					}
				}
				
			check_grades1.close();
			check_grades2.close();
			check_grades3.close();
			check_grades4.close();
				//UPDATE GRADES
				char choicee;
				cout << endl << "Do you want to ADD/UPDATE Grades Y/N: ";
				cin >> choicee;
				
				while(toupper(choicee) != 'Y' && toupper(choicee) != 'N')
				{		
					cout << "Invalid input! Please enter again the correct choice!" << endl;
					cout << "Do you want to ADD/UPDATE Grades Y/N: ";
					cin >> choicee;
				}
				
				if(toupper(choicee) == 'Y')
				{
					char adding_grades_choice1, adding_grades_choice2, adding_grades_choice3, adding_grades_choice4;
					cout << "LRN: " << temp_lrn << endl;
					cout << "Fullname: " << store_lnames[id_lrn-1] << ", " << store_fnames[id_lrn-1] << " " << store_mnames[id_lrn-1] << endl << endl;
					cout << "Add Grades on 1st Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice1;
					
					while(adding_grades_choice1 != '1' && adding_grades_choice1 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice1;
					}
					
					if(adding_grades_choice1 == '1')	//1ST QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						cout << "1ST QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
						
						ifstream count_users(f_1qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
						count_users.close(); update_data.close();
						
						remove(f_1qt.c_str());
						rename(f_temp.c_str(), f_1qt.c_str());
							
					}
					if(adding_grades_choice1 == '2')	//1ST QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve, rs;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						ifstream count_users(f_1qt.c_str());
						ifstream count_users2(f_1qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve >> rs)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_1qt.c_str());
						rename(f_temp.c_str(), f_1qt.c_str());
						cout << endl;
					}
			
					
					cout << "Add Grades on 2nd Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice2;
					
					while(adding_grades_choice2 != '1' && adding_grades_choice2 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice2;
					}
					
					if(adding_grades_choice2 == '1')	//2ND QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						cout << "2nd QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
						
						ifstream count_users(f_2qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
						count_users.close(); update_data.close();
						
						remove(f_2qt.c_str());
						rename(f_temp.c_str(), f_2qt.c_str());
					}
					
					if(adding_grades_choice2 == '2')	//2ND QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve, rs;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						ifstream count_users(f_2qt.c_str());
						ifstream count_users2(f_2qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve >> rs)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_2qt.c_str());
						rename(f_temp.c_str(), f_2qt.c_str());
						cout << endl;
					}
					
					cout << "Add Grades on 3rd Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice3;		
					
					while(adding_grades_choice3 != '1' && adding_grades_choice3 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice3;
					}
					
					if(adding_grades_choice3 == '1')	//3RD QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						cout << "3rd QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
						
						ifstream count_users(f_3qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
						count_users.close(); update_data.close();
						
						remove(f_3qt.c_str());
						rename(f_temp.c_str(), f_3qt.c_str());
					}
					
					if(adding_grades_choice3 == '2')	//3RD QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve, rs;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						ifstream count_users(f_3qt.c_str());
						ifstream count_users2(f_3qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve >> rs)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_3qt.c_str());
						rename(f_temp.c_str(), f_3qt.c_str());
						cout << endl;
					}
					
					cout << "Add Grades on 4th Quarter?" <<endl;
					cout << "[1] Continue   [2]Skip" << endl;
					cout << "Choice: ";
					cin >> adding_grades_choice4;		
					
					while(adding_grades_choice4 != '1' && adding_grades_choice4 != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> adding_grades_choice4;
					}
					
					if(adding_grades_choice4 == '1')	//4TH QUARTER CONTINUE
					{
						int st=0, math=0, ict=0, eng=0, fil=0, ss=0, mapeh=0, ve=0, rs=0;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						cout << "4th QUARTER" << endl;
						cout << "Science & Technology: ";	cin >> st;  st=valid_grade(st);
						cout << "Math: ";	cin >> math;				math=valid_grade(math);
						cout << "ICT: ";	cin >> ict;					ict=valid_grade(ict);
						cout << "English: ";	cin >> eng;				eng=valid_grade(eng);
						cout << "Filipino: ";	cin >> fil;				fil=valid_grade(fil);
						cout << "Social Studies: ";	cin >> ss;			ss=valid_grade(ss);
						cout << "Mapeh: ";	cin >> mapeh;				mapeh=valid_grade(mapeh);
						cout << "Values Education: ";	cin >> ve;		ve=valid_grade(ve);
						cout << "Research: "; cin >> rs;				rs=valid_grade(rs);
						
						ifstream count_users(f_4qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						update_data << id_lrn << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
						count_users.close(); update_data.close();
						
						remove(f_4qt.c_str());
						rename(f_temp.c_str(), f_4qt.c_str());
					}
					
					if(adding_grades_choice4 == '2')	//4TH QUARTER SKIP
					{
						int id, st, math, ict, eng, fil, ss, mapeh, ve, rs;
						int c_id, c_st, c_math, c_ict, c_eng, c_fil, c_ss, c_mapeh, c_ve, c_rs;
						ifstream count_users(f_4qt.c_str());
						ifstream count_users2(f_4qt.c_str());
						ofstream update_data(f_temp.c_str());
						while(count_users >> c_id >> c_st >> c_math >> c_ict >> c_eng >> c_fil >> c_ss >> c_mapeh >> c_ve >> c_rs)
						{
							if(id_lrn != c_id)
							{
								update_data << c_id << " " << c_st << " " << c_math << " " << c_ict << " " << c_eng << " " << c_fil << " " << c_ss << " " << c_mapeh << " " << c_ve << " " << c_rs << endl;
							}
						}
						while(count_users2 >> id >> st >> math >> ict >> eng >> fil >> ss >> mapeh >> ve >> rs)
						{
							if(id_lrn == id)
							{
								update_data << id << " " << st << " " << math << " " << ict << " " << eng << " " << fil << " " << ss << " " << mapeh << " " << ve << " " << rs << endl;
							}
						}
						count_users2.close(); count_users.close(); update_data.close();
						
						remove(f_4qt.c_str());
						rename(f_temp.c_str(), f_4qt.c_str());
						cout << endl;
					}		
					
					cout << "Records Successfully Updated!" << endl;
					lrn.close(); lname.close(); fname.close(); mname.close();
					char choice;
					cout << "[1] Home" << endl;
					cout << "[2] Exit" << endl;
					cout << "Choice: ";
					cin >> choice;
					
					while(choice != '1' && choice != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> choice;
					}
					
					switch(choice)
					{
						case '1': system("cls"); main(); break;
						case '2': system("pause"); exit(0); break;
					}
				}
				if(toupper(choicee) == 'N')
				{
					char choice;
					cout << "[1] Home" << endl;
					cout << "[2] Exit" << endl;
					cout << "Choice: ";
					cin >> choice;
					
					while(choice != '1' && choice != '2')
					{
						cout << "Invalid Input! Please enter again the correct choice!" << endl;
						cout << "Choice: ";
						cin >> choice;
					}
					
					switch(choice)
					{
						case '1': system("cls"); main(); break;
						case '2': system("pause"); exit(0); break;
					}
				}
		}	
		if(toupper(view_grades_choice) == 'N')
		{
			char choice;
			cout << "[1] Home" << endl;
			cout << "[2] Exit" << endl;
			cout << "Choice: ";
			cin >> choice;
			
			while(choice != '1' && choice != '2')
			{
				cout << "Invalid Input! Please enter again the correct choice!" << endl;
				cout << "Choice: ";
				cin >> choice;
			}
			
			switch(choice)
			{
				case '1': system("cls"); main(); break;
				case '2': system("pause"); exit(0); break;
			}
		}
	}
	
}

int average789(int a, int b, int c, int d)
{
	int count = 0;
	if(a == 0) { count ++; }
	if(b == 0) { count ++; }
	if(c == 0) { count ++; }
	if(d == 0) { count ++; }
	
	if(count > 0)
	{
		return 0;
	}
	else
	{
		double ave = 0.0;
		double sum = 0.0;
		sum = a + b + c + d;
		ave = sum/4;
		return round(ave);
	}
}


string passing (int x)
{
	string final_passing = " ";	
	if(x == 0)
	{
		final_passing = "INCOMPLETE";
	}
	else if(x >= 1 && x <75)
	{
		final_passing = "FAILED";
	}
	else if(x >=75 && x < 101)
	{
		final_passing = "PASSED";
	}
	return final_passing;
}


int f_average789(int a, int b, int c, int d, int e, int f, int g, int h)
{
	int count = 0;
	if(a == 0) { count ++; }
	if(b == 0) { count ++; }
	if(c == 0) { count ++; }
	if(d == 0) { count ++; }
	if(e == 0) { count ++; }
	if(f == 0) { count ++; }
	if(g == 0) { count ++; }
	if(h == 0) { count ++; }
	if(count > 0)
	{
		return 0;
	}
	else
	{
		double ave = 0.0;
		double sum = 0.0;
		sum = a + b + c + d + e + f + g + h;
		ave = sum/8;
		return round(ave);
	}
}

int f_average10(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	int count = 0;
	if(a == 0) { count ++; }
	if(b == 0) { count ++; }
	if(c == 0) { count ++; }
	if(d == 0) { count ++; }
	if(e == 0) { count ++; }
	if(f == 0) { count ++; }
	if(g == 0) { count ++; }
	if(h == 0) { count ++; }
	if(i == 0) { count ++; }
	if(count > 0)
	{
		return 0;
	}
	else
	{
		double ave = 0.0;
		double sum = 0.0;
		sum = a + b + c + d + e + f + g + h + i;
		ave = sum/9;
		return round(ave);
	}
}

string f_remarks789(int x)
{
	string final_passing = " ";	
	if(x == 0)
	{
		final_passing = "INCOMPLETE";
	}
	else if(x >= 1 && x < 75)
	{
		final_passing = "FAILED";
	}
	else if(x >=75 && x < 101)
	{
		final_passing = "PASSED";
	}
	return final_passing;
}

int valid_grade(int x)
{
	try_again:
	while(x < 0 || x > 100)
	{
		cout << "The number that you've inputted is invalid. Please try again" << endl;
		cout << "Enter the grade again: ";
		cin >> x;
	}
	if(x >= 0 && x <= 100)
	{
		return x;
	}
	else
	{
		goto try_again;
	}
}

