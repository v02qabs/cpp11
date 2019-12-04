#include "install.h"

using namespace std;

void FindInfo(xmlNode *&element)
{
	char *count;
	for(htmlNodePtr node = element;node!=NULL;node=node->next)
	{
		count = (char *)node->next->next->children->content;
		string a = count;
		cout << "p" << a << endl;
		if(xmlStrcasecmp(node->name, (const xmlChar*)"p")==0)
		{
			for(xmlAttrPtr attr = node->properties; attr!=NULL; attr = attr->next)
			{
				if(xmlStrcasecmp(node->name, (const xmlChar*)"title")==0)
				{
					count = (char *)node->next->next->children->content;
					string a = count;
					cout << "p1" << a << endl;
				}
			}
		}
		if(node->children !=NULL)
		{
			FindInfo(node->children);
		}
	}
}

