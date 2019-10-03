﻿// Generated by Unreal External Schema Codegen

#include "PathsUpdated.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(258,1)
namespace improbable {
namespace database_sync {

PathsUpdated::PathsUpdated(
	const TArray<FString>& Paths)
: _Paths{ Paths } {}

PathsUpdated::PathsUpdated() {}

bool PathsUpdated::operator==(const PathsUpdated& Value) const
{
	return _Paths == Value._Paths;
}

bool PathsUpdated::operator!=(const PathsUpdated& Value) const
{
	return !operator== (Value);
}

const TArray<FString>& PathsUpdated::GetPaths() const
{
	return _Paths;
}

TArray<FString>& PathsUpdated::GetPaths()
{
	return _Paths; 
}

PathsUpdated& PathsUpdated::SetPaths(const TArray<FString>& Value)
{
	_Paths = Value;
	return *this;
}

void PathsUpdated::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field Paths = 1
	for (const FString& Element : _Paths)
	{
		::improbable::utils::AddString(SchemaObject, 1, Element);
	}
}

PathsUpdated PathsUpdated::Deserialize(Schema_Object* SchemaObject)
{
	PathsUpdated Data;
	
	// deserializing field Paths = 1
	{
		Data._Paths = ::improbable::utils::GetStringList(SchemaObject, 1);
	}
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::PathsUpdated& Value)
{
	uint32 Result = 1327;
	for (const auto& item : Value.GetPaths())
	{
		Result = (Result * 977) + ::GetTypeHash(item);
	}
	return Result;
}

} // namespace database_sync
} // namespace improbable
