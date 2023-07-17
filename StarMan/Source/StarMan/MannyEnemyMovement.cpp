// Fill out your copyright notice in the Description page of Project Settings.


#include "MannyEnemyMovement.h"

// Sets default values for this component's properties
UMannyEnemyMovement::UMannyEnemyMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMannyEnemyMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMannyEnemyMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
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

