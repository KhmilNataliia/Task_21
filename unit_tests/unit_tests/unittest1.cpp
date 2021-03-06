#include "stdafx.h"
#include "CppUnitTest.h"
#include "catch.hpp"
#include "faculty.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("lector")
	{
		lector *lec = new lector("John", "Smith");
		string n = lec->get_name();
		string s = lec->get_surname();
		bool res = true;
		if (n != "John" || s != "Smith") res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("course")
	{
		lector *lec = new lector("John", "Smith");
		course *c = new course("math", lec);
		lec->add_course(c);
		string cap=c->get_cap();
		REQUIRE(cap=="math");
	};
	TEST_CASE("student")
	{
		lector *lec = new lector("John", "Smith");
		course *c = new course("math", lec);
		lec->add_course(c);
		student *st = new student("Ann", "Miller");
		st->add_course(c);
		vector<string> s=c->get_students();
		REQUIRE(s[0] == "Miller");
	};
	TEST_CASE("student_point")
	{
		lector *lec = new lector("John", "Smith");
		course *c = new course("math", lec);
		lec->add_course(c);
		student *st = new student("Ann", "Miller");
		st->add_course(c);
		c->set_point(0, 95);
		fstream pre; pre.open("archive.txt", ios_base::out); pre.clear(); pre.close();
		c->write_archive();
		fstream f;
		f.open("archive.txt");
		string sub;
		f >> sub;
		string h; f >> h;
		string l_n, l_s, s_n, s_s, p;
		f >> l_n; f >> l_s; f >> s_n; f >> s_s; f >> h; f >> p;
		bool res = true;
		if (l_n != "John" || l_s != "Smith" || sub != "math:" || s_n != "Ann" || s_s != "Miller" || p != "95;") res = false;
		f.close();
		REQUIRE(res==true);
	};
}