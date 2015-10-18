#include "../Libraries/LibStr.h"

using namespace std;

#ifndef JSONOBJECT_H
#define JSONOBJECT_H


class jsonObject
{
public:
	jsonObject();
	~jsonObject();
	jsonObject(string header, string type, string value);

	void SetHeader(const string& header) {
		this->header = header;
	}
	void SetType(const vector<string>& type) {
		this->type = type;
	}
	void SetValue(const vector<string>& value) {
		this->value = value;
	}
	const string& GetHeader() const {
		return header;
	}
	const vector<string>& GetType() const {
		return this->type;
	}
	const vector<string>&GetValue() const {
		return this->value;
	}
private :
	string header;
	vector<string> type;
	vector<string> value;
};

#endif // JSONOBJECT_H
