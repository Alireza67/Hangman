#pragma once

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
namespace pt = boost::property_tree;

#include "structs.h"
#include <vector>

class DatabaseReader
{
public:
	static std::vector<Expression> ReadLesson(const std::wstring& jsonPath);

private:
	static std::vector<Expression> ReadInformation(pt::ptree const& root);
	static pt::ptree OpenJsonFile(const std::wstring& jsonFilePath);
};