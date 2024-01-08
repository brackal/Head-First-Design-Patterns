///////////////////////////////////////////////////////////
//  Duck.h
//  Implementation of the Class Duck
//  Created on:      08-Jan-2024 11:33:41
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_F5DE59F3_4855_4f3b_BA98_DEFD64005B8A__INCLUDED_)
#define EA_F5DE59F3_4855_4f3b_BA98_DEFD64005B8A__INCLUDED_

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

class Duck
{

public:
	Duck();
	virtual ~Duck();
	void swim();
	virtual void display() =0;
	void setFlyBehavior(IFlyBehavior * flyBehavior);
	void setQuackBehavior(IQuackBehavior * quackBehavior);
	void performFly();
	void performQuack();

private:
	IFlyBehavior* mFlyBehavior;
	IQuackBehavior* mQuackBehavior;

};
#endif // !defined(EA_F5DE59F3_4855_4f3b_BA98_DEFD64005B8A__INCLUDED_)
