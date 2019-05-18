// BattleTank by Hysan. For educational purposes only.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UProjectileMovementComponent;

UCLASS()
class BATTLETANK_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void LaunchProjectile(float Speed);

private:
	UProjectileMovementComponent* ProjectileMovement = nullptr;

};
