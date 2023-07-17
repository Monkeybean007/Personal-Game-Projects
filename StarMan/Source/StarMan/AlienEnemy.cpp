// Fill out your copyright notice in the Description page of Project Settings.


#include "AlienEnemy.h"

// Sets default values
AAlienEnemy::AAlienEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAlienEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAlienEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAlienEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    int health;
    int armor;
public:
    Player(int h, int a) {
        health = h;
        armor = a;
    }
    void takeDamage(int damage) {
        int totalDamage = damage - armor;
        if (totalDamage < 0) {
            totalDamage = 0;
        }
        health -= totalDamage;
        cout << "Player took " << totalDamage << " damage." << endl;
        if (health <= 0) {
            cout << "Player is dead!" << endl;
        }
    }
};

class Enemy {
private:
    int health;
    int damage;
public:
    Enemy(int h, int d) {
        health = h;
        damage = d;
    }
    void attack(Player& p) {
        p.takeDamage(damage);
    }
};

int main() {
    Player player(100, 50);
    Enemy enemy(50, 20);
    enemy.attack(player);
    return 0;
}
