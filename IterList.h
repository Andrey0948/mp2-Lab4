#pragma once

#include "Link.h"
#include "Iterator.h"

class ItrList :public Iterator
{
	Link* h;
	Link* t;
public:
	ItrList(Link* _h) : h(_h) { t = h->next; }
	virtual bool hasNext() { return t != h; }
	virtual int next() {
		if (!hasNext()) throw - 1;
		int v = t->value;
		t = t->next;
		return v;
	}
};