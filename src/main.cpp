#include <memory>

#include <fstream>
#include <boost/filesystem.hpp>
#include <spdlog/spdlog.h>
#include <nlohmann/json.hpp>
#include "bse/msg/NQXXDBFMsg.h"
#include "bse/msg/NQXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQHQDBFMsg.h"
#include "bse/msg/NQHQDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQWTDBFMsg.h"
#include "bse/msg/NQWTDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQHBDBFMsg.h"
#include "bse/msg/NQHBDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQXYXXDBFMsg.h"
#include "bse/msg/NQXYXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQZSXXDBFMsg.h"
#include "bse/msg/NQZSXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQFGKSBXXDBFMsg.h"
#include "bse/msg/NQFGKSBXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/NQFGKCJXXDBFMsg.h"
#include "bse/msg/NQFGKCJXXDBFMsgJsonSerializer.hpp"
#include "bse/msg/BJSBSDBFMsg.h"
#include "bse/msg/BJSBSDBFMsgJsonSerializer.hpp"
#include "bse/msg/BJSQRDBFMsg.h"
#include "bse/msg/BJSQRDBFMsgJsonSerializer.hpp"

using namespace bse::msg;

int main() {
	if (!boost::filesystem::exists("json/bse/")) {
		boost::filesystem::create_directories("json/bse/");
	}
	{
		NQXXDBFMsg nQXXDBFMsg;
		std::ofstream file("json/bse/NQXXDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQXXDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQXXDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQXXDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQHQDBFMsg nQHQDBFMsg;
		std::ofstream file("json/bse/NQHQDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQHQDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQHQDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQHQDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQWTDBFMsg nQWTDBFMsg;
		std::ofstream file("json/bse/NQWTDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQWTDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQWTDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQWTDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQHBDBFMsg nQHBDBFMsg;
		std::ofstream file("json/bse/NQHBDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQHBDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQHBDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQHBDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQXYXXDBFMsg nQXYXXDBFMsg;
		std::ofstream file("json/bse/NQXYXXDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQXYXXDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQXYXXDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQXYXXDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQZSXXDBFMsg nQZSXXDBFMsg;
		std::ofstream file("json/bse/NQZSXXDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQZSXXDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQZSXXDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQZSXXDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQFGKSBXXDBFMsg nQFGKSBXXDBFMsg;
		std::ofstream file("json/bse/NQFGKSBXXDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQFGKSBXXDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQFGKSBXXDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQFGKSBXXDBFMsg.json 打开文件失败");;
		}
	}
	{
		NQFGKCJXXDBFMsg nQFGKCJXXDBFMsg;
		std::ofstream file("json/bse/NQFGKCJXXDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = nQFGKCJXXDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("NQFGKCJXXDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("NQFGKCJXXDBFMsg.json 打开文件失败");;
		}
	}
	{
		BJSBSDBFMsg bJSBSDBFMsg;
		std::ofstream file("json/bse/BJSBSDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = bJSBSDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("BJSBSDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("BJSBSDBFMsg.json 打开文件失败");;
		}
	}
	{
		BJSQRDBFMsg bJSQRDBFMsg;
		std::ofstream file("json/bse/BJSQRDBFMsg.json");
		if (file.is_open()) {
			nlohmann::json j = bJSQRDBFMsg;
			file << j.dump(4);
			file.close();
			SPDLOG_INFO("BJSQRDBFMsg.json 写入成功!");
		} else {
			SPDLOG_ERROR("BJSQRDBFMsg.json 打开文件失败");;
		}
	}
	return 0;
}
