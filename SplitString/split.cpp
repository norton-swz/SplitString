#include "split.h"
std::vector<std::string> splitString(const std::string& vInput, char vSeperator)
{
	std::vector<std::string> result;
	std::string AfterSepStr;
	for (const auto& c : vInput)
	{
		if (c != vSeperator)
		{
			AfterSepStr += c;
		}
		else if (!AfterSepStr.empty())
		{
			result.push_back(AfterSepStr);
			AfterSepStr.clear();
		}
	}
	if (!AfterSepStr.empty()) result.push_back(AfterSepStr);
	return result;
}