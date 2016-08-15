/******************************************************************************/
/*!
\file	Projectile.cpp
\author Quek Tse Hiang Reuben
\par	email: 152773F\@nyp.edu.sg
\brief
Class to create Projectiles
*/
/******************************************************************************/
#include "Projectile.h"

CProjectile::CProjectile()
{
}
/******************************************************************************/
/*!
\brief	Vector3 destructor
*/
/******************************************************************************/
CProjectile::~CProjectile()
{
}
/******************************************************************************/
/*!
\brief
GetProjectileCount to get the projectile count

\return
Projectile Count
*/
/******************************************************************************/
float CProjectile::GetProjectileCount()
{
    return proj_count;
}
/******************************************************************************/
/*!
\brief
GetProjectileDMG to get the projectile damage

\return
Projectile Damage
*/
/******************************************************************************/
float CProjectile::GetProjectileDMG()
{
    return proj_dmg;
}
/******************************************************************************/
/*!
\brief
GetProjectileLifetime to get the projectile lifetime

\return
Projectile Lifetime
*/
/******************************************************************************/
float CProjectile::GetProjectileLifetime()
{
    return proj_lifetime;
}
/******************************************************************************/
/*!
\brief
Setting the Projectile Count with a new count;

\param count
The new count to replace the old one
*/
/******************************************************************************/
void CProjectile::SetProjectileCount(float count)
{
    proj_count = count;
}
/******************************************************************************/
/*!
\brief
Setting the Projectile Damage with a new damage;

\param damage
The new damage to replace the old one
*/
/******************************************************************************/
void CProjectile::SetProjectileDMG(float damage)
{
    proj_dmg = damage;
}
/******************************************************************************/
/*!
\brief
Setting the Projectile Lifetime with a new lifetime;

\param lifetime
The new lifetime to replace the old one
*/
/******************************************************************************/
void CProjectile::SetProjectileLifetime(float lifetime)
{
    proj_lifetime = lifetime;
}