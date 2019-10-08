﻿// Generated by Unreal External Schema Codegen

#include "DatabaseSyncItem.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(59,1)
namespace improbable {
namespace database_sync {

DatabaseSyncItem::DatabaseSyncItem(
	const FString& Name, 
	int64 Count, 
	const FString& Path)
: _Name{ Name }
, _Count{ Count }
, _Path{ Path } {}

DatabaseSyncItem::DatabaseSyncItem() {}

bool DatabaseSyncItem::operator==(const DatabaseSyncItem& Value) const
{
	return _Name == Value._Name && 
	_Count == Value._Count && 
	_Path == Value._Path;
}

bool DatabaseSyncItem::operator!=(const DatabaseSyncItem& Value) const
{
	return !operator== (Value);
}

const FString& DatabaseSyncItem::GetName() const
{
	return _Name;
}

FString& DatabaseSyncItem::GetName()
{
	return _Name; 
}

DatabaseSyncItem& DatabaseSyncItem::SetName(const FString& Value)
{
	_Name = Value;
	return *this;
}

int64 DatabaseSyncItem::GetCount() const
{
	return _Count;
}

int64& DatabaseSyncItem::GetCount()
{
	return _Count; 
}

DatabaseSyncItem& DatabaseSyncItem::SetCount(int64 Value)
{
	_Count = Value;
	return *this;
}

const FString& DatabaseSyncItem::GetPath() const
{
	return _Path;
}

FString& DatabaseSyncItem::GetPath()
{
	return _Path; 
}

DatabaseSyncItem& DatabaseSyncItem::SetPath(const FString& Value)
{
	_Path = Value;
	return *this;
}

void DatabaseSyncItem::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field Name = 1
	::improbable::utils::AddString(SchemaObject, 1, _Name);
	// serializing field Count = 2
	Schema_AddInt64(SchemaObject, 2, _Count);
	// serializing field Path = 3
	::improbable::utils::AddString(SchemaObject, 3, _Path);
}

DatabaseSyncItem DatabaseSyncItem::Deserialize(Schema_Object* SchemaObject)
{
	DatabaseSyncItem Data;
	
	// deserializing field Name = 1
	Data._Name = ::improbable::utils::GetString(SchemaObject, 1);
	
	// deserializing field Count = 2
	Data._Count = Schema_GetInt64(SchemaObject, 2);
	
	// deserializing field Path = 3
	Data._Path = ::improbable::utils::GetString(SchemaObject, 3);
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::DatabaseSyncItem& Value)
{
	uint32 Result = 1327;
	Result = (Result * 977) + ::GetTypeHash(Value.GetName());
	Result = (Result * 977) + ::GetTypeHash(Value.GetCount());
	Result = (Result * 977) + ::GetTypeHash(Value.GetPath());
	return Result;
}

} // namespace database_sync
} // namespace improbable