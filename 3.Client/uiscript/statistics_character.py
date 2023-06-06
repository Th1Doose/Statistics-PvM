import item
import uiScriptLocale

MIDDLE_VALUE_FILE = "d:/ymir work/ui/public/Parameter_Slot_01.sub"

window = {
	"name" : "StatisticsWindow",
	
	"x" : SCREEN_WIDTH - 650,
	"y" : 15,
	
	"style" : ("movable", "float",),
	
	"width" : 290,
	"height" : 110,
	
	"children" :
	(
		{
			"name" : "board",
			"type" : "board",
			"style" : ("attach",),
			
			"x" : 0,
			"y" : 0,
			"width" : 290,
			"height" : 110,
			
			"children" :
			(
				{
					"name" : "TitleBar",
					"type" : "titlebar",
					"style" : ("attach",),
					
					"x" : 6,
					"y" : 6,
					
					"width" : 278,
					"color" : "yellow",
					
					"children" :
					(
						{ "name":"TitleName", "type":"text", "x":135, "y":3, "text":"Statistics", "text_horizontal_align":"center" },
					),
				},
				{
						"name" : "statistics_base",
						"type" : "image",
						
						"x" : 27,
						"y" : 38,
						
						"image" : "d:/ymir work/ui/game/windows/statistics_character.sub",
				},
				{
					"name" : "boss",
					"type" : "text",
					"x" : 30,
					"y" : 40,
					
					"text" : "BOSS",
					
					"width" : 145,
					"height" : 172,
				},
				{
					"name" : "BOSS_VALUE",
					"type" : "window",
					"x" : 17,
					"y" : 60,
					"width" : 145,
					"height" : 172,
					"children" :
					(
						{
							"name" : "boss_value",
							"type" : "image",
							"x" : 0,
							"y" : 0,
							"image" : MIDDLE_VALUE_FILE
						},
						{
							"name" : "boss_value1",
							"type" : "text",
							"x" : 26,
							"y" : 3,
							"text" : "0",
							"r" : 1.0,
							"g" : 1.0,
							"b" : 1.0,
							"a" : 1.0,
							"text_horizontal_align":"center"
						},
					),
				},
				{
					"name" : "stones",
					"type" : "text",
					"x" : 120,
					"y" : 40,
					
					"text" : "STONES",
					
					"width" : 145,
					"height" : 172,
				},
				{
					"name" : "STONES_VALUE",
					"type" : "window",
					"x" : 113,
					"y" : 60,
					"width" : 145,
					"height" : 172,
					"children" :
					(
						{
							"name" : "stone_value",
							"type" : "image",
							"x" : 0,
							"y" : 0,
							"image" : MIDDLE_VALUE_FILE
						},
						{
							"name" : "stone_value1",
							"type" : "text",
							"x" : 26,
							"y" : 3,
							"text" : "0",
							"r" : 1.0,
							"g" : 1.0,
							"b" : 1.0,
							"a" : 1.0,
							"text_horizontal_align":"center"
						},
					),
				},
				{
					"name" : "monsters",
					"type" : "text",
					"x" : 210,
					"y" : 40,
					
					"text" : "MONSTERS",
					
					"width" : 145,
					"height" : 172,
				},
				{
					"name" : "MONSTERS_VALUE",
					"type" : "window",
					"x" : 207,
					"y" : 60,
					"width" : 145,
					"height" : 172,
					"children" :
					(
						{
							"name" : "monsters_value",
							"type" : "image",
							"x" : 0,
							"y" : 0,
							"image" : MIDDLE_VALUE_FILE
						},
						{
							"name" : "monsters_value1",
							"type" : "text",
							"x" : 26,
							"y" : 3,
							"text" : "0",
							"r" : 1.0,
							"g" : 1.0,
							"b" : 1.0,
							"a" : 1.0,
							"text_horizontal_align":"center"
						},
					),
				},
			),
		},
	),
}