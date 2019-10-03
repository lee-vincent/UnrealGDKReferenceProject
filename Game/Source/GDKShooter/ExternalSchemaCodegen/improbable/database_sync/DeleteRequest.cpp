﻿// Generated by Unreal External Schema Codegen

#include "DeleteRequest.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(196,1)
namespace improbable {
namespace database_sync {

DeleteRequest::DeleteRequest(
	const FString& Path, 
	const FString& WorkerId)
: _Path{ Path }
, _WorkerId{ WorkerId } {}

DeleteRequest::DeleteRequest() {}

bool DeleteRequest::operator==(const DeleteRequest& Value) const
{
	return _Path == Value._Path && 
	_WorkerId == Value._WorkerId;
}

bool DeleteRequest::operator!=(const DeleteRequest& Value) const
{
	return !operator== (Value);
}

const FString& DeleteRequest::GetPath() const
{
	return _Path;
}

FString& DeleteRequest::GetPath()
{
	return _Path; 
}

DeleteRequest& DeleteRequest::SetPath(const FString& Value)
{
	_Path = Value;
	return *this;
}

const FString& DeleteRequest::GetWorkerId() const
{
	return _WorkerId;
}

FString& DeleteRequest::GetWorkerId()
{
	return _WorkerId; 
}

DeleteRequest& DeleteRequest::SetWorkerId(const FString& Value)
{
	_WorkerId = Value;
	return *this;
}

void DeleteRequest::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field Path = 1
	::improbable::utils::AddString(SchemaObject, 1, _Path);
	// serializing field WorkerId = 2
	::improbable::utils::AddString(SchemaObject, 2, _WorkerId);
}

DeleteRequest DeleteRequest::Deserialize(Schema_Object* SchemaObject)
{
	DeleteRequest Data;
	
	// deserializing field Path = 1
	Data._Path = ::improbable::utils::GetString(SchemaObject, 1);
	
	// deserializing field WorkerId = 2
	Data._WorkerId = ::improbable::utils::GetString(SchemaObject, 2);
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::DeleteRequest& Value)
{
	uint32 Result = 1327;
	Result = (Result * 977) + ::GetTypeHash(Value.GetPath());
	Result = (Result * 977) + ::GetTypeHash(Value.GetWorkerId());
	return Result;
}

} // namespace database_sync
} // namespace improbable
