#include<string>
#include<vector>
#include<fstream>

using namespace std;

class course;
class student;

class Man
{
	string name;
	string surname;
public:
	Man(string n, string s) { name = n; surname = s; }
	string get_name() { return name; }
	string get_surname() { return surname; }
};


class lector :public Man
{
	vector<course*> courses;
public:
	lector(string n, string s) : Man(n, s){};
	void add_course(course* c){ courses.push_back(c); }
};

class course
{
	lector* lector_;
	vector<student*> students;
	vector<int> points;
	string capt;
public:
	course(string c, lector* l){ lector_ = l; l->add_course(this); capt = c; }
	string get_cap();
	void add_student(student* s);
	void set_point(int indx, int p);
	void write_archive();

	vector<string> get_students();
};

class student :public Man
{
	vector<course*> courses;
	vector<int> points;
public:
	student(string n, string s) :Man(n, s){};
	void add_course(course* c) { courses.push_back(c); c->add_student(this); points.push_back(0); }
	void set_point(string course, int point)
	{
		int indx = 0;
		while (indx < courses.size() && course != courses.at(indx)->get_cap()) { indx++; }
		if (indx < courses.size())
			points[indx] = point;
	}

};


string course::get_cap() { return capt; }
void course::add_student(student* s) { students.push_back(s); points.push_back(0); }
void course::set_point(int indx, int p)
{
	points[indx] = p;
	students[indx]->set_point(capt, p);
}
void course::write_archive()
{
	fstream f;
	f.open("archive.txt", ios_base::app);
	f << capt;
	f << ":\n\n lector: ";
	f << lector_->get_name(); f << "  "; f << lector_->get_surname(); f << "\n";
	for (int i = 0; i < students.size(); i++)
	{
		f << students.at(i)->get_name(); f << " "; f << students.at(i)->get_surname(); f << " point: "; f << points.at(i);
		f << "; \n";
	}
	f << "\n\n";
	f.close();
}

vector<string> course::get_students()
{
	vector<string> sts;
	for (int i = 0; i < students.size(); i++)
	{
		sts.push_back(students.at(i)->get_surname());
	}
	return sts;
}