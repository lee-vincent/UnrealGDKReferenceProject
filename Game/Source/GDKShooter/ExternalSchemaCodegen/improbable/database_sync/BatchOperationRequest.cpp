﻿// Generated by Unreal External Schema Codegen

#include "BatchOperationRequest.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(248,1)
namespace improbable {
namespace database_sync {

BatchOperationRequest::BatchOperationRequest(
	const TArray<::improbable::database_sync::CompositeRequest>& Actions)
: _Actions{ Actions } {}

BatchOperationRequest::BatchOperationRequest() {}

bool BatchOperationRequest::operator==(const BatchOperationRequest& Value) const
{
	return _Actions == Value._Actions;
}

bool BatchOperationRequest::operator!=(const BatchOperationRequest& Value) const
{
	return !operator== (Value);
}

const TArray<::improbable::database_sync::CompositeRequest>& BatchOperationRequest::GetActions() const
{
	return _Actions;
}

TArray<::improbable::database_sync::CompositeRequest>& BatchOperationRequest::GetActions()
{
	return _Actions; 
}

BatchOperationRequest& BatchOperationRequest::SetActions(const TArray<::improbable::database_sync::CompositeRequest>& Value)
{
	_Actions = Value;
	return *this;
}

void BatchOperationRequest::Serialize(Schema_Object* SchemaObject) const
{
	// serializing field Actions = 1
	for (const ::improbable::database_sync::CompositeRequest& Element : _Actions)
	{
		Element.Serialize(Schema_AddObject(SchemaObject, 1));
	}
}

BatchOperationRequest BatchOperationRequest::Deserialize(Schema_Object* SchemaObject)
{
	BatchOperationRequest Data;
	
	// deserializing field Actions = 1
	{
		auto ListLength = Schema_GetObjectCount(SchemaObject, 1);
		TArray<::improbable::database_sync::CompositeRequest> ActionsList;
		ActionsList.SetNum(ListLength);
		for (uint32 i = 0; i < ListLength; ++i)
		{
			ActionsList[i] = ::improbable::database_sync::CompositeRequest::Deserialize(Schema_IndexObject(SchemaObject, 1, i));
		}
		Data._Actions = ActionsList;
	}
	
	return Data;
}

uint32 GetTypeHash(const improbable::database_sync::BatchOperationRequest& Value)
{
	uint32 Result = 1327;
	for (const auto& item : Value.GetActions())
	{
		Result = (Result * 977) + improbable::database_sync::GetTypeHash(item);
	}
	return Result;
}

} // namespace database_sync
} // namespace improbable
