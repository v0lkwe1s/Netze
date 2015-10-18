#include "LibJson.h"

namespace std
{

json::json()
{
}
void json::toJson(jsonObject obj)
{
	//{"PinHeader" :[{"type":"3.3V","pin":"1","gpio":"0"}]}
	string str = "{\"" + obj.GetHeader() + "\":[{";
	for(unsigned int i = 0; i < obj.GetType().size(); i++ ) {
		str += "\"" + obj.GetType()[i] + "\":";
		str += "\"" + obj.GetValue()[i] + "\"";
		obj.GetType().size()-1 == i ? str += "}" : str += ",";
	}
	str += "]}";
	cout << str << endl;
}

json::~json()
{
}


}
