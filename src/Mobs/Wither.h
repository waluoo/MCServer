
#pragma once

#include "AggressiveMonster.h"





class cWither :
	public cAggressiveMonster
{
	typedef cAggressiveMonster super;
	
public:
	cWither(void);

	CLASS_PROTODEF(cWither);

	/** Returns whether the wither is invulnerable to arrows. */
	bool IsArmored(void) const;
	
	// cEntity overrides
	virtual bool Initialize(cWorld * a_World) override;
	virtual void GetDrops(cItems & a_Drops, cEntity * a_Killer = NULL) override;
	virtual bool DoTakeDamage(TakeDamageInfo & a_TDI) override;
	virtual void Tick(float a_Dt, cChunk & a_Chunk) override;

private:

	bool m_IsSpawnInvulnerable;

} ;




