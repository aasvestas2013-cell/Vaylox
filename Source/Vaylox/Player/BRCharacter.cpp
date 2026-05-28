#include "BRCharacter.h"

ABRCharacter::ABRCharacter()
{
    // Set sensible movement defaults
    GetCharacterMovement()->MaxWalkSpeed = 500.f;
    // TODO: Attach camera boom, setup camera, add mesh references
}

void ABRCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ABRCharacter::MoveForward(float Value)
{
    if (Controller && Value != 0.0f) {
        // Move the character forward/backward
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

void ABRCharacter::MoveRight(float Value)
{
    if (Controller && Value != 0.0f) {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direction, Value);
    }
}

void ABRCharacter::StartJump() {
    bPressedJump = true;
}

void ABRCharacter::StopJump() {
    bPressedJump = false;
}

void ABRCharacter::StartSprint() {
    GetCharacterMovement()->MaxWalkSpeed = 800.f;
}
void ABRCharacter::StopSprint() {
    GetCharacterMovement()->MaxWalkSpeed = 500.f;
}

void ABRCharacter::TurnAtRate(float Rate)
{
    AddControllerYawInput(Rate);
}

void ABRCharacter::LookUpAtRate(float Rate)
{
    AddControllerPitchInput(Rate);
}
