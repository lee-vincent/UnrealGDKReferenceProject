﻿// Generated by Unreal External Schema Codegen

#include "GetMetricsRequest.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(211,1)
namespace improbable {
namespace database_sync {

GetMetricsRequest::GetMetricsRequest() {}

bool GetMetricsRequest::operator==(const GetMetricsRequest& Value) const
{
	return true;
}

bool GetMetricsRequest::operator!=(const GetMetricsRequest& Value) const
{
	return !operator== (Value);
}

void GetMetricsRequest::Serialize(Schema_Object* SchemaObject) const {}

GetMetricsRequest GetMetricsRequest::Deserialize(Schema_Object* SchemaObject)
{
	return GetMetricsRequest::Create();
}

uint32 GetTypeHash(const improbable::database_sync::GetMetricsRequest& Value)
{
	uint32 Result = 1327;
	
	return Result;
}

} // namespace database_sync
} // namespace improbable