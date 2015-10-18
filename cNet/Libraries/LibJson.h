#ifndef JSON_H
#define JSON_H

#include "LibStr.h"
#include "../Model/jsonObject.h"
#include <vector>
namespace std
{
//{PinHeader :[{"type":"3.3V","pin":"1","gpio":"0"}]}
class json
{
public:
	json();
	~json();
	void toJson(jsonObject obj);

};

}

#endif // JSON_H
