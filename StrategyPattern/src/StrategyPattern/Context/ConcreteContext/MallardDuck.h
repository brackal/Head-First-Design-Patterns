///////////////////////////////////////////////////////////
//  MallardDuck.h
//  Implementation of the Class MallardDuck
//  Created on:      08-Jan-2024 11:33:47
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_590FCC7F_73E9_491f_9A4D_178795AECFA8__INCLUDED_)
#define EA_590FCC7F_73E9_491f_9A4D_178795AECFA8__INCLUDED_

#include "IQuackBehavior.h"
#include "IFlyBehavior.h"
#include "Duck.h"

class MallardDuck : public Duck
{

public:
	MallardDuck();

	MallardDuck(IFlyBehavior * flyBehavior, IQuackBehavior * quackBehavior);
	virtual ~MallardDuck();
	virtual void display();

};
#endif // !defined(EA_590FCC7F_73E9_491f_9A4D_178795AECFA8__INCLUDED_)
