﻿// Generated by Unreal External Schema Codegen

#pragma once

#include <cstdint>
#include <functional>

namespace improbable {
namespace database_sync {

// Generated from dbsync/database_sync.schema(22,1)
enum class CommandErrors : uint32
{
	NONE = 0,
	UNAUTHORIZED = 1001,
	INVALID_REQUEST = 1002,
	INTERNAL_ERROR = 1003,
	DATABASE_OPERATION_FAILED = 1004,
};

} // namespace database_sync
} // namespace improbable
