import ui
import localeInfo
import player
import item
import uiToolTip
import wndMgr
import app
import constInfo

class statisticschar(ui.ScriptWindow):
	def __init__(self):
		ui.ScriptWindow.__init__(self)
		self.__LoadWindow()

	def Show(self):
		ui.ScriptWindow.Show(self)
		self.SetTop()

	def __del__(self):
		ui.ScriptWindow.__del__(self)

	def Close(self):
		self.Hide()

	def OnPressEscapeKey(self):
		self.Close()
		return TRUE

	def __LoadWindow(self):
		try:			
			pyScrLoader = ui.PythonScriptLoader()
			pyScrLoader.LoadScriptFile(self, "uiscript/statistics_character.py")
		except:
			import exception
			exception.Abort("statisticschar.__LoadWindow")

		self.__Initialize()

	def __Initialize(self):
		self.rndboss = self.GetChild("boss_value1")
		self.rndstone = self.GetChild("stone_value1")
		self.rndmonster = self.GetChild("monsters_value1")
	
	def Refresh(self):
		self.rndboss.SetText("%i" % constInfo.STATISTICS[0])
		self.rndstone.SetText("%i" % constInfo.STATISTICS[1])
		self.rndmonster.SetText("%i" % constInfo.STATISTICS[2])
	def OnUpdate(self):
		self.Refresh()
