﻿// Generated by Unreal External Schema Codegen

#pragma once

#include "CoreMinimal.h"
#include "Utils/SchemaOption.h"
#include <WorkerSDK/improbable/c_schema.h>
#include <WorkerSDK/improbable/c_worker.h>

#include "../../ExternalSchemaHelperFunctions.h"

#include "../../improbable/database_sync/CompositeResponse.h"

namespace improbable {
namespace database_sync {

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(253,1)
class BatchOperationResponse : public improbable::SpatialType
{
public:
	// Creates a new instance with specified arguments for each field.
	BatchOperationResponse(const TArray<::improbable::database_sync::CompositeResponse>& Actions);
	// Creates a new instance with default values for each field.
	BatchOperationResponse();
	// Creates a new instance with default values for each field. This is
	// equivalent to a default-constructed instance.
	static BatchOperationResponse Create() { return {}; }
	// Copyable and movable.
	BatchOperationResponse(BatchOperationResponse&&) = default;
	BatchOperationResponse(const BatchOperationResponse&) = default;
	BatchOperationResponse& operator=(BatchOperationResponse&&) = default;
	BatchOperationResponse& operator=(const BatchOperationResponse&) = default;
	~BatchOperationResponse() = default;
	
	bool operator==(const BatchOperationResponse&) const;
	bool operator!=(const BatchOperationResponse&) const;
	
	// Serialize this object data into the C API argument
	void Serialize(Schema_Object* SchemaObject) const override;
	
	// Deserialize the C API object argument into an instance of this class and return it
	static BatchOperationResponse Deserialize(Schema_Object* SchemaObject);
	
	// Field Actions = 1
	const TArray<::improbable::database_sync::CompositeResponse>& GetActions() const;
	TArray<::improbable::database_sync::CompositeResponse>& GetActions();
	BatchOperationResponse& SetActions(const TArray<::improbable::database_sync::CompositeResponse>&);
	
private:
	TArray<::improbable::database_sync::CompositeResponse> _Actions;
};

inline uint32 GetTypeHash(const BatchOperationResponse& Value);

} // namespace database_sync
} // namespace improbable
