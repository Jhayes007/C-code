/*
Filename: InventoryItem.cpp
	Author : J.Hayes
	Date : Nov. 19, 2019
	Purpose : To implement class InventoryItem
	*/

#include "inventoryitem.h"
	using namespace std;

InventoryItem::InventoryItem(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;


}	// end storeInfo()