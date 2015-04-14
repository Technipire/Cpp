#include<iostream>

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
strBlob::StrBlob(initializer_list<string> il):
	data(make_shared<vector<string>>(il)) {}


void StrBlob::check(size_type i, const string &msg) const{
	if( i >= data->size() )
		throw out_of_range(msg);
}

string& strBlob::front(){
	// if the vector is empty, check will throw
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBob::back(){
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back(){
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

