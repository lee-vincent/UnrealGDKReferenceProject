﻿// Generated by Unreal External Schema Codegen

#include "ValueAnnotation.h"
#include <set>
#include "../../MapEquals.h"

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(14,1)
namespace improbable {
namespace database_sync {

ValueAnnotation::ValueAnnotation() {}

bool ValueAnnotation::operator==(const ValueAnnotation& Value) const
{
	return true;
}

bool ValueAnnotation::operator!=(const ValueAnnotation& Value) const
{
	return !operator== (Value);
}

void ValueAnnotation::Serialize(Schema_Object* SchemaObject) const {}

ValueAnnotation ValueAnnotation::Deserialize(Schema_Object* SchemaObject)
{
	return ValueAnnotation::Create();
}

uint32 GetTypeHash(const improbable::database_sync::ValueAnnotation& Value)
{
	uint32 Result = 1327;
	
	return Result;
}

} // namespace database_sync
} // namespace improbable