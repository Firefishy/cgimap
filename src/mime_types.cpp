#include "mime_types.hpp"
#include <stdexcept>

using std::string;
using std::runtime_error;

namespace mime {
string to_string(type t) {
	if (any_type == t) {
		return "*/*";
	} else if (text_xml == t) {
		return "text/xml";
	} else if (text_json == t) {
		return "text/json";
	} else {
		throw runtime_error("No string conversion for unspecified MIME type.");
	}
}
}