#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BRHUD.generated.h"

UCLASS()
class VAYLOX_API ABRHUD : public AHUD
{
    GENERATED_BODY()

public:
    ABRHUD();
protected:
    virtual void DrawHUD() override;
    // Add crosshair, health bar, zone indicators here
};
