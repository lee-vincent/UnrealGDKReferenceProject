﻿// Generated by Unreal External Schema Codegen

#pragma once

#include "CoreMinimal.h"
#include "Utils/SchemaOption.h"
#include <WorkerSDK/improbable/c_schema.h>
#include <WorkerSDK/improbable/c_worker.h>

#include "../../ExternalSchemaHelperFunctions.h"

namespace improbable {
namespace database_sync {

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(170,1)
class SetParentResponse : public improbable::SpatialType
{
public:
	// Creates a new instance with specified arguments for each field.
	SetParentResponse(const FString& NewPath, int64 ItemCount);
	// Creates a new instance with default values for each field.
	SetParentResponse();
	// Creates a new instance with default values for each field. This is
	// equivalent to a default-constructed instance.
	static SetParentResponse Create() { return {}; }
	// Copyable and movable.
	SetParentResponse(SetParentResponse&&) = default;
	SetParentResponse(const SetParentResponse&) = default;
	SetParentResponse& operator=(SetParentResponse&&) = default;
	SetParentResponse& operator=(const SetParentResponse&) = default;
	~SetParentResponse() = default;
	
	bool operator==(const SetParentResponse&) const;
	bool operator!=(const SetParentResponse&) const;
	
	// Serialize this object data into the C API argument
	void Serialize(Schema_Object* SchemaObject) const override;
	
	// Deserialize the C API object argument into an instance of this class and return it
	static SetParentResponse Deserialize(Schema_Object* SchemaObject);
	
	// Field NewPath = 1
	const FString& GetNewPath() const;
	FString& GetNewPath();
	SetParentResponse& SetNewPath(const FString&);
	
	// Field ItemCount = 2
	int64 GetItemCount() const;
	int64& GetItemCount();
	SetParentResponse& SetItemCount(int64);
	
private:
	FString _NewPath;
	int64 _ItemCount;
};

inline uint32 GetTypeHash(const SetParentResponse& Value);

} // namespace database_sync
} // namespace improbable

