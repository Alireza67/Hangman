#include "pch.h"
#include "databaseReader.h"


std::vector<Expression> DatabaseReader::ReadLesson(const std::wstring& jsonPath)
{
	try
	{
		auto root = OpenJsonFile(jsonPath);
		return ReadInformation(root);
	}
	catch (const std::exception&)
	{
		return std::vector<Expression>();
	}	
}

std::vector<Expression> DatabaseReader::ReadInformation(pt::ptree const& root)
{
	std::vector<Expression> output;
	for (auto& node : root)
	{
		if (node.first == "expressions")
		{
			for (auto& item : node.second)
			{
				auto key = item.second.get<std::string>("key", "");
				auto hint = item.second.get<std::string>("hint", "");
				auto image = item.second.get<std::string>("image", "");
				if (!(key.empty() || hint.empty() || image.empty()))
				{
					output.emplace_back(Expression{ .key = key, .hint = hint, .imageName = image });
				}
			}
		}		
	}
	return output;
}

pt::ptree DatabaseReader::OpenJsonFile(const std::wstring& jsonFilePath)
{
	auto filePath = std::string(jsonFilePath.begin(), jsonFilePath.end());
	pt::ptree root;

	try
	{
		pt::read_json(filePath, root);
		return root;
	}
	catch (const pt::json_parser::json_parser_error& e)
	{
		throw std::runtime_error(e.what());
	}
	catch (pt::ptree_bad_path const& badPathException)
	{
		throw std::runtime_error("Exception caught for bad path: " + std::string(badPathException.what()));
	}
	catch (pt::ptree_bad_data const& badDataException)
	{
		throw std::runtime_error("Exception caught for bad data: " + std::string(badDataException.what()));
	}
	catch (pt::ptree_error const& error)
	{
		throw std::runtime_error("Exception caught for bad data: " + std::string(error.what()));
	}
	catch (const std::exception& e)
	{
		throw std::runtime_error(e.what());
	}
	catch (...)
	{
		throw std::runtime_error("error in open json file");
	}
}
