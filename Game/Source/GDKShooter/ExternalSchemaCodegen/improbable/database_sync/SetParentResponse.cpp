﻿// Generated by Unreal External Schema Codegen

#include "SetParentResponse.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(170,1)
namespace improbable {
namespace database_sync {

SetParentResponse::SetParentResponse(
	const FString& NewPath, 
	int64 ItemCount)
: _NewPath{ NewPath }
, _ItemCount{ ItemCount } {}

SetParentResponse::SetParentResponse() {}

bool SetParentResponse::operator==(const SetParentResponse& Value) const
{
	return _NewPath == Value._NewPath && 
	_ItemCount == Value._ItemCount;
}

bool SetParentResponse::operator!=(const SetParentResponse& Value) const
{
	return !operator== (Value);
}

const FString& SetParentResponse::GetNewPath() const
{
	return _NewPath;
}

FString& SetParentResponse::GetNewPath()
{
	return _NewPath; 
}

SetParentResponse& SetParentResponse::SetNewPath(const FString& Value)
{
	_NewPath = Value;
	return *this;
}

int64 SetParentResponse::GetItemCount() const
{
	return _ItemCount;
}

int64& SetParentResponse::GetItemCount()
{
	return _ItemCount; 
}

SetParentResponse& SetParentResponse::SetItemCount(int64 Value)
{
	_ItemCount = Value;
	return *this;
}

void SetParentResponse::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field NewPath = 1
	::improbable::utils::AddString(SchemaObject, 1, _NewPath);
	// serializing field ItemCount = 2
	Schema_AddInt64(SchemaObject, 2, _ItemCount);
}

SetParentResponse SetParentResponse::Deserialize(Schema_Object* SchemaObject)
{
	SetParentResponse Data;
	
	// deserializing field NewPath = 1
	Data._NewPath = ::improbable::utils::GetString(SchemaObject, 1);
	
	// deserializing field ItemCount = 2
	Data._ItemCount = Schema_GetInt64(SchemaObject, 2);
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::SetParentResponse& Value)
{
	uint32 Result = 1327;
	Result = (Result * 977) + ::GetTypeHash(Value.GetNewPath());
	Result = (Result * 977) + ::GetTypeHash(Value.GetItemCount());
	return Result;
}

} // namespace database_sync
} // namespace improbable