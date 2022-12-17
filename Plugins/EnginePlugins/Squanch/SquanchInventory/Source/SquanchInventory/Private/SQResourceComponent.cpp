#include "SQResourceComponent.h"

void USQResourceComponent::UseResource_Implementation(int32 Stacks) {
}

void USQResourceComponent::RefreshResource_Implementation(int32 Stacks) {
}

bool USQResourceComponent::HasResourceAvailable_Implementation(int32 Stacks) {
    return false;
}

int32 USQResourceComponent::GetResourceAvailable_Implementation() {
    return 0;
}

int32 USQResourceComponent::GetMaxResourceAvailable_Implementation() {
    return 0;
}

void USQResourceComponent::DepleteResource_Implementation() {
}

bool USQResourceComponent::CanRefreshResource_Implementation() {
    return false;
}

int32 USQResourceComponent::AddResourceIndividual_Implementation(int32 Amount) {
    return 0;
}

int32 USQResourceComponent::AddResource_Implementation(int32 Stacks) {
    return 0;
}

USQResourceComponent::USQResourceComponent() {
}

