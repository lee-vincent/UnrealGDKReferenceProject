﻿// Generated by Unreal External Schema Codegen

#include "IncrementResponse.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(131,1)
namespace improbable {
namespace database_sync {

IncrementResponse::IncrementResponse(
	int64 NewCount)
: _NewCount{ NewCount } {}

IncrementResponse::IncrementResponse() {}

bool IncrementResponse::operator==(const IncrementResponse& Value) const
{
	return _NewCount == Value._NewCount;
}

bool IncrementResponse::operator!=(const IncrementResponse& Value) const
{
	return !operator== (Value);
}

int64 IncrementResponse::GetNewCount() const
{
	return _NewCount;
}

int64& IncrementResponse::GetNewCount()
{
	return _NewCount; 
}

IncrementResponse& IncrementResponse::SetNewCount(int64 Value)
{
	_NewCount = Value;
	return *this;
}

void IncrementResponse::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field NewCount = 1
	Schema_AddInt64(SchemaObject, 1, _NewCount);
}

IncrementResponse IncrementResponse::Deserialize(Schema_Object* SchemaObject)
{
	IncrementResponse Data;
	
	// deserializing field NewCount = 1
	Data._NewCount = Schema_GetInt64(SchemaObject, 1);
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::IncrementResponse& Value)
{
	uint32 Result = 1327;
	Result = (Result * 977) + ::GetTypeHash(Value.GetNewCount());
	return Result;
}

} // namespace database_sync
} // namespace improbable
