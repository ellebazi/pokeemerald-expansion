# 1 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
LittlerootTown_BellsHouse_MapScripts::
# 2 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	.byte 0

LittlerootTown_BellsHouse_house_RARE_CANDY::
# 7 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	lockall
# 8 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 9 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 10 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	msgbox LittlerootTown_BellsHouse_house_RARE_CANDY_Text_0
# 11 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	releaseall
	return


LittlerootTown_BellsHouse_house_RARE_CANDY_Text_0:
# 10 "data/maps/LittlerootTown_BellsHouse/scripts.pory"
	.string "You recieved a rare candy!$"
