/******************************************************************************/
/*!
\file	Projectile.h
\author Quek Tse Hiang Reuben
\par	email: 152773F\@nyp.edu.sg
\brief
Class to create Projectiles
*/
/******************************************************************************/
#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "GameObject.h"
#include "Vector3.h"

enum PROJECTILE_TYPE
{
    P_ARROW = 0,
    P_FIRE,

    P_TOTAL
};

/******************************************************************************/
/*!
Class GameObject.h:
\brief	Creates Projectiles for the game
*/
/******************************************************************************/
class CProjectile : public GameObject
{
public:
	CProjectile();                              //< Default Constructor
	~CProjectile();                             //< Destructor

	//< Getters
	float GetProjectileCount();                 //< Returns Projectile Count
	float GetProjectileDMG();                   //< Returns Projectile Damage
	float GetProjectileLifetime();              //< Returns Projectile Lifetime
	
	//< Setters
	void SetProjectileCount(float count);       //< Set Projectile Count
	void SetProjectileDMG(float damage);        //< Set Projectile Damage
	void SetProjectileLifetime(float lifetime); //< Set Projectile Lifetime

    GameObject projectile;
private:
	//< Variables
	float proj_count;                           //< Projectile Count
	float proj_dmg;                             //< Projectile Damage
	float proj_lifetime;                        //< Projectile Lifetime
};

#endif /* PROJECTILE_H */