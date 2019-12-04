#include "install.h"

using namespace std;

int main()
{
	htmlDocPtr doc;
	string files("http://takos.chobi.net");
	string encs("utf-8");
	const char *file= files.c_str();
	const char *enc = encs.c_str();
	if(doc == htmlReadFile(file,enc, HTML_PARSE_RECOVER))
	{
		htmlNodePtr root = xmlDocGetRootElement(doc);
		if(root != NULL)
		{
			FindInfo(root);
		}
		xmlFreeDoc(doc);
		doc = NULL;
	}
	xmlCleanupParser();
	xmlCleanupCharEncodingHandlers();
	return 0;
}

